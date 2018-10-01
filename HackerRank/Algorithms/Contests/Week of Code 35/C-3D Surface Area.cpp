#include <bits/stdc++.h>
using namespace std;

int a[102][102];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
	int h, w;

	cin >> h >> w;	

	for(int x=1; x<=h ;++x)
		for(int y=1; y<=w ;++y)
			cin>> a[x][y];

    // top + bottom
	int ans=2*h*w; 
	
	for(int x=1; x<=h ;++x) 
    {
		for(int y=1; y<=w ;++y) 
        {
			for(int i=0; i<4 ;++i) 
            {
				int xx=x+dx[i];
				int yy=y+dy[i];
				ans +=max(0,a[x][y]-a[xx][yy]);
			}
		}
	}
    
	cout<<ans<<endl;

    return 0;
}
