#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    vector <int> vec(26);

    for(int i=0; i<26 ;++i)
    {
        cin>>vec[i];
    }
    //vec => 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7
    
    string s;
    cin>>s;
    //zaba
    //7131
    //max is 7
    
    int sz=s.size();
    vector<int> mx(sz);
    
    for (int i=0; i<s.size() ;++i)
    {
        //vec['z'-'a']
        int x=vec[s[i] - 'a'];
        mx.push_back(x);
        
    }
    
    sort(mx.begin(),mx.end(),greater<int>());
    
    cout<<mx[0]*sz<<endl;
    
    return 0;
}
