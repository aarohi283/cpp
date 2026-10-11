#include <iostream>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

    return 0;
}