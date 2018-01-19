#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

int main(void) {
    int sz;
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
            
        }
        arr[j+1]=key;
        i++;
        
    }
    
    for(int n=0; n<sz ;++n)
    {
        cout<<arr[n]<<" ";
        
    }
    cout<<endl;
    
    return 0;

}
