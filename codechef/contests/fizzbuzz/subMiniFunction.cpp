/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 26/11/2021
* @filename    : subMiniFunction
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
	
	int t;cin>>t;

	while(t--){
		ll n,m;
		cin>>n>>m;

		ll x=n-m;
		if(x<=m+1){
			cout<<x<<endl;
		}else{
			ll y=x/(m+1);
			ll z=x%(m+1);
			ll c=(m+1)-z;
			cout<<c*y*(y+1)/2 + z*(y+1)*(y+2)/2<<endl;
		}
	}

	return 0;
}

