
#pragma once

#include "Node.h"


class MyQueue
{
public:
	MyQueue(void);
	~MyQueue(void);
	bool isEmpty(void) const;
	void enqueue(int data);
	int dequeue(void);
	void clear(void);

private:
	Node *pNode_;
	Node *pLastNode_;
};
