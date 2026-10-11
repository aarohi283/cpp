#include <iostream>
using namespace std;

int main() {
    int a[100], n, choice, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Bubble Sort";
    cout << "\n2. Insertion Sort";
    cout << "\n3. Selection Sort";
    cout << "\nEnter choice (1-3): ";
    cin >> choice;

    cout << "Your choice is: " << choice << endl;

    if (choice == 1) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
    }
    else if (choice == 2) {
        for (int i = 1; i < n; i++) {
            temp = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > temp) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }
    }
    else if (choice == 3) {
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++)
                if (a[j] < a[min])
                    min = j;

            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    else {
        cout << "Invalid choice. Enter 1, 2, or 3.";
        return 0;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}