//
//  TestIdenticalTrees.cpp
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

bool IdenticalTrees(IntTreeNode* tree1, IntTreeNode* tree2)
{
    if(tree1 == NULL && tree2 == NULL)
        return true;
    
    if(tree1 != NULL && tree2 != NULL)
        return tree1->data == tree2->data && IdenticalTrees(tree1->left, tree2->left) && IdenticalTrees(tree1->right, tree2->right);
    
    return false;
}

IntTreeNode* BuildTree1()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(6);
    
    return root;
}

IntTreeNode* BuildTree2()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(5);
    
    return root;
}

void TestIdenticalTrees()
{
    PrintHeader("Identical Trees");
    
    IntTreeNode* tree1 = BuildTree1();
    
    IntTreeNode* tree2 = BuildTree2();
    
    cout<<IdenticalTrees(tree1, tree2);
    
    PrintFooter("Identical Trees");
}