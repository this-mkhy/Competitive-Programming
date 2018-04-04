#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
Sample Input 0
6
4 6 5 3 3 1

Sample Output 0
3

4 6 5 3 3 1
1     2 3 
---------------------
Sample Input 1
6
1 2 2 3 1 2

Sample Output 1
5

1 2 2 3 1 2
1 2 3   4 5

*/
int a[100]={0};
    
int main(){
    
    int n;
    cin>>n;
    
    //4 6 5 3 3 1 
    for(int i=0; i<n ;++i)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    
    int max=0;
    for(int i=0; i<n-1 ;++i)
    {
        if(a[i]+a[i+1]>max) 
            max=a[i]+a[i+1];
    
    }
    
    cout<<max<<endl;
        
    return 0;
}
