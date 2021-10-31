#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt=0,fre[26]= {};
    for(int i=0;i<s.size();i++){
        if(fre[s[i]-'a']==0)
            cnt++;
        fre[s[i]-'a']=1;

    }
    //cout << "" << cnt;
    if(cnt%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout <<"IGNORE HIM!" << endl;


    return 0;
}
