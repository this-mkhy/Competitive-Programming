#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   
int main() {
    string str;
    getline(cin,str);
    
    for(int i=0; i<str.size() ;++i)
    { 
        str.at(i)=tolower(str.at(i)); 
    } 
    
    sort(str.begin(), str.end()); 
    str.erase(unique(str.begin(), str.end()), str.end()); 
    
    //to remove the whitespaces
    str.erase(str.begin());

    if(str.size()==26) 
        cout<<"pangram"<<endl; 
    else 
        cout<<"not pangram"<<endl;

    
    
   
    
    return 0;
}
