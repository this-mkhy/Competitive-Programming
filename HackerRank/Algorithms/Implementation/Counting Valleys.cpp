#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000];
int main()
{
    int n,sum=0,counter=0;
    char s;
    cin>>n;
    
/*
        _/\      _
           \    /
            \/\/

UDDDUDUU
x  0 1 0 -1 -2 -1 -2 -1 0
1

0 1 0 -1 -2 -1 -2 -1 0
0 1 0 -1 -2 -1 -2 -1 0

0 -1 -2 -3 -2 -3 -2 -1 

-------------------------
       /\
    /\/  \
  _/      \_
UUDUUDDD
x  0 1 2 1 2 3 2 1 0
2
--------------------------
  
_          /\_
 \  /\    /
  \/  \/\/
DDUUDDUDUUUD
x   0 -1 -2 -1 0 -1 -2 -1 -2 -1 0 1 0
    -1 0 -1,-2 -1 -2
//2

*/
    
    for(int i=0; i<n ;++i)
    {
        cin>>s;
        if(s=='U')
            sum++;
        else 
            sum--;
        
        if(sum==0 && s=='U')
            counter++;
    }
    
    cout<<counter<<endl;
    
    return 0;
}
