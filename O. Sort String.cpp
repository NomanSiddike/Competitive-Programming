#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,alpha[26] = {};
    char temp;
    cin >> N;

    for(i=0;i<N;i++ ){
        cin >> temp;
        //alpha[temp-'a']++;

    }
    for(i=0;i<26;i++ )
    {
        for(j=0;j<alpha[i];j++ )
        {
            temp =i+'a';
            cout << temp;
        }
    }

    return 0;
}

