#include "MyQueue.h"

/*! \file myQueue.cpp

*/
MyQueue::MyQueue(void)
{
	pNode_ = NULL;
	pLastNode_ = NULL;
}


MyQueue::~MyQueue(void)
{
	if (pNode_)
		clear();
}


bool MyQueue::isEmpty(void) const
{
	return !(bool)pNode_;
}

/*!
\brief dobavit' v ochered'
*/
void MyQueue::enqueue(int data)
{
	if (pNode_)
	{
		pLastNode_->next_ = new Node(data, NULL);
		pLastNode_ = pLastNode_->next_;
	}
	else
	{
		pNode_ = new Node(data, NULL);
		pLastNode_ = pNode_;
	}
}

/*!
\brief udalit' iz ocheredi
*/
int MyQueue::dequeue(void)
{
	Node *temp = pNode_;
	int data = pNode_->data_;
	pNode_ = pNode_->next_;
	if (!pNode_)
		pLastNode_ = NULL;
	delete temp;
	return data;
}

/*!
\brief ochistit' ochered'
*/
void MyQueue::clear(void)
{
	Node *temp = pNode_;
	if (pNode_)
	{
		while (temp->next_)
		{
			temp = temp->next_;
			delete pNode_;
			pNode_ = temp;
		}
		delete pNode_;
	}
	pNode_ = NULL;
	pLastNode_ = NULL;
}
