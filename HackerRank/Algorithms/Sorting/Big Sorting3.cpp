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
    
    int n;
    cin>>n;
    vector<pair<long int,string> > v;
    string s;
    for(int i=0; i<n ;++i)
    {
        cin>>s;
        v.push_back(make_pair(s.size(),s));
    }
    
    sort(v.begin(),v.end());
    for(int i=0; i<n ;++i)
    {
        cout<<v[i].second<<endl;
    }

    return 0;
}
