/** 
* @author      : jinnbit
* @created     : 02/11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

struct node{ int data; node *l=NULL,*r=NULL;};
class bst{
	node *root=NULL;
	node* add(node* n,int num){
		node* k=n;
		if(n==NULL){
			k=new node;
			k->data=num;
			return k;
		}else{
			if(n->data>num) k->l=add(n->l,num);
			else k->r=add(n->r,num);
		}
		return k;
	}
	bool search(node* n,int num){
		if(n==NULL) return 0;
		if(n->data==num){ return 1;
		}else if(n->data>num){ return search(n->l,num);
		}else{ return search(n->r,num);}
	}
	public:
	bool search(int num){ if(root!=NULL){return search(root,num);}return 0;}
	void add(int num){ root=add(root,num);}
};

void solve(){

	string abc;
	int pos[26];
	cin>>abc;
	string str;
	cin>>str;
	int ans=0;

	for(int i=0;i<26;i++)
		pos[abc[i]-97]=i;

	/*
	for(int i=0;i<26;i++)
		cout<<pos[i]<<" ";
	cout<<endl;
*/
	for(int i=1;i<str.length();i++)
		ans+=abs(pos[str[i-1]-97]-pos[str[i]-97]);

	cout<<ans<<endl;
		
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin>>n;
	while(n--)
		solve();

	return 0;
}
