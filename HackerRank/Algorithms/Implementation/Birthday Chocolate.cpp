#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > vec, int d, int m){
/*
    1 1 1 1 1 1
    3 2
    d m
    d=m1+m2+...+mi

    1 2 1 3 2 
    3 2
    d m
    d=m1+m2+...+mi

    0 1 2 3 4 5 6 7 8
i   1 2 1 3 2 7 2 1 1
j   1 2 1 3 2 7 2 1 1

    4 3
    d m
    d=m1+m2+...+mi
    1 2 1
    2 1 1
    

*/
    int sum=0,counts=0;
    for(int i=0; i<n ;++i)
    {
        for(int j=i; j<m+i ;++j)
        {
            sum=sum+vec[j];
        }
        
        if(sum==d)
            counts++;
        sum=0;
    }   

    return counts;

}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i=0; i<n ;++i)
    {
       cin >> s[i];
    }
   
    int d;
    int m;
    cin>>d>>m;

    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

    
    
    
    