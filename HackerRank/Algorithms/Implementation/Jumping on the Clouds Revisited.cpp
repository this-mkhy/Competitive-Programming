#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
100

8 2
0 0 1 0 0 1 1 0

0 1 2 3 4 5 6 7
0 0 1 0 0 1 1 0
x   x   x   x  
    97  96  93
92
  

*/


int main() {
       
    int n,k;
    cin>>n>>k;
    
    vector <int> vec(n);
    for(int i=0; i<n ;++i)
    {
        cin>>vec[i];
        
    }
    
    int sum=100;
    for(int i=0; i<n ;i+=k)
    {
        if(vec[i]==0)
            sum--;
        else if(vec[i]==1)
            sum=sum-1-2;
        
    }
    
    cout<<sum<<endl;
    return 0;
}
