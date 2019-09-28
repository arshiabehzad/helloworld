//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch24x2

//Calculates triangle area

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// defines function
void triangleArea(int a, int b, int c);

int main(int argc, char **argv)
{
    // defines variable
    int a;
    int b;
    int c;
    
    // asks for user input
    cout << "enter side a " <<endl;
    cin >> a;
    cout << "enter side b " << endl;
    cin >> b;
    cout << "enter side c " << endl;
    cin >> c;

    // runs function
    triangleArea(a,b,c);
}

//calculates triangle
void triangleArea(int a, int b, int c)
{
    double area;
    double s = (a+b+c)/2;
    // makes sure the sides actually forms a triangle 
    if ((a+b)> c && (b+c)>a && (c+a)>b)
    {
         area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    cout << "The area of the triangle is: " << area <<endl;
}