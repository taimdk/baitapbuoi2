#include <iostream>
using namespace std;

int linearSearch(int a[], int n , int x) {
    for (int i = 0 ; i < n ; i++) {
        if (x == a[i]) 
            return i;
    }
    return -1;       
}

int main() {
    int n,x;  
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    cout << linearSearch(a , n , x);
}