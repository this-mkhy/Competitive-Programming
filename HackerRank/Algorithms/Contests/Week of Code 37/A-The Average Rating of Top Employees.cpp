#include <bits/stdc++.h>

using namespace std;
    
double sum=0,counts=0;

int main()
{
    
    int n;
    cin >>n;

    vector<int> rating(n);

    for (int i=0; i<n ;++i) 
    {
        cin>>rating[i];
        if(rating[i]>=90 && rating[i]<=100)
        {
            sum+=rating[i];
            counts++;
        }

    }
    
    double x=sum/counts;    
    
    cout<<fixed<<setprecision(2)<<roundf(x*100)/100<<endl;

    return 0;
}