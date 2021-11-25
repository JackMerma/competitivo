/** 
* @author      : Jackson Fernando Merma Portocarrero (jmermap@unsa.edu.pe)
* @created     : 10/10/2021
* @filename    : vectors
* @description : _
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> nums={4,2,2,5,1,7,10,3};

	for(int i=0;i<nums.size();i++)
		cout<<nums.at(i)<<" ";

	sort(nums.begin(),nums.end());
	cout<<endl;

	for(int i=0;i<nums.size();i++)
		cout<<nums.at(i)<<" ";
	return 0;
}

