//
//  Node.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/7.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

// 链表结点
class Node{
public:
    // 由两部分组成，一个是数据，一个是指向下一个节点的指针
    int data;
    Node *next;
    Node(int data);
};

#endif /* Node_hpp */
