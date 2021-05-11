//
//  Tree.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/11.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "TreeNode.hpp"
using namespace std;

class Tree{
   
public:
    TreeNode* root;
    Tree();
    ~Tree();
    void insert(int x);
    static void preOrderTraveral(TreeNode *node);
};

#endif /* Tree_hpp */
