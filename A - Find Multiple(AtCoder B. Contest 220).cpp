#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,x;
   cin >> a >> b >> c;
   int flag = 0;
   for(int i=1; i<=1000;i++){
    if(c*i>=a && c*i<=b)
    {
      x = c*i;
      cout << x << endl;
      flag=1;
      break;
    }

   }
  if(flag==0)
   cout << "-1" << endl;
        return 0;
}
