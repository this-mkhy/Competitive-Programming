#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int num,sz;
    cin>>num>>sz;
    
    int arr[1000];
    for(int i=0; i<sz ;++i)
    {
        cin>>arr[i];

    }

    for(int i=0; i<sz ;++i)
    {
        if(num==arr[i])
        {
            cout<<i<<endl;
            return 0;
        }
            
    }

    return 0;
}
