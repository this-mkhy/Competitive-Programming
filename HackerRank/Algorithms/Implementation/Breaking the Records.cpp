#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n ;++i)
    {
       cin >> vec[i];
    }
    
    //3 4 21 36 10 28 35 5 24 42
    //0 1 2  3  3  3  3  3 3  4     4
    //0 0 0  0  0  0  0  0 0  0     0
    
    //10 5 20 20 4 5 2 25 1
    //0  0 1  1  1 1 1 2  1     2
    //0  1 1  1  2 2 3 3  4     4
    
    int best=vec[0],notbest=vec[0],maxCounts=0,minCounts=0;
    int i=1;
    while(i<n)
    {
        if(vec[i]>best)
         {
             //10 5 20 20 4 5 2 25 1
             //0  0 1  1  1 1 1 2  1     2
             maxCounts++;
             best=vec[i];
         }
    
        else if(vec[i]<notbest)
         {
            //10 5 20 20 4 5 2 25 1
            //0  1 1  1  2 2 3 3  4     4
            minCounts++;
            notbest=vec[i];
         }
        i++;
    }
    

    cout<<maxCounts<<" "<<minCounts<<endl;

    return 0;
}
