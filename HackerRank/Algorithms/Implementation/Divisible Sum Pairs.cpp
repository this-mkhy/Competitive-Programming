#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) 
{
    /*
    0 1 2 3 4 5
    1 3 2 6 1 2
    
    1+2=3/3=0   1
    1+2=3/3=0   2
    3+6=9/3=0   3
    2+1=3/3=0   4   
    1+2=3/3=0   5
 
    */
    
    int counts=0,sum=0;
    for(int i=0; i<n-1 ;++i)
        for(int j=i+1; j<n ;++j)
        {
            sum=ar[i]+ar[j];
            if(sum%k==0)
                counts++;
        
        }
    
    return counts;

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int i=0; i<n ;++i)
    {
       cin >> ar[i];
    }

    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
