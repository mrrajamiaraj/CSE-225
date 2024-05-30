#include <iostream>
#include <queue>
using namespace std;

template <class T>
class StackUsingQueues {
private:
    queue<T> queue1, queue2;

public:
    StackUsingQueues() {}

    void push(T data) {
        // Push the new element into queue2
        queue2.push(data);

        // Move all elements from queue1 to queue2
        while (!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }

        // Swap the names of queue1 and queue2
        swap(queue1, queue2);
    }

    void pop() {
        if (queue1.empty()) {
            throw runtime_error("Stack is empty");
        }
        queue1.pop();
    }

    T top() {
        if (queue1.empty()) {
            throw runtime_error("Stack is empty");
        }
        return queue1.front();
    }

    bool empty() {
        return queue1.empty();
    }
};

int main() {
    StackUsingQueues<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl; // Should print 30

    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl; // Should print 20

    stack.pop();
    cout << "Top element after another pop: " << stack.top() << endl; // Should print 10

    stack.pop();
    cout << "Is stack empty: " << stack.empty() << endl; // Should print 1 (true)

    return 0;
}
