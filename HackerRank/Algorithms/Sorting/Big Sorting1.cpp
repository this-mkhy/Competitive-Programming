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
    cin >> n;
    vector<string> unsorted(n);
    for(int i=0; i<n ;++i)
    {
       cin>>unsorted[i];
    }
    // your code goes here
    
    sort(unsorted.begin(),unsorted.end(),check); 
    for(int i=0; i<n ;++i)
    {
       cout<<unsorted[i]<<endl;
    }
    
    
    
    
    
    return 0;
}
