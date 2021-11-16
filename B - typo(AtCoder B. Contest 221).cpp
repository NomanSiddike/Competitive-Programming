#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    bool ok = false;
    string s1,s2;
    cin >> s1 >> s2;
    len = s1.size();
    if(s1==s2)
        ok = true;
    for(int i=0;i<len;i++){
        swap(s1[i],s1[i+1]);
    if(s1==s2)
        ok = true;
        swap(s1[i],s1[i+1]);

    }
    if(ok == false)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;



    return 0;
}
