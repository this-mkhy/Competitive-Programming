#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int i=0; i<5; i++)
    {
       cin >> arr[i];
    }
    
    sort(arr.begin(),arr.end());
    long long sumMin=0,sumMax=0;

    for(int i=0; i<4; i++)
    {
        sumMin+=arr[i];
    }
    
    for(int i=1; i<5; i++)
    {
        sumMax+=arr[i];
    }
    
    cout<<sumMin<<" "<<sumMax<<endl;
        
    return 0;
}
