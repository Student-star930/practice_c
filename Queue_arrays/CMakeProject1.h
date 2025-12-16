// CMakeProject1.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXSSIZE  5

typedef struct Queue {
	int data[MAXSSIZE];
	int front;
	int rear;



}Queue;

// 初始化队列
void InitQueue(Queue* q);
// 判断队列是否为空
bool IsEmpty(Queue* q);
// 判断队列是否为满
bool IsFull(Queue* q);
// 入队：成功返回 true，失败（满）返回 false
bool EnQueue(Queue* q, int value);
//出队：成功返回 true，失败（满）返回 false,通过指针返回值
bool deQueue(Queue* q,int*p);