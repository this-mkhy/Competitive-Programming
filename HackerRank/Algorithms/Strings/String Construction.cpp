#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int solve(string str)
{
    set <char> st;
    for(int i=0; i<str.size() ;++i)
    {
        st.insert(str[i]);
        
    }
    
   return st.size();
    
}
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
   
    for(int i=0; i<n ;++i)
    {
        string s;
        int counts=0;
        cin>>s;
        sort(s.begin(),s.end());    //aabb
        for(int j=0; j<s.size() ;++j)
            if(s[j]!=s[j+1])
                counts++;
       
        cout<<counts<<endl;
    }

    
    return 0;
}
