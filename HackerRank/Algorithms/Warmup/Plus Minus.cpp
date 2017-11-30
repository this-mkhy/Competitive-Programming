#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main(){
    int n;
    double pos=0.0,neg=0.0,zeros=0.0;

    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n ;++i)
    {
       cin >> arr[i];
       if(arr[i]>0)
           pos++;
       else if(arr[i]<0)
           neg++;
        else
            zeros++;
        
    }
    cout<<fixed<<setprecision(6)<<pos/n<<endl
        <<fixed<<setprecision(6)<<neg/n<<endl
        <<fixed<<setprecision(6)<<zeros/n<<endl;
    
    
    return 0;
}
