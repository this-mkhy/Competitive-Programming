#include <bits/stdc++.h>

using namespace std;

int arr[101][101];

int main()
{
    int n,m,k;

    cin >>n>>m>>k;

    arr[0][0]=m;
    for(int i=0; i<n ;++i)
    {
        for(int j=0; j<n ;++j)
        {
        if(i==j && i!=0 && j!=0)
            arr[i][j]=arr[i-1][j-1]+k;
        if(i>j)
            arr[i][j]=arr[i-1][j]-1;
        else if(j>i)
            arr[i][j]=arr[i][j-1]-1;

        }
    }


    for(int i=0; i<n ;++i)
    {
        for(int j=0; j<n ;++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
