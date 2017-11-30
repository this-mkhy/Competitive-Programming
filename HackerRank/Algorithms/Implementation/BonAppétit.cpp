#include <bits/stdc++.h>

using namespace std;

/*
    4 1
    3 10 2 9
    12
    
    allCost=3+10+2+9=24
    withoutAnna=24-k=24-10=14
    afterSplit=14/2=7
    dif=b-afterSplit=12-7=5

    4 1
    3 10 2 9
    3

    allCost=3+10+2+9=24
    withoutAnna=24-k=24-10=14
    afterSplit=14/2=7
    dif=b-afterSplit=3-7=-4
    
    dif=b-afterSplit=7-3=4

*/

  
int main() {
    int n;
    int k;
    cin >> n >> k;
    
    vector<int> ar(n);
    for(int i=0; i<n ;++i)
    {
       cin>>ar[i];
    }
    
    int b;
    cin >> b;
    
    int allCost=0,withoutAna=0,afterSplit;
    for(int i=0; i<n ;++i)
    {
        allCost=allCost+ar[i];
        
    }

    withoutAna=allCost-ar[k];
    afterSplit=withoutAna/2;
    
    //dif=b-afterSplit=12-7=5
    int dif=b-afterSplit;
    
    if(dif!=0)
       cout<<dif<<endl;
    else
       cout<<"Bon Appetit"<<endl;

    return 0;
}
