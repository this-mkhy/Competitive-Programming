#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Sample Input
3
0
1
4

Sample Output
1
2
7
-----------------
double then add 1
-----------------
    initial result
0-> 1       1
1-> 1       2
2-> 1       2,3
3-> 1       2,3,6
4-> 1       2,3,6,7
5-> 1       2,3,6,7,14
6-> 1       2,3,6,7,14,15
7-> 1       2,3,6,7,14,15,30
8-> 1       2,3,6,7,14,15,30,31
9-> 1       2,3,6,7,14,15,30,31,62

5-> 1       2,3,6,7,14


*/

int main(){
    int t;
    cin >> t;
    for(int a=0; a<t ;++a)
    {
        int n;
        cin >>n;
        int initial=1;
        bool check=true;
        
        while(n--)
        {
            if(check)
            {
                initial=initial*2;
                check=false;
            }
            else
            {
                initial=initial+1;
                check=true;
            }
                
        }
   
        cout<<initial<<endl;
        
    }
    
    return 0;
}
