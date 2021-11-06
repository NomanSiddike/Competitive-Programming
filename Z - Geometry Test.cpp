#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,s;
    cin >> r >> s;
    double p=sqrt(2)*s;
    if((2*r)<= s)
        cout << "Square" << endl;
    else if(p<=(2*r))
        cout << "Circle" << endl;
    else
        cout << "Complex" << endl;
        return 0;
}
