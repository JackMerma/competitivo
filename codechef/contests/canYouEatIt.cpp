/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 26/11/2021
* @filename    : canYouEatIt
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
	int N,K;
	cin>>N>>K;

	if(N%K==0){
		cout<<N/K<<endl;
	}else{
		cout<<-1<<endl;
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int n;cin>>n;

	while(n--){
		solve();
	}
	

	return 0;
}

