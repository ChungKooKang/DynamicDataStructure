#pragma once
struct Queue
{
	int number;
	Queue* pNext;

};

struct QueueList
{
	Queue* head = nullptr;
	Queue* tail = nullptr;
};

void CreateQueue(QueueList& list);
void PrintQeueue(QueueList& list);