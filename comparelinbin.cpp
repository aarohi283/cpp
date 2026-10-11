#include <iostream>
using namespace std;

int main() {
    int a[100], n, key, i, low, high, mid;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Linear Search: Found at position " << i + 1 << endl;
            break;
        }
    }
    if (i == n)
        cout << "Linear Search: Not found" << endl;

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Binary Search: Found at position " << mid + 1;
            return 0;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Binary Search: Not found";
    return 0;
}