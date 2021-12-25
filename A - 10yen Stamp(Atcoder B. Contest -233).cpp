#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin >> a >> b;
    if(a>=b)
    {
        cout << "0" << endl;
    }
    else if(b>a)
    {
        while(a<b){
            a+=10;
            count++;
        }
        cout << "" << count << endl;
    }

    return 0;
}
