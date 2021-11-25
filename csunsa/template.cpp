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
	vector<vector<int>> data;

	for(int i=0;i<n;i++){
		ll cant;cin>>cant;
		vector<int> row;
		for(int u=0;u<cant;u++){
			ll dat;cin>>dat;
			row.push_back(dat);
		}
		data.push_back(row);
	}

	for(int i=0;i<k;i++){
		ll x,y;cin>>x>>y;
		cout<<data[x][y]<<endl;
	}

	return 0;
}


