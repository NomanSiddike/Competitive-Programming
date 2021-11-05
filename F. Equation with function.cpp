#include<bits/stdc++.h>
using namespace std;

void eqnt(int x, int n)
{
    long long sum,product=0;
    for(int i=2;i<=n;i=i+2){
        sum = x;
        for(int j=1;j<i;j++)
        {
            sum = sum * x;
        }
        product += sum;
    }
    cout << "" << product << endl;
}


int main()
{
    long long x,n;
    cin >> x >> n;
    eqnt(x,n);

    return 0;
}
