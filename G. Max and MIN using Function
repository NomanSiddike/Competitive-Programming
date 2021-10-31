#include<bits/stdc++.h>
using namespace std;


int maximum(int arr[],int T)
{
    int maxi=arr[0];
    for(int i=0;i<T;i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    return maxi;
}


int minimum(int arr[],int T)
{
    int mini=arr[0];
    for(int i=0;i<T;i++)
    {
        if(arr[i]<mini)
            mini=arr[i];
    }
    return mini;
}


int main()
{
    int T,arr[10000],maxi,mini;
    cin >> T;

    for(int i=0;i<T;i++){
            cin >> arr[i];
    }
            mini=minimum(arr,T);
            cout << ""<< mini << " ";

            maxi=maximum(arr,T);
            cout << maxi;



    return 0;
}
