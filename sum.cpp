#include <iostream>
using namespace std;

int main() {
    int a[100], n, even = 0, odd = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }

    cout << "Sum of even elements = " << even << endl;
    cout << "Sum of odd elements = " << odd << endl;

    return 0;
}