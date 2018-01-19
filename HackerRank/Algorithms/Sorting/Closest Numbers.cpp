#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int n;
    cin>>n;
    vector <int> vec;
    for(int i=0 ; i<n ;++i)
    {
        int x;
        cin>>x;
        vec.push_back(x);
        
    }
    
    sort(vec.begin(),vec.end(),greater<int>());

    /*
    0  1  2  3  4 5 6 7
    16 13 12 10 8 6 5 1
    3  1  2  2  2 1 4


    */
    
    int mini=vec[0]-vec[1];   //3
    vector <int> res;
    for(int i=1 ;i<n-1 ;++i)
    {
        if(vec[i]-vec[i+1]<=mini)
        {
            mini=vec[i]-vec[i+1];
        }
        
    }
    
    //cout<<"mini : "<<mini<<endl;
    
    for(int i=0; i<n-1 ;i++)
    {
        if(vec[i]-vec[i+1]==mini)
        {
            res.push_back(vec[i]);
            res.push_back(vec[i+1]);
        }
    }     
        
    sort(res.begin(),res.end());
    for(int i=0 ;i<res.size() ;++i)
    {
        cout<<res[i]<<" ";
    
    }
  
    return 0;
}
