// Program to create a stack of 10 elements using linked list and perform push, pop, and display operations.

#include <iostream>
using namespace std;

// StackNode structure
struct StackNode {
    int data;
    StackNode* next;
};

// Stack class
class Stack {
private:
    StackNode* top;
    int size;
    const int MAX_SIZE = 10;
public:
    Stack() : top(nullptr), size(0) {}

    bool push(int value) {
        if (size >= MAX_SIZE) {
            cout << "Stack Overflow!" << endl;
            return false;
        }
        StackNode* newNode = new StackNode;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        size++;
        return true;
    }

    bool pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!" << endl;
            return false;
        }
        StackNode* temp = top;
        top = top->next;
        delete temp;
        size--;
        return true;
    }

    void displayStack() {
        StackNode* temp = top;
        cout << "Stack: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Node structure for linked list
struct Node {
    int data; //Data part
    Node* next; //Pointer to the next node
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node; //Allocate memory for new node
    newNode->data = value; //Set data
    newNode->next = nullptr; //Initialize next as null
    return newNode;
}

// Function to display linked list
void displayList(Node* head) {
    Node* temp = head; //Start from head
    while (temp != nullptr) {
        cout << temp->data << "->"; //Print data
        temp = temp->next; //Move to next node
    }
    cout << "NULL" << endl; //Indicate end of list
}

int main() {
    // Demonstrate Stack operations
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.displayStack();
    s.pop();
    s.displayStack();

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
    while (temp != nullptr) {
        cout << temp->data << "->"; //Print data
        temp = temp->next; //Move to next node
    }
    cout << "NULL" << endl; //Indicate end of list
    //Delete the third node
    delete third;
    second->next = nullptr; //Update second node's next to null
    displayList(head);
    return 0;
}
