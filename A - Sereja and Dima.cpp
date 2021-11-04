#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,arr[10000];
    cin >> N;
    for(int i=0;i<N;i++)
        cin >> arr[i];
    int i=0,j=N-1,max,player1=0,player2=0,turn=0;
    while(i<=j){
        if(arr[i]>=arr[j])
        {
            max=arr[i];
            i++;
        }
        else
        {
            max=arr[j];
            j--;
        }
        if(turn%2==0)
            player1 =player1+max;
        else
            player2 =player2+max;
            turn++;
    }
    cout << "" << player1 << " " << player2 << endl;

    return 0;
}
