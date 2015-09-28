//
//  TreeHeight.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/27/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "TreeUtilities.h"
using namespace std;

int TreeHeight(IntTreeNode* root)
{
    if(root == NULL)
        return 0;
    
    int lHeight = TreeHeight(root->left);
    int rHeight = TreeHeight(root->right);
    
    return lHeight > rHeight ? lHeight + 1 : rHeight + 1;
}

IntTreeNode* BuildTree3()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

void TestTreeHeight()
{
    PrintHeader("Tree Height");
    
    IntTreeNode* root = BuildTree3();
    
    cout<<TreeHeight(root);
    
    PrintFooter("Tree Height");
}