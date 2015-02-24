#include <iostream>

inline ListNode::ListNode(Entry x)
{
	entry = x;
	next = NULL;
}

inline Entry ListNode::getdata() const
{
	return entry;
}

inline ListNode* ListNode::getnext() const
{
	return next;
}

inline void ListNode::setdata(Entry x)
{
	entry = x;
}

inline void ListNode::setnext(ListNode *n)
{
	next = n;
}
