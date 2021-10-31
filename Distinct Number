#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,arr[1000],i,j,cnt=1;
    cin >> T;
    for(int i=0;i<T;i++)
        cin >> arr[i];

    for(i=1;i<T;i++){
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
    cout << cnt << endl;

    return 0;
}
