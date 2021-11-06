#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,sum,even=0,odd=0;
    cin >> a >> b;
    if(a<b)
        swap(a,b);
    long long sum_a=a*(a+1)/2;
    long long sum_b=(b-1)*((b-1)+1)/2;
    sum=sum_a - sum_b;

    cout << sum << endl;

    if(b%2==0)
    {
        for(int i=b;i<=a;i+=2)
        {
            if(i%2==0)
                even+=i;
        }
        cout << even <<endl << (sum - even) << endl;
    }
    else
    {
        for(int i=b; i<=a; i+=2)
        {
            odd+=i;
        }
        cout << (sum - odd) <<endl << odd << endl;
    }

    return 0;

}
