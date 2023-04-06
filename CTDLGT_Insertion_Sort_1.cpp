#include <iostream>
using namespace std;

void insertionSort(int a[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        int x = a[i];
        int pos = i - 1;
        
        while (pos >= 0 && a[pos] > x) {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}

int main() {
    int n;  
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    insertionSort(a , n);
    for (int i = 0 ; i < n ; i++)
        cout << a[i] << "\t";
}