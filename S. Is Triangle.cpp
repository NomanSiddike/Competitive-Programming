#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        cout << "Valid"<<endl;
        double s=(a+b+c)/2;
        double r=(s*(s-a)*(s-b)*(s-c));
        double a=sqrt(r);
        cout << setprecision(8) << "" << a << endl;
    }
    else
        cout << "Invalid" << endl;

        return 0;
}
