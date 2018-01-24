#include <cmath>
#include <cstdio>
#include <cassert>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    cin>>n;
    for (int i=0; i<n ;++i) 
    {
        string a,b;
        cin>>a>>b;
        set<char> st;
        
        //hello=>helo
        for(int j=0; j<a.size() ;++j)
        {
            st.insert(a[j]);
        }
        
        int found=0;
        for(int k=0; k<b.size() ;++k)
        {
            if(st.count(b[k])) 
            {                
                found=1;
                break;
            }
        }
        
        if (found) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;

    }
    return 0;
}