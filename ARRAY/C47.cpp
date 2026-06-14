// Problem: Move all negative elements to one side of array
#include <iostream>
using namespace std;

void MoveAllNegToLeft(int *a, int n) {
    int l = 0;     // left pointer
    int h = n - 1; // right pointer

    while (l < h) {
        if (a[l] < 0) {
            l++;
        }
        else if (a[h] > 0) {
            h--;
        }
        else {
            swap(a[l], a[h]);
        }
    }
}
int main() {
    int a[] = {1, -2, -3, 4, 7, 8, -62, 32};

    int n = sizeof(a) / sizeof(int);

    MoveAllNegToLeft(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
