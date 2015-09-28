//
//  TreeUtilities.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/27/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include "TreeUtilities.h"


IntTreeNode* CreateIntNode(int data)
{
    IntTreeNode* newNode = new IntTreeNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}