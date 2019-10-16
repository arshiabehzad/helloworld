class ListNode{
    public:
        int data
        ListNode *next;
        ListNode();
        ListNode(int d);
        ~ListNode();

};

///seperate files
ListNode::ListNode(){}

ListNode::ListNode(int d)
{
    data = d;
    next = NULL;
}

ListNode::~ListNode()
{
    if (next == NULL)
        delete next;
}

/* GenLinkedListt*/

class GenLinkedList{
    private:
        ListNode *front;
        unsigned int size;
    public: 
        GenLinkedList();
        ~GenLinkedList();

        void insertFront(int d);
        int removeFront();
        int deletePos(int pos);
        int find(int d);
        
        bool isEmpty();
        void printList();
        unsigned int getSize();
}

/*implementation file*/

unsigned int GenLinkedList::getSize()
{
    return size;
}

void GenLinkedList::printList()
{
    ListNode *curr = front;

    while(cur != NULL){
        cout << curr->data <<endl;
        curr = curr->next;
    }
}

void GenLinkedList::insertFront(int d)
{
    ListNode *node = new ListNode(d);
    node->next = front;
    front = node;
    size++;
}

int GenLinkedList::removeFront()
{
    int tmp = front->data;
    ListNode *ft = front;
    front = front->next;
    ft->next = NULL;
    delete ft;
    size--;

    return tmp;
}

int GenLinkedList::deletePos(int pos)
{
    int idx = 0;
    ListNode *curr = front;
    ListNode *prev = front;
    while(idx != pos){
        prev = curr;
        curr = curr->next;
        idx++;
    }
    //we have found the position of the node to be deleted, hopefully our pointers are in the right spot
    prev->next = curr->next;
    curr->next = NULL;
    int tmp = curr->data;
    delete curr;
    size--;

    return tmp;
}

int GenLinkedList::find(int d)
{
    int idx = 0;
    ListNode *curr = front;

    while(curr != NULL)
    {
        idx++;
        if(curr->data == d)
        {
            //we found the value we were looking for
            break;
        }
        curr = curr->next;
    }
    if (curr == NULL)
        idx = -1;
    
    return idx;
}