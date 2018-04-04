#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
    int n,mx=0;

    cin>>n;
    map <int,int> mp; 
    for(int i=0; i<n ;++i)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>mx)
            mx=mp[x];
       
    }
    
    /*
    cout<<mx<<endl;
    for(int i=0; i<mp.size() ;++i)
    {
        cout<<mp[i]<<" ";
    }
    cout<<endl;
    */
    
    cout<<n-mx<<endl;
    
  
    return 0;
}
