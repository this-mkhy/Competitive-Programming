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
    string s;
    cin >> s;
    int sum=0,sz=s.size();
    for(int i=0; i<sz ;i+=3)
    {
        if(s[i]!='S')
            sum++;
        if(s[i+1]!='O')
            sum++;
        if(s[i+2]!='S')
            sum++;
    }
    
    cout<<sum<<endl;
  
    
    return 0;
}
