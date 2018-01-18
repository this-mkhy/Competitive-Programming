#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solve(string str)
{
    vector <int> v1,v2;

    for(int i=0; i<str.size()-1 ;++i)
    {
        int x;
        x=abs(str[i]-str[i+1]);
        v1.push_back(x);
        
    }

    string rev;
    rev=str;
    reverse(rev.begin(),rev.end());

    for(int i=0; i<rev.size()-1 ;++i)
    {
        int x;
        x=abs(rev[i]-rev[i+1]);
        v2.push_back(x);
        
    }

    //    0 1  2    
    //v1=>2 21 3
    //v2=>2 21 3 
   
    if(v1==v2)
        return true;
    else
        return false;

}

int main() {
    int t;
    cin>>t;
    
    for(int i=0; i<t ;++i)
    {
        string s;
        cin>>s;
        bool res=solve(s);
        if(res)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
        
    }
    return 0;
}
