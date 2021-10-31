#include<bits/stdc++.h>
using namespace std;



int cntDnct(int arr[],int size)
{
   int cnt=1,i,j;
   for(i=1;i<size;i++){
      for(j=0;j<i;j++){
         if(arr[i]==arr[j])
            {
            break;
            }
      }
      if(i==j)
        {
         cnt++;
        }
   }

   return cnt;

}


int main(){
    int T,arr[1000];
    cin >> T;

    for(int i=0;i<T;i++)
        cin >> arr[i];
   int size=T;

   int s=cntDnct(arr,size);
   if(s==1)
    cout << "0";
   else
   cout << "" <<s;


   return 0;
}
