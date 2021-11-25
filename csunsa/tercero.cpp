/** 
 * @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
 * @created     : 10/11/2021
 * @filename    : otro
 * @description : _
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"
#define PI 3.1415926535897932384626

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string oracion;
	getline(cin, oracion);
	for(int i=0; i<oracion.length(); i++) {
		if (oracion[i] == ' '){
			oracion.erase(i,1);
			i--;
		}
	}
	int fil=sqrt(oracion.length());
	int col;
	if(fil*fil==oracion.length()) col=fil;
	else col=fil+1;
	if(fil*col<oracion.length()) fil++;
	

	for(int i=0;i<col;i++){
		for(int u=i;u<oracion.length();u+=col){
			cout<<oracion[u];
		}
		cout<<" ";
	}

	return 0;
}


