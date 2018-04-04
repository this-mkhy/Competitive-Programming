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


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int i = 0; i<n ;++i)
    {
       cin >> height[i];
        
    }
    
    sort(height.rbegin(),height.rend());
    int tallest=height[0];
    if(k>=tallest)
        cout<<0<<endl;
    else
        cout<<tallest-k;
    
    
    return 0;
}
