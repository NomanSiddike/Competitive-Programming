#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,j=0;
    char ch[10000];
    cin >> N;
    for(int i=0;i<N;i++)
        cin >> ch[i];
        for(int i=0;i<N;i++){
            if(ch[i]==ch[i-1])
                j++;
        }
        cout << "" << j << endl;
    return 0;
}
