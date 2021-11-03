#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,sum=0,q=0;
    cin >> N;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
           //cout << "" << i << endl;
            sum=sum+i;
            q=N/i;
            if(q!=i)
                sum=sum+q;}

    }
    cout << "" << sum << endl;



    return 0;
}
