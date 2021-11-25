/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : b
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
	int k;
	cin>>k;

	int count=0;
	for(int i=2;i<=sqrt(k);i++){
		if(k%i==0){
			if(i*i==k)
				count+=i;
			else
				count+=i+k/i;
		}
	}
	if(k!=1)
		count+=1;
	if(count==k){
		cout<<"perfect"<<endl;
	}else if(count>k){
		cout<<"abundant"<<endl;
	}else{
		cout<<"deficient"<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int n;cin>>n;

	while(n--)
		solve();

	return 0;
}

