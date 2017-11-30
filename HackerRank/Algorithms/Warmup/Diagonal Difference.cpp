#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX=1000;
int arr[MAX][MAX];

int main(){
    int n;
    cin >> n;
    //vector< vector<int> > a(n,vector<int>(n));
    for(int i=0; i<n ;++i)
    {
       for(int j=0; j<n ;++j)
       {
          cin>>arr[i][j];
       }
    }
    
    int sumDiagonal=0,sumAntiDiagonal=0;
    for(int i=0; i<n ;++i)
    {
        sumDiagonal=sumDiagonal+arr[i][i];
        sumAntiDiagonal=sumAntiDiagonal+arr[i][n-i-1];
        
    }
    
    cout<<abs(sumDiagonal-sumAntiDiagonal)<<endl;
    
    
    
    return 0;
}
