//
//  main.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//
#include "Node.hpp"
#include "Fib.hpp"
#include <iostream>
#include <string>
#include "Tree.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    const int arr[5]={3,2,5,6,10};
    Tree *tree=new Tree();
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        tree->insert(arr[i]);
    }
    Tree::inOrderTraveral(tree->root);
};
