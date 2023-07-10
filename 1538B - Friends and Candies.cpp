#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("C:/Users/asus/Documents/codes/input.txt", "r", stdin);
        freopen("C:/Users/asus/Documents/codes/output.txt", "w", stdout);
    #endif

        long long int T;
        cin >> T;
        while(T--)
        {
            long long int N, arr[1000], i, sum=0, count=0;
            cin >> N;
            for(i=0; i<N; i++)
            {
                cin >> arr[i];
                sum += arr[i];
            }


            if(N==1)
            {
                cout << "0" << endl;
            }


            else
            {
              long long int  x = sum%N;
              long long int z = sum/N;
              
              if(x==0)
                {
                for(i=0; i<N; i++)
                  {
                    if(arr[i]>z)
                        count++;
                  }
                  cout << count << endl;
                }

              else if(x!=0)
              {
                cout << "-1" << endl;
              }
            }
        }
  
    
    return 0;

}
