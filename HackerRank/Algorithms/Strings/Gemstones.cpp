#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        
    int rocks;
    cin>>rocks;
    char letter[26]={0};
    int count = 0;
    for (int i=0; i<rocks ;++i)
    {
        string s;
        cin>>s;
        for (int j=0; j<s.size();++j) 
        {
            char ch=s[j];
            if (letter[ch-'a']==i) 
            {
                letter[ch-'a']++;
                if (letter[ch-'a']==rocks)
                {
                    count++;
                }                    
            }
        }
    }

    cout<<count<<endl;
    
    return 0;
}
