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
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int n;cin>>n;
	int data[n][n]={0};
	
	for(int i=0;i<n;i++){
		for(int u=0;u<n;u++){
			cin>>data[i][u];
		}
	}
	int fil[n]={0};
	int col[n]={0};

	int ans=-1;
	bool found=false;
	for(int i=0;i<n*n;i++){
		int ff;cin>>ff;

		for(int i=0;i<n;i++){
			for(int u=0;u<n;u++){
				if(data[i][u]==ff){
					fil[i]++;
					col[u]++;
				}
			}
		}
		if(found==false){
			for(int i=0;i<n;i++){
				if(fil[i]==n||col[i]==n){
					ans=ff;
					found=true;
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

