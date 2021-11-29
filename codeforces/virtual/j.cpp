/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 24/11/2021
* @filename    : j
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

bool is_number(string x){
	for(int i=0;i<x.length();i++){
		if((int)x[i]>58)
			return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	string a,b;
	cin>>a>>b;

	if(is_number(a)&&is_number(b)){
		cout<<stoi(a)-stoi(b)<<endl;
	}else{
		cout<<"NaN"<<endl;
	}
	

	return 0;
}

