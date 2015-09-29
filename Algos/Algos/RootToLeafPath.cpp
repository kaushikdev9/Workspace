#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

void PrintArray1(int path[], int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<path[i]<<"-->";
	}
	cout<<"\n";
}

void PrintRootToLeafRecur(IntTreeNode* node, int* path, int len)
{
	if(node == NULL)
		return;
	
	path[len++] = node->data;
	
	if(node->left == NULL && node->right == NULL)
	{
		PrintArray1(path, len);
	}
	else
	{
		PrintRootToLeafRecur(node->left, path, len);
		PrintRootToLeafRecur(node->right, path, len);
	}
}

void PrintRootToLeafPath(IntTreeNode* node)
{
	int path[1000];
	PrintRootToLeafRecur(node, path, 0);
}

void TestPrintRootToLeafPath()
{
	PrintHeader("Root to Leaf Path");
	
	IntTreeNode* root = BuildTree7();
	
	PrintRootToLeafPath(root);
	
	PrintFooter("Root to Leaf Path");
}
