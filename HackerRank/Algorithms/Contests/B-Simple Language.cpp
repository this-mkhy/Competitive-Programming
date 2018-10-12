#include <bits/stdc++.h>

using namespace std;

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >>n;
    
    long long mx=0;
    
    while(n--)
    {
        string s;
        cin>>s;
        long long x;
        cin>>x;
        if(s=="add")
        {
            mx=max(mx,mx+x);
        }
        else if(s=="set")
        {
            mx=max(mx,x);
            
        }
    }
    
    cout<<mx<<endl; 
    
    //fout << result << "\n";

   //fout.close();

    return 0;
}
