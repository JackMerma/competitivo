/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : c
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
	//init_code();

	ll n;cin>>n;
	vector<ll> data(n);

	for(int i=0;i<n;i++)
		cin>>data[i];

	vector<ll> pos(n);
	for(int i=0;i<n;i++)
		pos[data[i]-1]=i;
	
	ll ans=0;

	for(int i=0;i<n-1;i++){
		for(int u=i+1;u<n;u++){
			if(pos[u]<pos[i]) ans++;
		}
	}
	cout<<ans;

	return 0;
}

