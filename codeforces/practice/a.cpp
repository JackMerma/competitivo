/** 
* @author      : jinnbit
* @created     : 03/11/2021
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define PI 3.1415926535897932384626

void solve(){
	//here's goes your solve
	string str;
	cin>>str;
	str="("+str+")";
	int stupid=0;
	bool open=0;

	for(int i=0;i<str.length();i++){
		if(str[i]=='('){ 
			stupid++;
			open=1;
		}else if(str[i]==')'){
			stupid--;
			if(stupid==0) open=0;
		}else{
			if(stupid<0)
				stupid++;
			else
				stupid--;
		}
	}
	if(stupid==0&&open==false)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin>>n;

	while(n--) solve();

	return 0;
}


