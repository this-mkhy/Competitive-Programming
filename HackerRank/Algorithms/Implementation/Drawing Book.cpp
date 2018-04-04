#include <bits/stdc++.h>

using namespace std;

int allPages(int& n) 
{
    return (n+2)/2;
    
}

/*
int solve(int n, int p){
    //this code takes WR on last test #26
    int s1=0;
    for(int i=0; i<p ;++i)
    {
        if(i=p)
            s1=p/2;
        
    }
   
    //this code takes WR on last test #26
    int s2=0;
    for(int i=n+1; i>p ;--i)
    {
        if((i-1)!=p)
            s2++;
        
    }
    
    int x=min(s1,s2/2);
    
    return x;
}

*/

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    
    int bookPages=allPages(n);   
    int fromFront=allPages(p)-1;
    int fromBack=bookPages-fromFront-1;
    
    cout<<min(fromFront,fromBack)<<endl;
    
    
    //int result = solve(n, p);
    //cout << result << endl;
    return 0;
}
