#include <iostream>
using namespace std;

int main() {
    int stack[100], top = -1, choice, value, n;

    cout << "Enter stack size: ";
    cin >> n;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (top == n - 1)
                cout << "Stack Overflow";
            else {
                cout << "Enter value: ";
                cin >> value;
                stack[++top] = value;
            }
        }
        else if (choice == 2) {
            if (top == -1)
                cout << "Stack Underflow";
            else
                cout << "Popped: " << stack[top--];
        }
        else if (choice == 3) {
            if (top == -1)
                cout << "Stack is empty";
            else
                cout << "Top element: " << stack[top];
        }
        else if (choice == 4) {
            if (top == -1)
                cout << "Stack is empty";
            else {
                cout << "Stack elements: ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
            }
        }
        else if (choice != 5)
            cout << "Invalid choice";

    } while (choice != 5);

    return 0;
}