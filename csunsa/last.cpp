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

	ll n,k;
	cin>>n>>k;

	vector<int> data;
	for(int i=0;i<n;i++){
		ll num;cin>>num;
		data.push_back(num);
	}
	sort(data.begin(),data.end());
	ll foundTo=data[n-1]-k;
	ll lim=n;

	for(int i=n-1;i>=0;i--){
		if(data[i]<=foundTo)
			break;
		lim--;
	}

	int ans=0;
	if(lim>0){
		for(int i=0;i<lim;i++){
			ll num=data.at(i);
			for(int u=i+1;u<n;u++){
				if(abs(num-data[u])==k)ans++;
			}
		}
	}
	cout<<ans<<endl;

	return 0;
}




