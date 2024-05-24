#include <iostream>
#include "quetype.cpp"
using namespace std;

void checkEmpty(bool b) {                        // Helper function to check if the stack is empty
    if (b)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}

void checkFull(bool b) {                         // Helper function to check if the list is full
    if (b)
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;
}

void Print(quetype<int> &queType) {              // Helper function to print the list
    quetype<int> temp;

    while (!queType.isempty()) {
        int value;
        queType.deque(value);
        cout << value << " ";
        temp.enque(value);
    }
    cout << endl;

    while (!temp.isempty()) {
        int value;
        temp.deque(value);
        queType.enque(value);
    }
}

int main() {
    // First Task
    quetype<int> queue1(5);                       // Create a queue of integer sof size 5

    checkEmpty(queue1.isempty());                 // Print if the queue is empty or not

    queue1.enque(5);                            // Enqueue four items 5, 7, 4, 2
    queue1.enque(7);
    queue1.enque(4);
    queue1.enque(2);

    checkEmpty(queue1.isempty());                 // Print if the queue is empty or not

    checkFull(queue1.isfull());                   // Print if the queue is full or not

    queue1.enque(6);                            // Enqueue another item 6

    Print(queue1);
    cout<<"hello1"<<endl;
    // Print the values in the queue

    checkFull(queue1.isfull());
    cout<<"hello2"<<endl;
    // Print if the queue is full or not

    if (!queue1.isfull())                         // Enqueue another item 8
        queue1.enque(8);
    else
        cout << "Queue Overflow" << endl;

    int d;                                       // Dequeue two items
    queue1.deque(d);
    queue1.deque(d);

    Print(queue1);                                // Print the values in the queue

    queue1.deque(d);                            // Dequeue three items
    queue1.deque(d);
    queue1.deque(d);

    checkEmpty(queue1.isempty());                 // Print if the queue is empty or not

    if (!queue1.isempty())                        // Dequeue an item
        queue1.deque(d);
    else
        cout << "Queue Underflow" << endl;

    quetype<string> binary;
    int n;
    string var;
    cin >>n;

    binary.enque("1");
    while(n--) {
        binary.deque(var);
        string s1 = var;
        cout<< s1<<endl;

        string s2 = s1;
        binary.enque(s1.append("0"));
        binary.enque(s2.append("1"));

    }
}