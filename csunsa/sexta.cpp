// @author      : jinnbit           

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long
#define ld long double
#define endl "\n"
#define PI 3.1415926535897932384626

const ll inf = (ll) 1e12;
//cin.ignore();
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string str;
	cin>>n;
	cin>>str;

	bool uno=0;

	int ini=0,fin=str.length()-1;
	for(int i=0;i<str.length();i++){
		if(str[i]=='0'){

		}
		if(str[i]=='1'){
			uno=1;
		}
	}

	return 0;
}




