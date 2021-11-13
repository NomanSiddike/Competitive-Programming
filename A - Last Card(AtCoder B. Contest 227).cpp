#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin >> n >> k >> t;
    int s=t;
    while(k>0){
       if(s!=t)
       {
          s=1;
       }

       while(n>=s && k>0)
       {
           k--;
           s++;
       }
    }
    cout << "" << s-1 << endl;


    return 0;
}
