#pragma once
struct Queue
{
	int number;
	Queue* pNext;

};

struct QueueList
{
	Queue* head;
	Queue* tail;
};

void CreateQueue(QueueList& list);
void PrintQeueue(QueueList& list);