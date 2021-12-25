#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,len,A,i,j,cnt=0;
    string s,q,r;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> s;
        len = s.size();
        if(len%2==0)
        {
            A=len/2;
            q = s.substr(0, A);
            r = s.substr(A,len);
            //cout << q << endl << r << endl;
            if(q==r)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }



        else
        {
            cout << "NO" << endl;
        }

    }




    return 0;
}
