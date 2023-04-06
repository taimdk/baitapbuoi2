#include <iostream>
using namespace std;

void quickSort(int a[] , int left , int right) {
    int pivot = a[(left + right) / 2];
    int l = left , r = right;
    do {
        while (a[l] < pivot)
            l++;
        while (a[r] > pivot)
            r--;
        
        if (l <= r) {
            swap(a[l] , a[r]);
            l++;
            r--;
        }
    } while (l <= r);

        if (left < r)
            quickSort(a , left , r);
        if (l < right)
            quickSort(a , l , right);
}

int main() {
    int n;  
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    quickSort(a , 0 , n - 1);
    for (int i = 0 ; i < n ; i++)
        cout << a[i] << "\t";
}