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
            long long int i, arr[5], Max=0;
            for(i=0; i<3; i++)
            {
                cin >> arr[i];
                Max = max(Max, arr[i]);
            }
            long long int diff = abs(arr[1]-arr[0]);
            long long int N = diff*2;
            long long int j = arr[2]+1;
            //cout << N << endl;
            //cout << Max << endl;
            if(Max>N)
                cout << "-1" << endl;
            else
                // for(i=1; i<=N; i++)
                // {
                //     if(abs(arr[2]-i)==diff)
                //     {
                //         //if(i*2>=N && arr[2]<N/2)
                //             cout << i << endl;
                //         //else
                //             //cout << i << endl;
                //     } 
                // }
            {
                if(diff>=arr[2])
                {
                    cout << arr[2]+diff << endl;
                }
                else
                {
                    cout << arr[2]-diff << endl;
                }
            }
        }

    
    
    return 0;

}
