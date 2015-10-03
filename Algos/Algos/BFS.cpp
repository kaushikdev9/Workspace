#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
#include <queue>
using namespace std;

void BFSUtil(IntTreeNode* node, bool spiral)
{
	std::queue<IntTreeNode*> q;
	q.push(node);
	
	while(!q.empty())
	{
		IntTreeNode* temp = q.front();
		q.pop();
		
		if(spiral)
		{
			if(temp->left)
				q.push(temp->left);
			
			if(temp->right)
				q.push(temp->right);
		}
		else
		{
			if(temp->right)
				q.push(temp->right);
				
			if(temp->left)
				q.push(temp->left);
		}
		
		spiral = !spiral;
		cout<<temp->data<<"\n";
	}
}

void BFS(IntTreeNode* node)
{
	BFSUtil(node, false);
}

void TestBFS()
{
	PrintHeader("BFS");
	
	IntTreeNode* root = BuildTree10();
	
	BFS(root);
	
	PrintFooter("BFS");
}
