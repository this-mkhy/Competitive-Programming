#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

/*
cde
abc
3+3=6
-------
abde
4

----------------
abccd 
abcdd 
5+5=10
-------
abcd
abcd
4+4=8
10-8=2
-----------------------
-----------------------
abccd 
abcdd 
5+5=10
-------
abcd
abcd
4+4=8
10-8=2
-------
abcd=4
--------------------------
abcd
aabbcdefg
4+9=13
---------
abcd
abcdefg
4+7=11
---------
abcdefg
7
---------------------------
abcd
aabbcdefg
abcd


*/
int main() 
{
    string a,b;
    cin>>a>>b;
    
    set <char> stA;
    set <char> stB;
    set <char> stAB;
     
    for(int i=0; i<a.size() ;++i)
    {
        char x=a[i];
        stA.insert(x);
        
        
    }
    
    set <char> ::iterator itr;
    for(itr=stA.begin(); itr!=stA.end() ;++itr)
    {
        cout<<*itr<<" ";   
        
    }
    cout<<endl;
    
    for(int i=0; i<b.size() ;++i)
    {
        char x=b[i];
        stB.insert(x);
        
        
    }
    
    for(itr=stB.begin(); itr!=stB.end() ;++itr)
    {
        cout<<*itr<<" ";   
        
    }
    
    set <char> ::iterator it;
    for(it=stA.begin(); it!=stA.end() ;++it)
    {
        char x=stA[it];
        stAB.insert(x);
        
        
    }
    
    for(it=stB.begin(); it!=stB.end() ;++it)
    {
        char x=stB[it];
        stAB.insert(x);
    }
    
    /*
    cout<<"AB set: "<<endl; 
    for(itr=stAB.begin(); itr!=stAB.end() ;++itr)
    {
        cout<<*itr<<" ";   
        
    }
    */
    
    cout<<stAB.size()<<endl;
    
    
    return 0;
}

