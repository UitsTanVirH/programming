#include <bits/stdc++.h>
using namespace std;

struct node
{
  int roll;
	node *next;
};
node *root=NULL;
int main(){

    return 0;
}

void append(int roll){
	if(root==NULL)//If the list is empty
	{
	    root=new node(); //create new node in root
		root->roll=roll;
        root->next=NULL;
	}
}

