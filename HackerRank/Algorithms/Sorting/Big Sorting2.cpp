#include <bits/stdc++.h>

using namespace std;

bool check(string i,string j) 
{ 
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);
    
    return n<m;   
}

int main(){
    
    map<int,vector<string> > mp;

    int n;
    cin >>n;
    string s;
    for(int i=0; i<n ;++i)
    {
        cin>>s;
        mp[(int)s.size()].push_back(s);
    }
    
    for(auto itr : mp) 
    { 
        vector<string> cur=itr.second;
        sort(cur.begin(),cur.end());
        for(auto v : cur)
        cout<<v<<endl;
    }

    
    
    return 0;
}
