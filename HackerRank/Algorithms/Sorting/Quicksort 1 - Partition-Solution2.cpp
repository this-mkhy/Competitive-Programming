#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
5
4 5 3 7 2

Sample Output
4 is pivot
after sort:
2 3 [4] 5 7
3 2 4 5 7

How?
[4] 5 3 7 2
5 3 7 [4] 2
2 3 [4] 5 7
3 2 4 5 7

[4] 5 3 7 2
2 3 
[4] 
5 7

*/

//int arr[1005];

void partition(vector <int>  v) 
{
    int pivot=v[0];
    vector <int> left, right;

    for(int i=0; i<v.size(); i++) 
    {
        if (pivot>v[i])
            left.push_back(v[i]); 
        else if(pivot<v[i])
            right.push_back(v[i]); 
    }
    
    if(!left.empty())
    {
        for (int l=0; l<left.size() ;++l)
            cout<<left[l]<<" ";
    }
    
    cout<<pivot<<" ";
    for (int r=0; r<right.size() ;++r)
        cout<<right[r]<<" ";
    
}
int main(void) {
   vector <int>  vec;
   int sz;
   cin >>sz;
    
   for(int i=0; i<sz ;++i) 
    {
        int tmp;
        cin >>tmp;
        vec.push_back(tmp); 
    }

   partition(vec);
   
   return 0;
}
