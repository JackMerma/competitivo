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

	ll ini,n;
	cin>>ini;cin>>n;
	
	ll k=n/2;

	if(ini==0){
		if(k%2==0){
			if(n-2*k==0){
				cout<<0<<endl;
			}else{
				cout<<-n<<endl;
			}
		}else{
			if(n-2*k==0){
				cout<<1<<endl;
			}else{
				cout<<n+1<<endl;
			}
		}
	}else if(ini%2==0){
		if(k%2==0){
			if(n-2*k==0){
				cout<<ini<<endl;
			}else{
				cout<<ini-n<<endl;
			}
		}else{
			if(n-2*k==0){
				cout<<ini+1<<endl;
			}else{
				cout<<ini+n+1<<endl;
			}
		}
	}else{
		if(k%2==0){
			if(n-2*k==0){
				cout<<ini<<endl;
			}else{
				cout<<ini+n<<endl;
			}
		}else{
			if(n-2*k==0){
				cout<<ini-1<<endl;
			}else{
				cout<<ini-n-1<<endl;
			}
		}
	}

		
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
