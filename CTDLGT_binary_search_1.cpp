#include <iostream>
using namespace std;

void interChangeSort(int a[] , int n) {
    for (int i = 0 ; i < n - 1 ; i++)
        for (int j = i + 1 ; j < n ; j++)
            if (a[i] > a[j])
                swap(a[i] , a[j]);
}int binarySearch(int a[] , int n , int x) {    
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            r = mid - 1;
        else if (a[mid] < x)
            l = mid + 1;
    }
    return -1;
}

int main() {
    int n,x;  
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    interChangeSort(a , n);
    cout << binarySearch(a , n , x);
}