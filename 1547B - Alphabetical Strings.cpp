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
            string s;
            cin >> s;
            long long int len = s.size();
            long long int i,j, pos=-1, flag=0;
            char ch = 'b';
            for(i=0; i<len; i++)
            {
                if(s[i]=='a')
                {
                    pos =i;
                    break;
                }
            }
            //cout << pos << endl;

            if(pos==-1)
            {
                cout << "No" << endl;
            }
            else
                {
                    i = pos+1;
                    j = pos-1;
                    while(i<len || j>=0)
                    {
                        if(s[i]==ch)
                        {
                            ch++;
                            i++;
                        }
                        else if(s[j]==ch)
                        {
                            ch++;
                            j--;
                        }
                        else
                        {
                            cout << "NO" << endl;
                            flag = 1;
                            break;
                        }
                    }
                    if(flag==0)
                    {
                        cout << "YES" << endl;
                    }
                }
        }

    
    
    return 0;

}
