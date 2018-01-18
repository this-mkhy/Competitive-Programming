#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
aaabccddd
  abccddd
  abddd
  abd
--------
3 a =>a
1 b =>b
3 d =>d
2 c =0
--------
aaabccddd
  ab  d 
*/

string solve(string str)
{
    int i=1;
    for(i; i<str.size() ;++i)
    {
        if(str.at(i)==str.at(i-1))
        {
            str.erase(i-1,2);
            i=0;
        }

    }
            
    if(str.size()==0)
        return "Empty String";
    else
        return str;
}

int main() {
    string s;
    cin>>s;
    string res=solve(s);
    cout<<res<<endl;
    
    return 0;
}
