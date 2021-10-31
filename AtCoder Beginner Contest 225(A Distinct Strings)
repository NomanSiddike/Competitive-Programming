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
    if(cnt==1)
        cout << "1" << endl;
    else if(cnt==2)
        cout <<"3" << endl;
    else if(cnt==3)
        cout << "6" << endl;


    return 0;
}
