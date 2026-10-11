#include <iostream>
using namespace std;

int main() {
    int a[100], n, key, choice;
    int low, high, mid, found = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Linear Search";
    cout << "\n2. Binary Search";
    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    cout << "Your choice is: " << choice << endl;

    if (choice == 1) {
        cout << "Enter element to search: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                cout << "Element found at position " << i + 1;
                found = 1;
                break;
            }
        }
    }
    else if (choice == 2) {
        cout << "Enter element to search: ";
        cin >> key;

        low = 0;
        high = n - 1;

        while (low <= high) {
            mid = (low + high) / 2;

            if (a[mid] == key) {
                cout << "Element found at position " << mid + 1;
                found = 1;
                break;
            }
            else if (a[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    else {
        cout << "Invalid choice. Please enter 1 or 2.";
        return 0;
    }

    if (!found)
        cout << "Element not found";

    return 0;
}