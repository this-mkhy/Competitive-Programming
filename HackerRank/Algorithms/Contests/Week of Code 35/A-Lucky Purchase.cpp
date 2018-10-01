#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string lapName; 
    int lapPrice=INT_MAX;
    
    for (int i=0; i<n ;++i) 
    {
        string name; 
        int price;
        cin >>name>>price;

        int x=price;
        int sum4=0, sum7=0;
        bool flag=true;
        
        while (x>0) 
        {
            if (x%10==4)
            {
                ++sum4;
            }
            else if (x%10==7) 
            {
                ++sum7;
            }
            else 
            {
                flag=false;
            }
                
            x/=10;
        }

        if (flag && sum4==sum7) 
        {
            if (price<lapPrice) 
            {
                lapPrice=price;
                lapName=name;
            }
        }
    }
    
    if (lapPrice==INT_MAX) 
        cout<<-1<<endl;
    else
        cout<<lapName<<endl;

    return 0;
}
