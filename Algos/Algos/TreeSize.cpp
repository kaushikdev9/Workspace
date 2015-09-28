//
//  TreeSize.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/27/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "TreeUtilities.h"
#include "Utilities.h"
using namespace std;

int TreeSize(IntTreeNode* root)
{
    if(root == NULL)
        return 0;
    
    return 1 + TreeSize(root->left) + TreeSize(root->right);
}

IntTreeNode* BuildTree()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(5);
    
    return root;
}

void TestTreeSize()
{
    PrintHeader("Calculate Tree Size");
    
    IntTreeNode* root = BuildTree();
    
    cout<<TreeSize(root);
    
    PrintFooter("Calculate Tree Size");
}