#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[100];
    int n, m, max;

    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter elements: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    max = (n > m) ? n : m;

    for (int i = 0; i < max; i++) {
        c[i] = 0;
        if (i < n) c[i] += a[i];
        if (i < m) c[i] += b[i];
    }

    cout << "Third array: ";
    for (int i = 0; i < max; i++)
        cout << c[i] << " ";

    return 0;
}