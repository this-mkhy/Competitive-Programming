#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a=0; a<t ;++a)
    {
        int n,k,sum=0;
        cin >> n >> k;
        vector<int> vec(n);
        for(int i=0; i<n ;++i)
        {
            cin >> vec[i];
            if(vec[i]<=0)
                sum++;
            
        }
        if(sum>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
        
    }
    return 0;
}
