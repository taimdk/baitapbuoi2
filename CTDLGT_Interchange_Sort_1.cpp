#include <iostream>
using namespace std;

void interChangeSort(int a[] , int n) {
    for (int i = 0 ; i < n - 1 ; i++)
        for (int j = i + 1 ; j < n ; j++)
            if (a[i] > a[j])
                swap(a[i] , a[j]);
}
int main() {
    int n;  
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    interChangeSort(a , n);
    for (int i = 0 ; i < n ; i++)
    cout << a[i] << "\t";
}