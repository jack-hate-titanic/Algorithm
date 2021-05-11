//
//  TreeNode.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/9.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp
#include <iostream>
#include <stdio.h>
#include <list>
using namespace std;

// 树的节点
class TreeNode{
public:
    int data;
    TreeNode(int data);
    TreeNode *leftChild;
    TreeNode *rightChild;
};

#endif /* TreeNode_hpp */
