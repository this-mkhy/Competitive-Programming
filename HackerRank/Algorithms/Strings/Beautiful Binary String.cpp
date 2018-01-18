#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
1    2 3 
0100101010
 100101010
  00101010



*/
int main() {
    int sz,counts=0;
    cin>>sz;
    string s;
    cin>>s;
    
    for(int i=0; i<=s.size() ;i++)
    {
        if(i+2<s.size()) 
        {
            if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') 
            {
                s[i+2]='1';
                counts++;
            }
        }
    }
    cout<<counts<<endl;
    
    return 0;
}
