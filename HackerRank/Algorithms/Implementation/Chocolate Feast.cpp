#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector <int> vec;
    while(t--)
    {
        int n,c,m;
        cin>>n>>c>>m;
        int x=n/c;
        vec.push_back(x);
        while(x>=m)
        {
            
            if(x%m==0)
            {
                vec.push_back(x/m);
                x/=m;
                
            }
            else
            {
                vec.push_back(x/m);
                x=(x/m)+(x%m);

            }
                    

        }
                 
        int sum=0;     
        for(int i=0; i<vec.size() ;++i)
        {
            sum+=vec[i];
        }
        
        cout<<sum<<endl;
        vec.clear();
                

    }
    return 0;
}
