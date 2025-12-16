#include "CMakeProject1.h"
// 初始化队列
//typedef struct Queue {
//	int data[MAXSSIZE];
//	int front;
//	int rear;
//
//
//
//}Queue;
void InitQueue(Queue* q)
{
	q->front = 0;
	q->rear = 0;



}
// 判断队列是否为空
bool IsEmpty(Queue* q)
{
	
	return(q->front == q->rear);



}
// 判断队列是否为满
bool IsFull(Queue* q)
{
	
	return ((q->rear + 1) % MAXSSIZE == q->front);
}
// 入队：成功返回 true，失败（满）返回 false
bool EnQueue(Queue* q, int value)
{
	if (IsFull(q))
	{
		printf("队列已满，无法入队 %d\n", value);
		return false;
	}
	else
	{
		q->rear = (q->rear + 1) % MAXSSIZE;
	q->data[q->rear] = value;

	return true;

	}
	



}
//出队：成功返回 true，失败（满）返回 false,通过指针返回值
bool deQueue(Queue* q, int* p)
{
	if (q->front == q->rear)
	{
		printf("队列为空，无法出队\n");
		return false;
	}
	else
	{
		q->front = (q->front + 1) % MAXSSIZE;
		*p = q->data[q->front];
		return true;
	}



}