/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 26/11/2021
* @filename    : canReach
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
		int x,y,k;
		cin>>x>>y>>k;
		if(x%k==0&&y%k==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	

	return 0;
}

