#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long black,white,x,y,z;
        cin>>black>>white;
        cin>>x>>y>>z;
        if(x==y && y==z)
            cout<<(x*black)+(y*white)<<endl;
        else if(x>=y+z)
            cout<<((y+z)*black)+(y*white)<<endl;
        else if(y>=x+z)
            cout<<(x*black)+((x+z)*white)<<endl;
        else
            cout<<(x*black)+(y*white)<<endl;

    }


    return 0;
}
