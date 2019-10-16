class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode *prev;
    ListNode();
    ListNode(int d);
    ~ListNode();
};

//seperate file
ListNode::ListNode() {}

ListNode::ListNode(int d)
{
    data = d;
    next = NULL;
    prev = NULL;
}

ListNode::~ListNode()
{
    next = NULL;
    prev = NULL;
}

//DoublyLinkedList

class DoublyLinkedList
{
private:
    ListNode *front;
    ListNode *back;
    unsigned int size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertFront(int d);
    void insertBack(int d);
    int removeFront();
    int removeBack();
    int deletePos(int pos); // AKA removeAt()
    int find(int d); //AKA contains()
    ListNode* remove(int d);

    bool isEmpty();
    void printList();
    unsigned int getSize();
}

//DoublyLinkedList implementation 

DoublyLinkedList::DoublyLinkedList()
{
    size = 0;
    front = NULL;
    back = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
    //iterate through the list
    //research it 
}

void DoublyLinkedList::insertFront(int d)
{
    ListNode *node = new ListNode(d);
    if (size == 0)
    {
        back = node;

    }else
    {
        //not an empty list
        node->next = front;
        front->prev = node;
    }
    front = node;
    size++;
}

int DoublyLinkedList::removeFront()
{
    int tmp = front->data;
    ListNode *ft = front;

    if(size == 1)
    {
        //it's the only node in the list
        back = NULL;
    }else
    {
        //more than one element 
        front->next->prev = NULL;
    }
    front = front->next;
    ft->next = NULL;
    delete ft;
    size--;

    return tmp;
}

int DoublyLinkedList::insertBack(
{
    ListNode *node = new ListNode(d);
    if (size == 0)
    {
        front = node;
    }
    else
    {
        //not an empty list
        back->next = node;
        node->prev = back;
    }
    back = node;
    size++;
}

ListNode* DoublyLinkedList::remove(int d)
{
    //check if list is not empty before attempting to remove
    ListNode *curr = front;
    while(curr->data != d)
    {
        curr=curr->next;
        if(curr = NULL) // We did not find the value
            return NULL;
    }
    //if we get to this point it means we found it 
    //let's check if the node is the front
    if(curr == front)
    {
        front = curr->next;
    }
    else
    {
        //it's not the front 
        curr->prev->next == curr->next;
    }

    if(curr == back)
    {
        back = curr->prev;
    }
    else
    {
        //its not the back
        curr->next->prev == curr->prev; 
    }
    curr->next = NULL;
    curr->prev = NULL;
    size--;

    return curr;
    
    
}