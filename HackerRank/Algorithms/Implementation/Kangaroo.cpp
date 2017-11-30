#include <bits/stdc++.h>

using namespace std;

bool kangaroo(int x1, int v1, int x2, int v2) {

    int difx=x1-x2;    //0-4=-4
    int difv=v2-v1;    //3-2=1
    
    if (difv!=0 && difx%difv==0 && difx/difv>0) 
        return true;
    else 
        return false;
    
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    bool result = kangaroo(x1, v1, x2, v2);
    if (result)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;

    return 0;
}
