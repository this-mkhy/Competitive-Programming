#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
3
---------
1 2 3 4 5                   =>5/2=2,2 like it, 3 deleted
6 7 8 9 10 11               =>5/2*3=2*3=6,6/2=3 like it, 3 deleted
12 13 14 15 16 17 18 19 20  =>6/2*3=3*3=9,9/2=4 like it, 5 deleted
2+3+4=9 like it
---------
3
1    2
2    2*3/2=3
3    3*3/2=4
4    4*3/2=6
5    5*3/2=7
6    6*3/2=9
7    7*3/2=10
8    8*3/2=12
9    9*3/2=13
10   10*3/2=15

i          1   2   3   4   5   6   7   8   9   10
initial    2   3   4   6   7   9   10  12  13  15   
sum        2   5   9   15  22  31  41  53  66  81
*/
int main() {
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<2<<endl;
        return 0;
    }
    
    int sum=2,initial=0;
    for(int i=2; i<=n+1 ;++i)
    {
        sum+=initial;
        initial=(i/2)*3;
        
    }
    
    cout<<sum<<endl;
    
    return 0;
}
