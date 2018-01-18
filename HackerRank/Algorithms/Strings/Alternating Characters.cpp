#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(string str)
{
    int counts=0;
    for(int i=0; i<str.size() ;++i)
    {
        if(str[i]==str[i+1])
            counts++;
        
    }
    
    return counts;
    
}
    

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t ;++i)
    {
        string s;
        cin>>s;
        int res=solve(s);
        cout<<res<<endl;
        
    }
    
    return 0;
}
