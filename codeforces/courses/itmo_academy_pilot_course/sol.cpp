/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : sol
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

void search(vector<int> v, int n){
	int a=0,b=v.size()-1;
	while(b>=a){
		int middle=(a+b)/2;
		if(v[middle]==n){
			cout<<"YES"<<endl;
			return;
		}
		if(v[middle]>n)
			b=middle-1;
		else
			a=middle+1;
	}
	cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int n,k;
	cin>>n>>k;

	vector<int> data(n);

	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	for(int i=0;i<k;i++){
		int num;cin>>num;
		search(data,num);
	}

	return 0;
}

