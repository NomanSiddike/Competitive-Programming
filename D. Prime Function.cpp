#include<bits/stdc++.h>
using namespace std;


bool prime(int n)
{
    bool isprime = true;
    if(n==1 || n==0)
    {
        isprime=false;
    }

    else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
            isprime = false;
        break;
            }
        }
    }
    return isprime;
}





int main()
{
    int T,n;
    cin >> T;
    //for(int i=0;i<T;i++)
//    int n;
//    cin >> n;
    //int S=prime(n);
    for(int i=0;i<T;i++){
            cin >> n;
    if(prime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }


    return 0;
}
