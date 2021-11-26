/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 26/11/2021
* @filename    : cleanSequence
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

void solve(){
	ll n,k;
	cin>>n>>k;
	vector<ll> data(n);

	for(int i=0;i<n;i++)
		cin>>data[i];

	if(k==1){
		cout<<0<<endl;
		return;
	}
	if(k==2){
		cout<<0<<" "<<0<<endl;
		return;
	}

	if(n==k){
		for(int i=0;i<k;i++){
			cout<<n-2<<" ";
		}
		cout<<endl;
		return;
	}

	for(int i=1;i<=k;i++){
		ll ans=0;
		bool first=false;
		int pri=-1;
		for(int u=0;u<n;u++){
			if(data[u]!=i){
				if(!first){
					pri=data[u];
					first=true;
				}else{
					if(data[u]!=pri){
						ans++;
						pri=data[u];
					}
				}
			}
		}
		cout<<ans<<" ";
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int t;cin>>t;

	while(t--){
		solve();
	}

	return 0;
}

