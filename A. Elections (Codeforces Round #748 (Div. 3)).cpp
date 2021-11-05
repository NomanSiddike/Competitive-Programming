#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int a,b,c;
    for(int i=0;i<T;i++){
    cin >> a >> b >> c;
    cout << max(0, max(b,c)-a+1) << " ";
    cout << max(0, max(a,c)-b+1) << " ";
    cout << max(0, max(a,b)-c+1) << " ";
    cout << endl;
    }

        return 0;
}
