#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int first = n;
    int a = n%10;
    n = n/10;
    int b = n%10;
    n = n/10;
    int c = n%10;

    int ans = (a*100+b*10+c) + (b*100+c*10+a) + (c*100+a*10+b);

    cout << ans << endl;




    //cout << a << endl << b << endl << c;

    return 0;
}
