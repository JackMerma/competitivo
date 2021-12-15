/** 
* @author      : jinnbit
* @created     : 26/11/2021
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
	int n,k;
	cin>>n>>k;
	vector<int> data(n);

	for(int i=0;i<n;i++){
		cin>>data[i];
	}

	if(k==1){
		cout<<0<<endl;
		return;
	}

	if(k==2){
		cout<<0<<" "<<0<<endl;
		return;
	}

	if(k==n){
		for(int i=0;i<n;i++){
			cout<<n-2<<" ";
		}
		cout<<endl;
		return;
	}

	for(int i=1;i<=k;i++){
		int ans=0;
		int pri=-1;
		for(int u=0;u<n;u++){
			if(data[u]!=i){
				if(pri==-1){
					pri=data[u];
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

	int n;
	cin>>n;

	while(n--){
		solve();
	}



	return 0;
}

