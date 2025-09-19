#include <iostream>
using namespace std;
//Node structure
struct Node
    {
        int data; //Data part
        Node* next; //Pointer to the next node
    };
//Function to create a new node
Node* createNode(int value)
    {
        Node* newNode = new Node; //Allocate memory for new node
        newNode->data = value; //Set data
        newNode->next = nullptr; //Initialize next as null
        return newNode;
    }
void display (Node* head)
    {
        Node* temp = head; //Start from head
        while (temp != nullptr)
            {
                cout << temp->data << "->"; //Print data
                temp = temp->next; //Move to next node
            }
        cout << "NULL" << endl; //Indicate end of list
    }
int main()
    {
        //Create first node (head)
        Node* head = createNode(10);
        //Create second node
        Node* second = createNode(20);
        head->next = second; //Link first node to second
        //Create third node
        Node* third = createNode(30);
        second->next = third; //Link second node to third
        //Traverse and print the linked list
        Node* temp = head; //Start from head
        while (temp != nullptr)
            {
                cout << temp->data << "->"; //Print data
                temp = temp->next; //Move to next node
            }
        cout << "NULL" << endl; //Indicate end of list
        //Delete the third node
        delete third;
        second->next = nullptr; //Update second node's next to null
        display (head);
        return 0;
    }