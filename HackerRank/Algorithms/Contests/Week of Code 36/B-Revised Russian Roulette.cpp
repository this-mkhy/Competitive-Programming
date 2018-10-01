#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int vec[10005];
int main() { 
    int n,sum=0,ones=0;
    cin>>n;
    for(int i=0; i<n ;++i)
    {
        cin>>vec[i];
        if(vec[i]==1)
            ones++;
        
    }
        
    for(int i=0; i<n ;)
    {
        if(vec[i]==1)
        {
            sum++;
            i+=2;
        }
        else
            ++i;
    }
            
    cout<<sum<<" "<<ones<<endl;
            
    return 0;
}
