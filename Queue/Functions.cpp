# include "Functions.h"

void CreateQueue(QueueList& list)
{
	Queue* p = new Queue;
	if (list.head == list.tail)
	{
		list.tail = p;
	}
	else
	{
		list.tail->pNext = p;
		list.tail = p;
	}
}
