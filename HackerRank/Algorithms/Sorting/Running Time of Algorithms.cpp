#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
2 1 3 1 2
1 2 3 1 2   1
1 2 3 1 2   1
1 1 2 3 2   2
1 1 2 2 3   3


*/

int main() {
    int sz,sum=0;
    cin >>sz;
    int arr[sz];
    for(int i=0; i<sz ;++i) 
    {
        cin>>arr[i];
        
    }
    
    int i=1,j=0,key;
    while(i<sz)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 &&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            sum++;
            
        }
        arr[j+1]=key;
        i++;
   
        
    }
    
    cout<<sum<<endl;
    
    return 0;
}
