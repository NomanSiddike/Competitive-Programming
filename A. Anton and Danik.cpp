#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,Antn=0,Dank=0;
    //char C[10000];
    string s;
    cin >> N;
    //for(int i=0;i<N;i++)
        cin >> s;
    //int len = strlen(C);

    for(int i=0;i<s.size();i++){
        if(s[i]=='A')
            Antn++;
        else if(s[i]=='D')
            Dank++;
    }
    if(Antn>Dank)
        cout << "Anton" <<endl;
    else if(Antn<Dank)
        cout << "Danik" << endl;
    else if(Antn==Dank)
        cout << "Friendship" << endl;

    return 0;
}

