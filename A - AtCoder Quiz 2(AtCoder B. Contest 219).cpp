#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cin >> n;
    if(n>=0 && n<40){
        num = 40-n;
         cout << "" << num << endl;
    }
    else if(n>=40 && n<70){
        num = 70-n;
         cout << "" << num << endl;
    }
    else if(n>=70 && n<90){
        num = 90-n;
         cout << "" << num << endl;
    }
    else if(n>=90)
    {
        cout << "expert" << endl;
    }
   


    return 0;
}
