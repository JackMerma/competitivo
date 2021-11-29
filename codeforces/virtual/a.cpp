/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : a
* @description : _
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define PI 3.1415926535897932384626

void init_code(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();
	
	string str;
	cin>>str;

	bool ans=true;
	for(int i=0;i<str.length();i++){
		if((str[i]-'0')%2==0)
			ans=false;
	}
	cout<<((ans)?"HAPPY":"SAD")<<endl;

	return 0;
}

