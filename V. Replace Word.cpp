#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="EGYPT",s2;
    cin >> s2;
    //int len=s1.size();
    int len1=s2.size();
    for(int i=0;i<len1;i++){
        if(s2[i]=='E' && s2[i+1]=='G' && s2[i+2]=='Y' && s2[i+3]=='P' && s2[i+4]=='T')
            {
              i=i+4 ;
              cout <<" ";
            }
        else
            {
              cout <<s2[i];
            }
    }


    return 0;
}
