#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) 
{
    /*
    1 4 4 4 5 3
    1 3 4 4 4 5     4

    1 1 1 2 3 1
    1 1 1 1 2 3     1
    
    1 2 4 4 5 2
    1 2 2 4 4 5     2

    count sum
    1 2 2 4 4 5    
    1 1 2 1 2 1
        2   2
        2==2
        2  4
        2
    
    count sum
    1 1 1 2 3 3
    1 2 3 1 1 2
        3     2
        3>2
    
    
    */
    
    sort(ar.begin(),ar.end());
    
    int counts=1,highCounts=0;
    int currBird=ar[0],theMost=ar[0];
    
    for(int i=0; i<n ;++i)
    {        
        currBird=ar[i];
        if (ar[i]==ar[i+1])
        {
            counts++;
            if (counts>highCounts)
            {
                highCounts=counts;
                theMost=currBird;
        
            } 
            else 
                counts=1;
        
        }
    }
    
    return theMost;

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; ++i)
    {
       cin >> ar[i];
    }
    
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    
    return 0;
}
