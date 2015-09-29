#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

IntTreeNode* LCA(IntTreeNode* node, int a, int b)
{
	if(node == NULL)
		return NULL;
		
	if(node->data > a && node->data > b)
	{
		return LCA(node->left, a, b);		
	}
	else if(node->data < a && node->data < b)
	{
		return LCA(node->right, a, b);
	}
	
	return node; 
}

void TestLCA()
{
	PrintHeader("LCA");
	
	IntTreeNode* root = BuildTree8();
	
	IntTreeNode* lca = LCA(root, 10, 14);
	
	cout<<lca->data;
	
	PrintFooter("LCA");
}
