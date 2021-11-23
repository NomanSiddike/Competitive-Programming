#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x;
    cin >> s >> t >> x;
     if(s>t){
        if(x>=t && x<s) 
            cout << "No" << endl;
        
        else 
            cout << "Yes" << endl;
    }
    
    else if(t>x && s<x) 
        cout << "Yes" << endl; 
        
    else 
        cout << "No" << endl;
    
    
   return 0;
}
