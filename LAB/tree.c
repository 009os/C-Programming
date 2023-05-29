#include <stdio.h>
#include <stdlib.h>

struct Treenode {
	int data;
	struct Treenode *left, *right;
};

struct Treenode* tree(int item)
{
	struct Treenode* temp
		= (struct Treenode*)malloc(sizeof(struct Treenode));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

void print(struct Treenode* root)
{
	if (root != NULL) {
		print(root->left);
		printf("%d \n", root->data);
		print(root->right);
	}
}

struct Treenode* addnode(struct Treenode* Treenode, int data)
{

	if (Treenode == NULL)
		return tree(data);

	if (data < Treenode->data)
		Treenode->left = addnode(Treenode->left, data);
	else if (data > Treenode->data)
		Treenode->right = addnode(Treenode->right, data);


	return Treenode;
}


int main()
{

	struct Treenode* root = NULL;
	int ch=1,in,root1;
	printf("PLEASE ENTER ROOT : ");
	scanf("%d",&root1);
	root = addnode(root, root1);
	
	while((ch==1)||(ch==2))
	{
	  printf("\nPLEASE ENTER YOUR OPERATIONS : \n1. TO ADD \n2. TO SHOW\n");
	scanf("%d",&ch);
	    switch(ch)
	{
	    case 1:
	    {
	        printf("\nPlease ENTER AN ELEMENT TO ADD : ");
	        scanf("%d",&in);
	        addnode(root, in);
	        
	    }
	    
	    break;
	    
	    case 2:
	    {
	        printf("\n");
	        print(root);
	    }
	    
	    break;
	    
	    default:
	    printf("\nWRONG CHOICE !");
	    
	}
	}
	
	return 0;
}

