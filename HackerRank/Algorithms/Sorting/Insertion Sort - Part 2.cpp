#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
int arr[1005];

/*
1 4 3 5 6 2
-----------
1 4 3 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 2 3 4 5 6 
*/

void insertionSort(int arrSZ, int *ar)
{
    int i=1,j=0,key=0;
    
    while(i<arrSZ)
    {
        key=ar[i];
        j=i-1;
            
        while(j>=0&&ar[j]>key)
        {
            ar[j+1]=ar[j];
            j--;
        }
            
        ar[j+1]=key;
        i++;
        
        for(int k=0; k<arrSZ ;++k)
            cout<<ar[k]<<" ";
        cout<<endl;

    } 
        
        
}
    
 /*

void insertionSort(int arrSZ, int *ar)
{
    int key=0;
    for(int i=0; i<arrSZ-1 ;++i)
    {
        if(ar[i]>ar[i+1])
        {
            key=ar[i+1];
            int j=i;
            
            while(ar[j]>key)
            {
                ar[j+1]=ar[j];
                j--;
            }
            
            ar[j+1]=key;
        }
        
        for(int k=0; k<arrSZ ;++k)
            cout<<ar[k]<<" ";
        cout<<endl;
    }
    
}
*/

int main(void) {
    
    int sz;
    cin>>sz;

    for(int i=0; i<sz ;++i)
    {
        cin>>arr[i];
    }
    
    insertionSort(sz,arr);
    
    return 0;

}

