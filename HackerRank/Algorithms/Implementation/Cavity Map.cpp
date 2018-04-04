#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100][100];
int main() {
    int n,i,j;
    cin>>n;

    for(i=0; i<n ;++i)
    {
        for(j=0; j<n ;++j)
        {
            scanf("%1d",&arr[i][j]);
            
        }
    }

    for(i=0; i<n ;++i)
    {
        for(j=0; j<n ;++j)
        {
            if((i>=1)&&(i<n-1) && (j>=1)&&(j<n-1))
            {
                int left=arr[i][j-1],right=arr[i][j+1],top=arr[i-1][j],down=arr[i+1][j];
                if( arr[i][j]>left && arr[i][j]>right && arr[i][j]>top && arr[i][j]>down)
                    cout<<"X";
                 else
                    cout<<arr[i][j];
            }
            //for first and last row and right and left column
            else 
                cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}
