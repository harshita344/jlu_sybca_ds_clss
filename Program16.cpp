// Implementing a Circular Queue using Array
#include <iostream>
using namespace std;

const int SIZE = 10;
int Que[SIZE];
int Front = -1;
int Rear = -1;

void display();
void Enq(int element);
void Deq();

int main()
{
	Enq(17);
	Enq(10);
	Enq(11);
	Enq(15);
	Enq(6);
	Enq(9);
    Enq(12);
    Enq(7);
    Enq(19);
    Enq(20);
    Enq(45);
    Deq();
    Deq();
    Enq(71);
    Enq(95);
    Deq();
    Enq(41);
    display();
    cout<<Front<<" "<<Rear;
    return 0;}

void display()
{
    if (Front == -1)
    {
        cout << "\nQueue is Empty\n\n";
        return;
    }

    cout << "\nElements in Queue are : ";
    int i = Front;
    while (true)
    {
        cout << Que[i] << " ";
        if (i == Rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << "\n\n";
}

void Enq(int element)
{
    if ((Front == 0 && Rear == SIZE - 1) || (Front == (Rear + 1) % SIZE))
    {
        cout << "\nQueue Full\n";
        return;
    }

    if (Front == -1) // first element
        Front = 0;

    Rear = (Rear + 1) % SIZE;
    Que[Rear] = element;
}

void Deq()
{
    if (Front == -1)
    {
        cout << "\nQueue Empty\n";
        return;
    }

    if (Front == Rear)
    {
        // only one element left
        Front = -1;
        Rear = -1;
    }
    else
    {
        Front = (Front + 1) % SIZE;
    }
}