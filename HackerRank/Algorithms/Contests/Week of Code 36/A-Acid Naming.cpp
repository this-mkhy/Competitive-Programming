#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t;
    cin>>t;
    for(int i=0; i<t ;++i)
    {
        string s;
        cin>>s;
        
        if(s[0]=='h'&&s[1]=='y'&&s[2]=='d'&&s[3]=='r'&&s[4]=='o'
           &&s[s.size()-1]=='c'&&s[s.size()-2]=='i')
        {
            cout<<"non-metal acid"<<endl;
            
        }
        else if(s[s.size()-1]=='c'&&s[s.size()-2]=='i')
        {
            cout<<"polyatomic acid"<<endl;
            
        }   
        else
        {
            cout<<"not an acid"<<endl;
            
        }               
        
    }
    return 0;
}
