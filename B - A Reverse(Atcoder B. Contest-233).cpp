#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a, b;
    cin >> a >> b ;
    cin >> s;
    reverse(s.begin()+a-1, s.begin()+b);
    cout << "" << s << endl;

    return 0;
}
