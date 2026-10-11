#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[100], n;
    int x = 0, y = 0, z = 0, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = c[i] = a[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            x++;
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        temp = b[i];
        int j = i - 1;

        while (j >= 0) {
            y++;
            if (b[j] > temp) {
                b[j + 1] = b[j];
                j--;
            } else
                break;
        }
        b[j + 1] = temp;
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            z++;
            if (c[j] < c[min])
                min = j;
        }
        temp = c[i];
        c[i] = c[min];
        c[min] = temp;
    }

    cout << "\nBubble Sort comparisons: " << x;
    cout << "\nInsertion Sort comparisons: " << y;
    cout << "\nSelection Sort comparisons: " << z;

    return 0;
}