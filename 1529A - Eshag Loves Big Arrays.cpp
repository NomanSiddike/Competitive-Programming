#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("C:/Users/asus/Documents/codes/input.txt", "r", stdin);
        freopen("C:/Users/asus/Documents/codes/output.txt", "w", stdout);
    #endif
        
       long long int T;
       cin >> T;
       while(T--)
       {
        long long int N, arr[100000], i, num=0, count=0, sum=0, Min=1000000;
        cin >> N;
        for(i=0; i<N; i++)
        {
            cin >> arr[i];
            Min =min(Min, arr[i]);
        }
        //cout << Min << endl; 

        for(i=0; i<N; i++)
        {
            if(arr[i]==Min)
                num++;
        }  
        //cout << count << endl;   
        
        long long int Avg = (Min*num)/num;
        //cout << Avg << endl; 

        for(i=0; i<N; i++)
        {
            if(arr[i]>Avg)
                count++;
        }
        cout << count << endl;
       }
       
    return 0;

}
