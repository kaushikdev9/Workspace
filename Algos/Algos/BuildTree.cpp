#include <stdio.h>
#include "TreeUtilities.h"


IntTreeNode* BuildTree()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(5);
    
    return root;
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

IntTreeNode* BuildTree3()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

IntTreeNode* BuildTree4()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

IntTreeNode* BuildTree6()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->left->left = CreateIntNode(5);
    
    return root;
}

IntTreeNode* BuildTree7()
{
    IntTreeNode* root = CreateIntNode(1);
    root->left = CreateIntNode(2);
    root->right = CreateIntNode(3);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(5);
    
    return root;
}

IntTreeNode* BuildTree8()
{
    IntTreeNode* root = CreateIntNode(20);
    root->left = CreateIntNode(8);
    root->right = CreateIntNode(22);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(12);
    root->left->right->left  = CreateIntNode(10);
    root->left->right->right = CreateIntNode(14);
    
    return root;
}

IntTreeNode* BuildTree9()
{
    IntTreeNode* root = CreateIntNode(20);
    root->left = CreateIntNode(8);
    root->right = CreateIntNode(22);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(12);
    root->left->right->left  = CreateIntNode(10);
    root->left->right->right = CreateIntNode(14);
    
    return root;
}

IntTreeNode* BuildTree10()
{
    IntTreeNode* root = CreateIntNode(20);
    root->left = CreateIntNode(8);
    root->right = CreateIntNode(22);
    root->left->left = CreateIntNode(4);
    root->left->right = CreateIntNode(12);
    root->left->right->left  = CreateIntNode(10);
    root->left->right->right = CreateIntNode(14);
    
    return root;
}
