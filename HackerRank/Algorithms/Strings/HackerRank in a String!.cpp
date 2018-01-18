#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
0123456789
haacckkerannk
hackerrank

*/
bool solve(string s)
{
    string my="hackerrank";
    
    int j=0;
    for(int i=0; i<s.size() ;++i)
    {
        if(s[i]==my[j] && j<10) 
            j++;
        if(j==10)
            return true;
        
    }
    
    return false;
    
}

int main() {
    int t;
    cin>>t;
    
    for(int i=0; i<t ;++i)
    {
        string str;
        cin>>str;
        bool res=solve(str);
        if(res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
