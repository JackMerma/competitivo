/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 10/10/2021
* @filename    : binarySearch
* @description : _
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[]={1,4,5,6,7,11,15,17,19};
	int len=9;
	int x=30;

	//algoritmo
	int k=0;
	for(int b=len/2;b>=1;b/=2)
		while(k+b<len&&arr[k+b]<=x) k+=b;


	//
	if(arr[k]==x)
		cout<<"Encontrado";
	else
		cout<<"no encontrado";

	return 0;
}

