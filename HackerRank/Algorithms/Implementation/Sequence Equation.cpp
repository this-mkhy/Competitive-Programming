#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /*
    1 2 3 4 5 6 7 8 9 10
    
    p =>2   3   1
    x =>1   2   3
    px=>p3  p1  p2
    pp=>pp2 pp3 pp1

*/
    int t;
    cin>>t;
    int p[t+1];
    for(int i=1; i<=t ;++i)
    {
        int n;
        cin>>n;
        p[n]=i;
    }
    
    for(int i=1; i<=t ;++i)
        cout<<p[p[i]]<<endl;
    

    return 0;
}
