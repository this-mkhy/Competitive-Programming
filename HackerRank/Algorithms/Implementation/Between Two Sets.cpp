#include <bits/stdc++.h>
#define forLoop(i,n) for (int i = 0; i < int(n); ++i)

using namespace std;

const int maxc=100;

int gcd(int a, int b) 
{
    while (a && b) 
    {
        if (a >= b)
            a %= b;
        else
            b %= a;
    }
    
    return a + b;
}

/*
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
    
}
*/

int lcm(int a,int b) 
{
    return (a/gcd(a,b)) * b;
}



int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    
    int A=1,B=0;
    forLoop(i, n) 
    {
        int x;
        cin >> x;
        A=lcm(A,x);
        if (A>maxc) 
        {
            cout<<0<<endl;
            return 0;
        }
    
    }
    
    /*
    for(int i=0; i<n ;++i)
    {
       cin>>a[i];
       A=lcm(A,a[i]);
       if (A>maxc) 
       {
           cout<<0<<endl;
           return 0;
       }
    
    }
    */
    
    vector<int> b(m);
    forLoop(i, m)
    {
        int x;
        cin >> x;
        B=gcd(B,x);
        
    }
    
    /*
    for(int i=0; i<n ;++i)
    {
        cin >>b[i];
        B=gcd(B,b[i]);
        
    }
   */
    if (B%A != 0) 
    {
        cout<<0<<endl;
        return 0;
    }
    
    B /= A;
    int res = 0;
    for (int i=1; i*i<=B ;++i) 
    {
        if (B%i== 0) 
        {
            ++res;
            if (i*i != B)
                ++res;
        }
    }
 
    cout<<res<<endl;

    
    return 0;
}
