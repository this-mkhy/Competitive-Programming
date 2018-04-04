#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

/*
1 2 3 4 3 3 2 1  

1 1 2 2 3 3 3 4         8   n
0 0 1 1 2 2 2 3         6
0 0 0 0 1 1 1 2         4
0 0 0 0 0 0 0 1         1
0 0 0 0 0 0 0 0         

*/
int main() {
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n ;++i)
    {
        cin>>arr[i];
        
    }
    
    sort(arr,arr+n);


    cout<<n<<endl;
    for(int i=1; i<n ;++i)
    {
        if(arr[i]!=arr[i-1])
            cout<<n-i<<endl;

    }



    return 0;
}
