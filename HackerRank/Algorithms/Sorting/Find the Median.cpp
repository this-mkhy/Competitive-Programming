#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
7
0 1 2 4 6 5 3

Sample Output 0
3

0 1 2 4 6 5 3
0 1 2 3 4 5 6


*/

int main() {
     
    int n;
    cin>>n;
    
    int arr[1000001];
    for(int i=0; i<n ;++i)
    {
        cin>>arr[i];
        
    }
    
    sort(arr,arr+n);
    int mid=n/2;
    cout<<arr[mid]<<endl;

    return 0;
}
