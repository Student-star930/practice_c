#include "Queue.h"

LiQueue* InitQueue()
{  
	LiQueue* q = (LiQueue*)malloc(sizeof(LiQueue));
	if (q == NULL) {
		return NULL;
	}
	q->front = q->rear = NULL;
	return q;

}
void DestroyQueue(LiQueue* q)
{
	if (q == NULL) 
		return;
	Qnode* temp;
	while (q->front)
	{
		temp = q->front;
		q->front = q->front->next;
		free(temp);
	}
	free(q);
}

bool IsEmpty(LiQueue* q)
{
	return (q->rear == NULL);
}

void enQueue(LiQueue* q, int e)
{
	Qnode* newNode = (Qnode*)malloc(sizeof(Qnode));
	if (newNode == NULL) {
		printf("内存分配失败\n");
		return;
	}
	newNode->data = e;
	newNode->next = NULL;
	if (q->front==NULL&&q->rear == NULL)
	{
		q->front=q->rear= newNode;
	}
	else
	{
		q->rear->next = newNode;
		q->rear = newNode;
	}
}

int deQueue(LiQueue* q)
{
	if (IsEmpty(q))
	{
		printf("队列为空，无法出队\n");
		return -1;
	}
	Qnode* temp = q->front;
	int e = temp->data;
	//只有一个数据节点
	if (q->front->next == NULL)
	{
		q->front = q->rear = NULL;
	}
	else
	{
	q->front = q->front->next;

	
	}
	free(temp);

	return e;




}