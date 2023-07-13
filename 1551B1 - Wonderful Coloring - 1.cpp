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
            int l = s.size();
            int count=0,i, red=0, green=0;
            for(int i=0; i<l; i++)
            {
                count = 0;
                for(int j=0; j<l; j++)
                {
                    if(i>j && s[i]==s[j])
                    {
                        break;
                    }
                    else if(s[i] == s[j])
                    {
                        count++;
                    }
                }

                if(count!=0)
                {
                    if(count>=2)
                    {
                        red++;
                        green++;
                    }
                    else
                    {
                        if(red>green)
                            green++;
                        else 
                            red++;
                    }
                }  
            }
            if(red>green)
              red--;
            cout << red << endl;        
        }
  

    return 0;
}
