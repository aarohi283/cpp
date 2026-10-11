#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int t[100], i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
        if (a[i] <= a[j]) t[k++] = a[i++];
        else t[k++] = a[j++];
    while (i <= m) t[k++] = a[i++];
    while (j <= r) t[k++] = a[j++];
    for (i = l, k = 0; i <= r; i++) a[i] = t[k++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int a[100], n, choice, temp;

    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "\n1. Bubble Sort";
    cout << "\n2. Insertion Sort";
    cout << "\n3. Selection Sort";
    cout << "\n4. Merge Sort";
    cout << "\n5. Quick Sort";
    cout << "\nEnter choice (1-5): ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
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
                if (a[j] < a[min]) min = j;
            swap(a[i], a[min]);
        }
    }
    else if (choice == 4) {
        mergeSort(a, 0, n - 1);
    }
    else if (choice == 5) {
        quickSort(a, 0, n - 1);
    }
    else {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}