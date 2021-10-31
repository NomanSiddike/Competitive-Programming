#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S1,S2;
    cin >> S1 >> S2;
    int len1=S1.size();
    int len2=S2.size();
    for(int i=0;i<=len1;i++){
        if(S1[i]>=65 && S1[i]<92)
        S1[i]+=32;
    }
     for(int i=0;i<=len2;i++){
        if(S2[i]>=65 && S2[i]<92)
        S2[i]+=32;
    }

    string A=S1;
    string B=S2;
    if(A>B)
    cout << "1";
    else if(A<B)
        cout << "-1";
    else
        cout << "0";



    return 0;
}
