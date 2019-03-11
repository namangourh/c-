#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(){
		data=0;
		left=NULL;
		right=NULL;
	}
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};
class bst{
public:
	Node *root;

	bst(){
		root=NULL;

	}
	Node* insert(Node* temp,int x);
	int search(int x);
	void inorder(Node *temp);
	~bst()
	{
		root=NULL;
	}
};


Node* bst::insert(Node* temp,int x){
	if(temp== NULL)
		return (new Node(x));
	if(x==(*temp).data)
		return temp;
	if(x<(*temp).data)
		temp->left=insert(temp->left,x);
	else
		temp->right=insert(temp->right,x);
	return temp;
}


int bst::search(int x){
	Node *temp=root;
	int c=1;
	while(temp!=NULL)
	{
		if((*temp).data == x)
			return c;
		else if((*temp).data < x)
			temp=temp->right;
		else if((*temp).data > x)
			temp=temp->left;
		c++;
	}
	return c;
}

void bst::inorder(Node* temp){
	if(temp!=NULL){
		inorder(temp->left);
		cout<<(*temp).data<<" ";
		inorder(temp->right);
	}
}

int main(){
    srand(time(0));
	bst tree;
	int x,a[20];
	for(int i=0;i<20;i++){
		x=rand()%50+1;
		a[i]=x;
		tree.root=tree.insert(tree.root,x);
		cout<<a[i]<<" ";
	}
	cout<<endl;

	cout<<"Inorder : ";
	tree.inorder(tree.root);
	cout<<endl;

	int s=0;
	for(int i=0;i<20;i++){
		int q=tree.search(a[i]);
		s+=q;
	}
	cout<<"Average no. of comparisons: "<<(s/20.0)<<endl;
	cout<<s<<endl;

}
