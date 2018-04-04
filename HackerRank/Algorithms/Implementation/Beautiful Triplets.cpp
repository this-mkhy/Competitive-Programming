#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n,d;
    cin>>n>>d;
    
    long long arr[n];
    for(int i=0; i<n ;++i)
    {
        cin>>arr[i];
    }
    
    long long sum=0;
    for(long long i=0; i<n-2 ;++i)
    {
        for(long long j=i+1; j<n-1 ;++j)
        {
            if(arr[j]-arr[i]==d)
            for(long long k=j+1; k<n ;++k)
            {
                if(arr[k]-arr[j]==d)
                {
                    sum++;
                }
            }
        }        
    }
        
    cout<<sum<<endl;
    return 0;
}
