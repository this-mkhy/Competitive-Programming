#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    
    for(int i=0; i<n; ++i)
    {
        cin >>grades[i];
        
    }
    
    /*
    for(int i=0; i<n; ++i)
    {
        cin >>grades[i];
        int mul=(((grades[i]/5)+1)*5);
        int dif=mul-grades[i];
        if(grades[i]>= 38 && dif<3)
            cout<<grades[i]+dif<<endl;
        else 
            cout<<grades[i]<<endl;
    }
    
    */
    
    /*
    
    73      75-73 = 2<3     75
    67      70-67 = 3!<3    67
    38      40-38 = 2<3     40  
    33      33<38           33
    
    
    */
    
    
    int mul,dif;
    vector<int> result(0);
    for(int i=0; i<n; ++i)
    {
        mul=(((grades[i]/5)+1)*5);
        dif=mul-grades[i];
        if(grades[i]<38)
            result.push_back(grades[i]);
        else if(dif<3)
            result.push_back(grades[i]+dif);
        else
            result.push_back(grades[i]);

       
    }
    
    for (int i=0; i<result.size() ;++i) 
    {
        cout <<result[i] <<endl;
    }
    cout << endl;
    
    
    
  
    

    return 0;
}
