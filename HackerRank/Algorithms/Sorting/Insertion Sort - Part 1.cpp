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
2 4 6 8 3

Sample Output
2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 

*/
void insertionSort(vector <int>  ar) 
{
    int SZ=ar.size(),num=ar[SZ-1],idx=0;
    
	for (int i=0; i<SZ ;++i)
    {
		if (ar[i]<num && ar[i+1]>num)
		{
			idx=i+1;
			break;
		}        
        
    }
    
	for (int i=SZ-1; i>idx ;--i)
	{
		ar[i]=ar[i-1];
		for (int j=0; j<SZ ;++j)
			cout<<ar[j]<<" ";
		cout<<endl;
	}

    ar[idx]=num;
	for (int j=0; j<SZ ;++j)
		cout<<ar[j]<<" ";
	cout<<endl;
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

    insertionSort(vec);
    return 0;
}
