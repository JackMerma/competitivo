/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : a
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
	
	int n;cin>>n;

	string winner;
	int a,b,c;
	for(int i=0;i<n;i++){
		int A,B,C;
		string w;
		cin>>A>>B>>C;
		getline(cin,w);
		if(i==0){
			a=A;b=B;c=C;
			winner=w;
		}else{
			if(A>a){
				a=A;b=B;c=C;
				winner=w;
			}else if(A==a){
				if(B>b){
					a=A;b=B;c=C;
					winner=w;
				}else if(B==b){
					if(C>c){
						a=A;b=B;c=C;
						winner=w;
					}
				}
			}
		}
	}
	cout<<winner<<endl;

	return 0;
}

