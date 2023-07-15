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
            long long int N, arr[10000],i, Max=0, Min=100000, cnt=0, count=0;
            cin >> N;
            for(i=0; i<N; i++)
            {
                cin >> arr[i];
                Max = max(Max, arr[i]);
                Min = min(Min, arr[i]);
            }
            for(i=0; i<N; i++)
            {
                if(arr[i]==Max)
                {
                    count++;
                }
                else
                {
                    cnt++;
                }
            }
            if(count>cnt)
            {
                for(i=0; i<N; i++)
                {
                    if(arr[i]==Min)
                        cout << i+1 << endl;
                }
            }
            else if(count<cnt)
            {
                for(i=0; i<N; i++)
                {
                    if(arr[i]==Max)
                        cout << i+1 << endl;
                }
            }
        }

    
    
    return 0;

}
