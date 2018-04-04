#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0; i<a ;++i)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<b ;++i)
    {
        int x,y;
        cin>>x>>y;
        int mn=arr[x];
        for(int j=x+1; j<=y ;++j)
        {
            if(arr[j]<=mn)
            {
                mn=arr[j];
            }
            
        }
        cout<<mn<<endl;
        
    }
    
    return 0;
}
