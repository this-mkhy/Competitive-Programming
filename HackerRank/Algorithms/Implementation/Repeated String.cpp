#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    long long n;
    cin>>n;
//    cout<<n<<endl;
    long long sum=0;
    
    if(s.size()==1)
    {
        if(s[0]=='a')
            cout<<n<<endl;       
        else
            cout<<"0"<<endl;       
        
    }

    else
    {        
        for(long long i=0; i<s.size() ;++i)
        {
            if(s[i]=='a')
                sum++;

        }
        //cout<<sum<<endl;
        sum=sum*(n/s.size());
        //cout<<sum<<endl;

        int rem=n%s.size();
        for(int i=0; i<rem ;++i)
        {
            if(s[i]=='a')
                sum++;

        }

        cout<<sum<<endl;
    }

    return 0;
}
