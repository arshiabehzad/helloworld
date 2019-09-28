#include <iostream>
#include <fstream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <cmath>


using namespace std;

// setting global variables 

ifstream dnaFile;
string filename;
string line;
int sum = 0;
int nSum = 0;

int A = 0, C = 0, T = 0, G = 0;

int AA = 0, AC = 0, AT = 0, AG = 0;
int CA = 0, CC = 0, CT = 0, CG = 0;
int GA = 0, GC = 0, GT = 0, GG = 0;
int TA = 0, TC = 0, TT = 0, TG = 0;

float probA = 0, probT = 0, probG = 0, probC = 0;

int totalBigrams = 0;
int squaredDifferences = 0;
int mean = 0;
float variance = 0;
float sd = 0;

float a = 0, b = 0,  c = 0, d = 0;
int aGuas = 0, tGuas = 0, gGuas = 0, cGuas = 0;

ofstream outfile;

//initializing methods
void determineBigram(string dnaLine);
void generateStrings();
void reset();

int main(int argc, char **argv)
{
    // opens outfile 
    outfile.open("arshia.txt");
    //writes header onto outfile 
    outfile << "Arshia Behzad \n";
    outfile << "ID: 23204643\n\n";
    outfile << "________________________________________________________________________ \n";

    //this while loop will run until the user says they want to quit
    while (true){

        // asks the user for the name of the file and opens it
        cout << "Enter the name of the file: ";
        cin >> filename;
        dnaFile.open(filename);
        cout << "Running analysis... \n";

        // this while loop goes through the file line by line 
        while (getline(dnaFile, line))
        {
            //calls the determine bigram function
            determineBigram(line);

            // if the line length is greater than zero it adds to the sum of the number of lines
            if (line.length() > 0)
                sum++;
            
            // this loop runs through the individual nucleotides on the current line
            for (int i = 0; i < line.length(); i++)
            {
                //checks if the nucleotide is a proper entry and if so adds to the nucleotide sum
                if (line[i] == 'A' || line[i] == 'a' || line[i] == 'T' || line[i] == 't' || line[i] == 'G' || line[i] == 'g' || line[i] == 'C' || line[i] == 'c')
                {

                    nSum++;
                }

                /*  set of if statements that check to see what nucleotide the entry is and adds 
                    to the variable keeping track of the number of that nucleotide            */
                if (line[i] == 'A' || line[i] == 'a')
                {
                    A++;
                }
                else if (line[i] == 'T' || line[i] == 't')
                {
                    T++;
                }
                else if (line[i] == 'G' || line[i] == 'g')
                {
                    G++;
                }
                else if (line[i] == 'C' || line[i] == 'c')
                {
                    C++;
                }
            }
        }
        //closes the DNA file
        dnaFile.close();

        mean = nSum/sum;

        //reopens the DNA file
        dnaFile.open(filename);

        /* goes through the file line by line a again this time to calculate variance 
            Note: This couldn't be done in the first while loop because the mean is necessary
            to calcuate the variance, and the mean is only calculated by the end of the previous
            while loop */
        while(getline(dnaFile, line))
        {
            // ensures the line length is greater than one 
            if(line.length() > 0 ){
                /*calculates the squared differences and adds them together to later 
                 be used in calculating the variance.
                 Note: without casting the 'line.length()' to an int the code would output
                 weird numbers for the differences. I do not know why. I simply tried casting
                 it as an int and it just worked.*/
                squaredDifferences += pow((int)line.length() - mean, 2);
            }
        } 

        // calculates variance and standard deviation and store them
        variance = squaredDifferences/(sum-1);
        sd = sqrt(variance);

        //calculates the probabilty of each nucleotide
        probA = (float(A) / float(nSum));
        probT = (float(T) / float(nSum));
        probG = (float(G) / float(nSum));
        probC = (float(C) / float(nSum));

        /*  This sequence of code writes to the outfile all the statistics calculated and formats
            them in a user-freindly fashion. */
        outfile << "ANALYSIS OF " << filename << ":\n\n";

        outfile << "The nucleotide sum is : " << nSum << "\n";
        outfile << "The mean is : " << mean << "\n";
        outfile << "The number of DNA strings is : " << sum << "\n";
        outfile << "The Variance is : " << variance << "\n";
        outfile << "The Standard Deviation is : " << sd << "\n\n";
        
        outfile << "Number of As : " << A << "\n";
        outfile << "Number of Ts : " << T<< "\n";
        outfile << "Number of Gs : " << G << "\n";
        outfile << "Number of Cs : " << C<< "\n\n";
        outfile << "Probability of As : " << 100 * probA << "%\n";
        outfile << "Probability of Ts : " << 100 * probT << "%\n";
        outfile << "Probability of Gs : " << 100 * probG << "%\n";
        outfile << "Probability of Cs : " << 100 * probC << "%\n\n";

        outfile << "Number of AAs : " << AA << "\n";
        outfile << "Number of ATs : " << AT << "\n";
        outfile << "Number of AGs : " << AG << "\n";
        outfile << "Number of ACs : " << AC << "\n";
        outfile << "Number of TAs : " << TA << "\n";
        outfile << "Number of TTs : " << TT << "\n";
        outfile << "Number of TGs : " << TG << "\n";
        outfile << "Number of TCs : " << TC << "\n";
        outfile << "Number of GAs : " << GA << "\n";
        outfile << "Number of GTs : " << GT << "\n";
        outfile << "Number of GGs : " << GG << "\n";
        outfile << "Number of GCs : " << GC << "\n";
        outfile << "Number of CAs : " << CA << "\n";
        outfile << "Number of CTs : " << CT << "\n";
        outfile << "Number of CGs : " << CG << "\n";
        outfile << "Number of CCs : " << CC << "\n\n";

        outfile << "Probability of AAs : " << 100 * (float(AA) / float(totalBigrams)) <<"%\n ";
        outfile << "Probability of ATs : " << 100 * (float(AT) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of AGs : " << 100 * (float(AG) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of ACs : " << 100 * (float(AC) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of TAs : " << 100 * (float(TA) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of TTs : " << 100 * (float(TT) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of TGs : " << 100 * (float(TG) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of TCs : " << 100 * (float(TC) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of GAs : " << 100 * (float(GA) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of GTs : " << 100 * (float(GT) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of GGs : " << 100 * (float(GG) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of GCs : " << 100 * (float(GC) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of CAs : " << 100 * (float(CA) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of CTs : " << 100 * (float(CT) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of CGs : " << 100 * (float(CG) / float(totalBigrams)) << "%\n ";
        outfile << "Probability of CCs : " << 100 * (float(CC) / float(totalBigrams)) << "%\n\n ";

        outfile << "1000 generated sequences based of the Gausian distribution of your file:" << "\n";
        // calls the generateStrings method which will generate 1000 DNA sequences 
        generateStrings();

        //closes the DNA file
        dnaFile.close();

        //asks if user would want to add another file
        cout << "Analysis complete! \n";
        cout << "Would you like to process another file? y or n? \n";
        string response = "";
        cin >> response;
        // calls reset method to reset variables 
        if (response == "y"){
            reset();
            outfile << "\n________________________________________________________________________";
            outfile << "\n";
        }
        else {
            break;
        }
    }
    outfile.close();
}

void reset(){
    A = 0, C = 0, T = 0, G = 0;
    AA = 0, AC = 0, AT = 0, AG = 0;
    CA = 0, CC = 0, CT = 0, CG = 0;
    GA = 0, GC = 0, GT = 0, GG = 0;
    TA = 0, TC = 0, TT = 0, TG = 0;

    probA = 0, probT = 0, probG = 0, probC = 0;

    totalBigrams = 0;
    squaredDifferences = 0;
    mean = 0;
    variance = 0;
    sd = 0;

    a = 0, b = 0, c = 0, d = 0;

    sum = 0;
    nSum = 0;

    aGuas = 0, tGuas = 0, gGuas = 0, cGuas = 0;
    
}

void generateStrings() {
    for (int i =0; i < 15; i++){
        a = (float) rand()/ (float)RAND_MAX;
        b = (float)rand() / (float)RAND_MAX;
        c = sqrt(-2 * log(a))*cos(2 * M_PI * b );
        d = (sd*c) + mean; 

        aGuas = probA*d;
        tGuas = probT*d;
        gGuas = probG*d;
        cGuas = probC*d;

        //cout << d << "\n";

        for(int i=0; i< aGuas; i++)
        {
            outfile << "A";
        }
        for (int i = 0; i < tGuas; i++)
        {
            outfile << "T";
        }
        for (int i = 0; i < gGuas; i++)
        {
            outfile << "G";
        }
        for (int i = 0; i < cGuas; i++)
        {
            outfile << "C";
        }
        outfile <<"\n";
    }
}

void determineBigram(string dnaLine)
{
    for (int i = 0; i < dnaLine.length(); i++){
        char first = tolower(dnaLine[i]);
        char second = tolower( dnaLine[i+1]);
        string bigram = string(1, first) + string(1, second);
        if (bigram == "aa")
            AA++;
        else if (bigram == "at")
            AT++;
        else if (bigram == "ag")
            AG++;
        else if (bigram == "ac")
            AC++;
        else if (bigram == "ta")
            TA++;
        else if (bigram == "tt")
            TT++;
        else if (bigram == "tg")
            TG++;
        else if (bigram == "tc")
            TC++;
        else if (bigram == "ga")
            GA++;
        else if (bigram == "gt")
            GT++;
        else if (bigram == "gg")
            GG++;
        else if (bigram == "gc")
            GC++;
        else if (bigram == "ca")
            CA++;
        else if (bigram == "ct")
            CT++;
        else if (bigram == "cc")
            CC++;
        else if (bigram == "cg")
            CG++;
        else 
            continue; 

        totalBigrams++;   

        if (i < dnaLine.length())
            i++;
        
    }
}
  

