#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n, c1 = 0, c2 = 0, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            c1++;
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            c2++;
            if (b[j] < b[min])
                min = j;
        }

        temp = b[i];
        b[i] = b[min];
        b[min] = temp;
    }

    cout << "\nBubble Sort comparisons: " << c1;
    cout << "\nSelection Sort comparisons: " << c2;

    return 0;
}