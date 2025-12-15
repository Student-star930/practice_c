// CMakeProject3_Queue.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once
//使用含有尾部指针的链表来C语言实现
#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
typedef struct Qnode {

	int  data;
	struct Qnode* next;

}Qnode;
//链队类型定义

typedef struct {
	Qnode* front;
	Qnode* rear;

}LiQueue;
//初始化链队
LiQueue *InitQueue();

//销毁队列
void DestroyQueue(LiQueue* q);

//判断是否为空

bool IsEmpty(LiQueue* q);

//入队列enQueue
void enQueue(LiQueue*q,int e);

//出队列deQueue
int deQueue(LiQueue* q);