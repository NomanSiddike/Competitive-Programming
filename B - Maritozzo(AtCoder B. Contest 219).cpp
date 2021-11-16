#include<bits/stdc++.h>
using namespace std;
int main()
 {
	string s1,s2,s3,t;
	cin >> s1 >> s2 >> s3 >> t;
	int len = t.size();
	for(int i=0;i<len;i++) {
		if(t[i]=='1')
            cout << s1;
		else if(t[i]=='2')
		cout << s2;
		else
		cout << s3;
	}


		return 0;
	}
