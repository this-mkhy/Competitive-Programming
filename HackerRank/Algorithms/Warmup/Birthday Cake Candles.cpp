#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) 
{
    sort(ar.begin(),ar.end(),greater<int>());
    
    int counts=1;
    int max=ar[0];
    for(int x=1; x<n ;++x)
    {
        if(max==ar[x])
            counts++;
    
    }
    
    return counts;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n ;++i)
    {
       cin>>ar[i];
    }
    
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
