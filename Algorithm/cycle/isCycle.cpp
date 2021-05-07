//
//  isCycle.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/7.
//

#include "isCycle.hpp"

// 判断链表是否有环，通常使用双指针思想，用快慢指针的方法
bool isCycle(Node *head){
    Node *p1=head;
    Node *p2=head;
    while (p2->next!=NULL) {
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2){
            return true;
        }
    }
    return false;
}



