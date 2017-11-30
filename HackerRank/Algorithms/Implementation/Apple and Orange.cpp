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
    int s;
    int t;
    cin >> s >> t;
    
    int a;
    int b;
    cin >> a >> b;
    
    int m;
    int n;
    cin >> m >> n;

    vector<int> apple(m);
    int countApples=0;
    for(int i=0; i<m ;++i)
    {
       cin >> apple[i];
       if(a+apple[i]>=s && a+apple[i]<=t )
            countApples++;
        
    }
    
    vector<int> orange(n);
    int countOranges=0;
    for(int i=0; i<n ;++i)
    {
       cin>>orange[i];
       if(b+orange[i]<=t&& b+orange[i]>=s )
            countOranges++;
    
    }
    
    cout<<countApples<<endl<<countOranges<<endl;  
    
    
    
    
    
    
    return 0;
}
