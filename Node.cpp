#include "Node.h"


Node::Node(void)
{
	data_ = 0;
	next_ = NULL;
}


Node::Node(int data)
{
	data_ = data;
	next_ = NULL;
}


Node::Node(int data, Node *next)
{
	data_ = data;
	next_ = next;
}