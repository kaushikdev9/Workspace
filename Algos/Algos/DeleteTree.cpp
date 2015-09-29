//
//  DeleteTree.cpp
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

IntTreeNode* BuildTree4()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

void DeleteTree(IntTreeNode* root)
{
    if(root == NULL)
        return;
    
    DeleteTree(root->left);
    DeleteTree(root->right);
    
    cout<<"Deleting "<<root->data<<"\n";
    delete(root);
}

void TestDeleteTree()
{
    PrintHeader("Delete Tree");
    
    IntTreeNode* root = BuildTree4();
    
    DeleteTree(root);
    
    PrintFooter("Delete Tree");
}
