#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,sum=0;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(N%i==0)
            //cout << "" << i << endl;
        sum = sum+i;
    }
    cout << "" << sum << endl;



    return 0;
}
