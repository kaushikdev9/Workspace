#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

IntTreeNode* BuildTree6()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

IntTreeNode* BuildMirror(IntTreeNode* tree1)
{
	if(tree1 == NULL)
		return NULL;

	IntTreeNode* tree2 = CreateIntNode(tree1->data);
	
	tree2->right = BuildMirror(tree1->left);
	tree2->left = BuildMirror(tree1->right);
	
	return tree2;
}

void TestBuildMirror()
{
	PrintHeader("Build Tree Mirror");

	IntTreeNode* root = BuildTree6();
	
	IntTreeNode* mirrorTree = BuildMirror(root);
	
	cout<<mirrorTree->right->data;

	PrintFooter("Build Tree Mirror");
}
