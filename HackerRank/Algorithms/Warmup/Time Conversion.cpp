#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    cin >> s;
    
    //07:05:45PM
    //0123456789
 
    int h=(s[0]-'0')*10+(s[1]-'0');
    if(s[8]=='A') 
        {
        if (h<12) 
            cout<<s.substr(0, 8)<<endl;
        else 
            cout<<"00"<<s.substr(2,6)<<endl;
        } 
    else 
        {
        if (h<12) 
            h += 12;
            
        cout << h << s.substr(2, 6) << endl;
        }

    
    return 0;
}
