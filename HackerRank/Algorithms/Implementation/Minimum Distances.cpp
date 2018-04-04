#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
7 1 3 4 1 7
0 1 2 3 4 5
4-1=3
5-0=5
3

*/
int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n ;++i)
    {
        cin>>arr[i];
    }
    
    bool ok=false;
    vector <int> vec;
    for(int i=0; i<n-1 ;++i)
    {
        for(int j=i+1; j<n ;++j)
        {
            if(arr[i]==arr[j])
            {
                ok=true;
                int x=abs(i-j);
                vec.push_back(x);
            }
              
        }
    } 
    
    if(ok)
    {
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
    }
    else
        cout<<-1<<endl;
    


    return 0;
}
