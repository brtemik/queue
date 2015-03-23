// ТИМП-3-очередь.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



#include <iostream>
#include "MyQueue.h"

int main(int argc, char** argv)
{
	int n, data;
	char c;

	MyQueue queue;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c;

		if (c == 'a')
		{
			std::cin >> data;
			queue.enqueue(data);
		}
		else if (c == 'd')
			queue.dequeue();
	}

	while (!queue.isEmpty())
		std::cout << queue.dequeue() << std::endl;

	getchar();
	getchar();

	return 0;
}

