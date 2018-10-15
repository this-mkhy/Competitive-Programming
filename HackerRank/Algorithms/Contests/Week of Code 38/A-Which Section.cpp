#include <bits/stdc++.h>

using namespace std;

//11   24   420   6   9
//11   35   455   461 490
int t;

// vector <int> vec;
int main()
{
    cin>>t;
    
    while(t--)
    {
        int n,k,m;
        int x=0;
        cin>>n>>k>>m;

        int arr[505],res[505];
        for (int i=0; i<m ;++i) 
        {
            cin>>arr[i];
            res[i]=arr[i]+x;
            x=res[i];                        
        }
        
        int start=1;
        for (int j=0; j<m ;++j) 
        {
            //cout<<res[i]<<" ";
            if(k>=start && res[j]>=k)
            {
                cout<<j+1<<endl;
                break;                
            }
            else
            {
                start=res[j]+1;
            }
        }
        
    }
        
    return 0;
}