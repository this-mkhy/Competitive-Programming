#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
4

4
5
1 4 5 3 2
//1 4

4
4
2 2 4 3
//1 2

Sample Output
1 4
1 2

*/

int main() {
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int j=0; j<n-1 ;++j)
        {
            int k=m-a[j];
            for(int i=j+1; i<n ;++i)
            {
                if(a[i]==k)
                {
                    cout<<j+1<<" "<<i+1<<endl;
                }
            }
        }
    }

    return 0;
}

