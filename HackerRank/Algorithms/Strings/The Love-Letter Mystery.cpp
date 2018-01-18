#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
    int fst=0; 
    int last=s.length()-1;
    int counts=0;
    while(fst<=last)
    {   
        int maxi=max((int)s[fst],(int)s[last]) ;
        int mini=min((int)s[fst],(int)s[last]) ;
        counts+=(maxi-mini) ;
        fst++;
        last--;
    
    }
    
    return counts;
}

int main() {
    int t;
    cin >> t;
    for(int a=0; a<t ;++a){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        cout << result << endl;
    }
    return 0;
}
