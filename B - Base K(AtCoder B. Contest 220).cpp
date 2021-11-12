#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x=0,y=0;
    cin >> k;
    string a,b;
    cin >> a >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        x+=(pow(k,i)*(a[i]-'0'));
    }
    //cout << x << endl;

    for(int i=0;i<b.size();i++){
        y+=(pow(k,i)*(b[i]-'0'));
    }
    //cout << y << endl;

    cout << "" << (long long) x*y << endl;

    return 0;
}
