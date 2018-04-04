#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;


int main() {
    string i,j,k;
    cin>>i>>j>>k;
    
    string revI,revJ;
    if (i<="9" )
        revI=i;
    else if (j<="9")
        revJ=j;
    else
    {
        if(i>="10")
            for(int x=i.size()-1; x>=0 ;--x)
            {
                revI[x]+=i[x];
                
                
            }
        else if(j>="10")
            for(int x=j.size()-1; x>=0 ;--x)
            {
                revJ[x]+=j[x];
                
                
            }
        
    }
        
    cout<<"i"<<i<<endl;  
    cout<<"revI"<<revI<<endl;  
    cout<<"j"<<j<<endl;  
    cout<<"revJ"<<revJ<<endl;  
    
    return 0;
}
