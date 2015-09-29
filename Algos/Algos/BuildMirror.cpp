#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

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
