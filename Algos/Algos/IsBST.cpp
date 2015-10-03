#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

bool IsBSTUtil(IntTreeNode* root, int min, int max)
{
	if(root == NULL)
		return true;
		
	if(root->data < min || root->data > max)
		return false;
	
	return IsBSTUtil(root->left, min, root->data - 1) && IsBSTUtil(root->right, root->data + 1, max);
}

bool IsBST(IntTreeNode* root)
{
	IsBSTUtil(root, INT_MIN, INT_MAX);
}

void TestIsBST()
{
	PrintHeader("Is BST");
	
	IntTreeNode* root = BuildTree9();
	
	cout<<IsBST(root);
	
	PrintFooter("Is BST");
}
