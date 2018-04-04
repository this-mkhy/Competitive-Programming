#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
0 0 1 0 0 1 0
  1 

0 0 1 0 0 1 0
      2
  
0 0 1 0 0 1 0
        3

0 0 1 0 0 1 0
            4
*/

int main() {
    int n;
    cin>>n;
    vector <int> vec(n);
    
    for(int i=0; i<n ;++i)
    {
        cin>>vec[i];
        
    }
    
    int sum=0;
    for(int i=0; i<n-1 ;)
    {
        if(vec[i]==0 && vec[i+1]==0 && vec[i+2]==0)
        {
            sum++;
            i=i+2;
        }
        else if(vec[i]==0 && vec[i+1]==1 && vec[i+2]==0)
        {
            sum++;
            i=i+2;
        }    
        else
        {
            sum++;
            i++;
        }
        
    }
    
    cout<<sum<<endl;

            
    return 0;
}
