#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> a(3),b(3);
    
    for (int i = 0; i < 3; i++) 
        cin >> a[i];
    
  for (int i = 0; i < 3; i++)
        cin >> b[i];
  
    
    int sumA=0,sumB=0;   
    for (int i = 0; i < 3; i++)
    {
    if (a[i]>b[i])
        sumA++;
    if (a[i]<b[i])
       sumB++; 
        
    }
    
    cout <<sumA<< " "<<sumB;
    
    cout << endl;
    

    return 0;
}
