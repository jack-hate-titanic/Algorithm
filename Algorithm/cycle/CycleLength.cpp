//
//  CycleLength.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/7.
//

#include "CycleLength.hpp"
// 求环长的思想总结
//
int getCycleLength(Node *head){
    int cycleLength=0;
    int flag=0;// 判断是否相遇
    Node *p1=head;
    Node *p2=head;
    while(p2->next!=NULL){
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2){
            if(cycleLength){
                break;
            }else{
                flag++;
            }
        }
        if(flag){
            cycleLength++;
        }
    }
    return cycleLength;
};
