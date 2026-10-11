 /*#include <iostream>
using namespace std;

int main() {
    int q[100], n, front = 0, rear = -1;
    int choice, value, times;

    cout << "Enter queue size: ";
    cin >> n;

    cout << "How many operations do you want? ";
    cin >> times;

    for (int i = 0; i < times; i++) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (rear == n - 1)
                cout << "Queue Overflow";
            else {
                cout << "Enter value: ";
                cin >> value;
                q[++rear] = value;
            }
        }
        else if (choice == 2) {
            if (front > rear)
                cout << "Queue Underflow";
            else
                cout << "Deleted: " << q[front++];
        }
        else if (choice == 3) {
            if (front > rear)
                cout << "Queue is empty";
            else {
                for (int j = front; j <= rear; j++)
                    cout << q[j] << " ";
            }
        }
        else
            cout << "Invalid choice";
    }

    return 0;
}*/