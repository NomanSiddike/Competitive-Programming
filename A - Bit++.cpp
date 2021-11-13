#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x=0;
    string s;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }

        cout << "" << x << endl;


        return 0;
}
