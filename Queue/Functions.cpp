# include "Functions.h"
# include <iostream>

void CreateQueue(QueueList& list)
{
	int input;

	std::cout << "list에 넣을 숫자를 입력하세요 : ";
	std::cin >> input;

	Queue* p = new Queue;
	if (list.head == list.tail)
	{
		list.head = p;
		list.tail = p;
		list.head->number = input;
	}
	else
	{
		list.tail->pNext = p;
		list.tail = p;
		list.tail->number = input;
	}
}

void PrintQeueue(QueueList& list)
{
	if (list.tail = nullptr)
	{
		std::cout << "EMPTY!" << std::endl;
	}
	else if (list.head = list.tail)
	{
		std::cout << list.head->number << std::endl;
	}
	else
	{
		for (Queue* i = list.head; i != list.tail; i = list.head->pNext)
		{
			std::cout << i->number << std::endl;
		}
	}
}
