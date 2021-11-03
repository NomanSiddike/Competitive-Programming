#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,result,ans;
    cin >> s;
    string d=s;
    reverse(s.begin(),s.end());
    long long carry=9999;
    for(long long i=0;i<s.size();i++){
        long long x=(s[i]-'0')+carry;
        ans +=(x%10)+ '0';
        carry=x/10;
    }

    while(carry !=0){
        ans +=(carry%10)+ '0';
        carry /=10;
    }
    reverse (ans.begin(), ans.end());
    cout <<"" <<ans << endl;






    reverse(d.begin(),d.end());
    long long cary=9999,y=0;
    for(long long i=0;i<d.size();i++){
         y=y+((d[i]-'0')*cary);
        result +=((y%10)+ '0');
        y=y/10;
    }

    while(y!=0){
        result +=((y%10)+ '0');
        y/=10;
    }
    reverse (result.begin(), result.end());
    cout <<"" << result << endl;







    return 0;
}
