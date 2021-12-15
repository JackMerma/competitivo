/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 26/11/2021
* @filename    : magicalPlanks
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
		int n;cin>>n;
		string str;cin>>str;
		int w=0,b=0;
		bool wi=false,bl=false;

		for(int i=0;i<str.length();i++){
			if(str[i]=='B'){
				wi=false;
				if(!bl){
					bl=true;
					b++;
				}
			}else{
				bl=false;
				if(!wi){
					wi=true;
					w++;
				}
			}
		}
		cout<<min(w,b)<<endl;
	}

	return 0;
}

