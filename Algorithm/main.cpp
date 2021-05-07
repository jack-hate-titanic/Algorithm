//
//  main.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//
#include "Node.hpp"
#include "CycleLength.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    Node *node1=new Node(5);
    Node *node2=new Node(6);
    Node *node3=new Node(7);
    Node *node4=new Node(8);
    Node *node5=new Node(9);
    Node *node6=new Node(10);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
    node6->next=node4;
    cout<<getCycleLength(node1)<<endl;
    return 0;
}
