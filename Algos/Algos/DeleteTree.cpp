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
