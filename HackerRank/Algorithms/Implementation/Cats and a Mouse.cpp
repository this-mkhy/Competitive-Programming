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
3
1 2 3
1 3 2
2 1 3

Sample Output 0
Cat B
Mouse C
Cat A

*/

int main(){
    int q;
    cin >> q;
    for(int a= 0; a<q ;++a)
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int difA=abs(z-x);   //2 
        int difB=abs(z-y);   //1
        
        if(difA>difB)
            cout<<"Cat B"<<endl;
        else if(difA==difB)
            cout<<"Mouse C"<<endl;
        else if(difA<difB)
            cout<<"Cat A"<<endl;

    
    }
    return 0;
}
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
3
1 2 3
1 3 2
2 1 3

Sample Output 0
Cat B
Mouse C
Cat A

*/

int main(){
    int q;
    cin >> q;
    for(int a= 0; a<q ;++a)
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int difA=abs(z-x);   //2 
        int difB=abs(z-y);   //1
        
        if(difA>difB)
            cout<<"Cat B"<<endl;
        else if(difA==difB)
            cout<<"Mouse C"<<endl;
        else if(difA<difB)
            cout<<"Cat A"<<endl;

    
    }
    return 0;
}
