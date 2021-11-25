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

void init_code(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve(){
	int a,b;
	cin>>a>>b;

	int ans=min((a+b)/4,min(a,b));
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	init_code();

	int n;cin>>n;

	while(n--){
		solve();
	}

}

