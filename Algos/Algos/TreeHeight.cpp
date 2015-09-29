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

void TestTreeHeight()
{
    PrintHeader("Tree Height");
    
    IntTreeNode* root = BuildTree3();
    
    cout<<TreeHeight(root);
    
    PrintFooter("Tree Height");
}
