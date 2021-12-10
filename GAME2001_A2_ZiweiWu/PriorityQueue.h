#pragma once
#include "LinkedList.h"

template<class T>
class PriorityQueue
{
public:
	PriorityQueue(int size)
	{
		assert(size > 0);
		m_lsize = size;
	}
	~PriorityQueue() {}

	// Priority Queue Functions
	void push(T val, int priority)
	{
		assert(m_elements.GetSize() < m_lsize);

		m_elements.Push(val, priority);
	}

	void pop()
	{
		m_elements.Pop();
	}

	LinkNode<T> front()
	{
		return *m_elements.Begin();
	}

	// Helper functions
	int GetSize()
	{
		return m_elements.GetSize();
	}

	int GetMaxSize()
	{
		return m_lsize;
	}

	bool isEmpty()
	{
		return (m_elements.GetSize() == 0);
	}

	void Resize(int size)
	{
		assert(size > 0);
		m_lsize = size;
	}

private:
	LinkedList<T> m_elements; // Priority Queue Linked List
	int m_lsize;
};