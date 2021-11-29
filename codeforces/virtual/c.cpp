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
	init_code();

	int n;
	cin>>n;

	int last=-1;
	int num;
	int ans=0;

	for(int i=0;i<n;i++){
		cin>>num;
		if(last!=-1){
			ans+=abs(last-num);
		}
		last=num;
	}
	cout<<ans<<endl;

	return 0;
}

