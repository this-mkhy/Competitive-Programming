#include <bits/stdc++.h>

using namespace std;

int cop[103];

/*
int sockMerchant(int n, vector <int> ar) {
    // Complete this function

 
//    after sort
//    10 10 10 10 20 20 20 30 50
//    0  1  0  1  0  1  0  0  0
//    1+1+1=3

//This code cause TLE
    sort(ar.begin(),ar.end());

    int sum=0,i=0;
    for(int i; i<n ;i+2)
    {
        if (ar[i]=ar[i+1])
            sum++;
    }
    
    return sum;
    */            
    
    
   
//    after sort
//      10 10 10 10 20 20 20 30 50
//      1  2  3  4  1  2  3  1   1
//      4/2 + 3/2 +  1/2 + 1/2
//      2+1+0+0=3
/*           
    sort(ar.begin(),ar.end());
    vector <int> all(0);
    
    int sum=1,div;
    for(int i=0; i<n ;++i)
    {
        if (ar[i]=ar[i+1])
        {
            sum++;
        }
        if (ar[i]!=ar[i+1])
        {
            div=sum/2;
            all.push_back(div);            
            
        }
  
    }
    
    int res=0;
    for(int i=0; i<all.size() ;++i)
    {
        res=res+all[i];
        
    }   
    
    return res;
*/

    
int main() {
   
       /*
        after using set
        10 20 20 10 10 30 50 10 20
        10 20          30 50    
              1  2  3        4  5
        5/2 = 2.5 = 2+1=3
        
        10 10 10 10 20 20 20 30 50 30
        10          20       30 50   
           1   2  3    4  5        6
        6/2=3
    
        //or
        10 20 20 10 10 30 50 10 20
        10 20          30 50    

        allElement=9
        inSet=4
        9-4=5/2=2+1=3

    */
    
    /*
    int n;
    cin >> n;
 
    
    set <int> st;
    int x;
    
    for(int i=0; i<n ;++i)
    {
        cin>>x;
        st.insert(x);
        
    }
    
    int dif=n-st.size();
    int res=dif/2;
    if(dif%2==0)
        cout<<res<<endl;
    else
        cout<<res+1<<endl;
    */
    
    //Solution by memset
    int n,sum=0;
    cin >> n;
 
    memset(cop, 0, sizeof(cop));
    for (int i=0; i<n ;++i) 
    {
        int tmp;
        cin>>tmp;
        cop[tmp]++;
        if (cop[tmp]==2) 
        {
            cop[tmp]=0;
            sum++;
        }
     }
    cout<<sum<<endl;
    
    return 0;
}
