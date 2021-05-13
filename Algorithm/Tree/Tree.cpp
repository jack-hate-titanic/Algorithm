//
//  Tree.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/11.
//

#include "Tree.hpp"

Tree::Tree(){
    this->root=NULL;
}


void Tree::insert(int x){
    TreeNode *p=new TreeNode(x);
    if(this->root==NULL){
        this->root=p;
    }else{
        TreeNode *temp=this->root;
        while (x<temp->data) {
            if(temp->leftChild==NULL){
                temp->leftChild=p;
                break;
            }
            temp=temp->leftChild;
        }
        while (x>=temp->data) {
            if(temp->rightChild==NULL){
                temp->rightChild=p;
                break;
            }
            temp=temp->rightChild;
        }
    }
    
}

void Tree::preOrderTraveral(TreeNode *node){
    if(node==NULL){
        return;
    };
    cout<<node->data<<endl;
    preOrderTraveral(node->leftChild);
    preOrderTraveral(node->rightChild);
}

void Tree::inOrderTraveral(TreeNode *node){
    if(node==NULL){
        return;
    }
    inOrderTraveral(node->leftChild);
    cout<<node->data<<endl;
    inOrderTraveral(node->rightChild);
}
