#include<bits/stdc++.h>

using namespace std;


int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        int p=n;
        int c=0;
        while(p!=0)
        {
            int rem=p%10;
            if(rem==0);
            else if(n%rem==0)
                c++;
            p/=10;
        }
        
        cout<<c<<endl;
    }
    
    return 0;
}
