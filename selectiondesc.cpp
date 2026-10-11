#include <iostream>
using namespace std;

int main() {
    int a[100], n, temp;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int max = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max])
                max = j;
        }

        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }

    cout << "Descending order: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}