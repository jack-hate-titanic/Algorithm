/*
 * @Author: your name
 * @Date: 2021-05-11 09:24:20
 * @LastEditTime: 2021-09-13 22:25:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Algorithm/Algorithm/Tree/Tree.cpp
 */
//
//  Tree.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/11.
//

#include <iostream>
#include "Tree.hpp"
#include "TreeNode.hpp"
using namespace std;

Tree::Tree()
{
    this->root = NULL;
}

void Tree::insert(int x)
{
    TreeNode *p = new TreeNode(x);
    if (this->root == NULL)
    {
        this->root = p;
    }
    else
    {
        TreeNode *temp = this->root;
        
        while (x < temp->data)
        {
            if (temp->leftChild == NULL)
            {
                temp->leftChild = p;
                break;
            }
            temp = temp->leftChild;
        }
        while (x >= temp->data)
        {
            if (temp->rightChild == NULL)
            {
                temp->rightChild = p;
                break;
            }
            temp = temp->rightChild;
        }
    }
}

void Tree::preOrderTraveral(TreeNode *node)
{
    if (node == NULL)
    {
        return;
    };
    cout << node->data << endl;
    preOrderTraveral(node->leftChild);
    preOrderTraveral(node->rightChild);
}

void Tree::inOrderTraveral(TreeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    inOrderTraveral(node->leftChild);
    cout << node->data << endl;
    inOrderTraveral(node->rightChild);
}

int main(){
    Tree *tree = new Tree();
    tree->insert(9);
    tree->insert(6);
    tree->insert(4);
    tree->insert(7);
    tree->insert(10);
    tree->insert(12);
    TreeNode *root=tree->root;
//    TreeNode *leftChild=root->leftChild;
//    cout << tree-root->data<< endl;
    tree->inOrderTraveral(root);
    
    return 0;
}
