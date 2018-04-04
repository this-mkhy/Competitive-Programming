#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
2 3 4 5 6

2 4 5 5 6
2 4 6 6 6
*/
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;++i)
    {
        cin>>arr[i];
    }
    

    int sum=0;
    for(int i=0; i<n-1 ;i++)
    {
        if(arr[i]%2!=0)
        {
            sum+=2;
            arr[i]++;
            arr[i+1]++;
        }  
    }
        
    if(arr[n-1]%2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }

    
    return 0;
}
