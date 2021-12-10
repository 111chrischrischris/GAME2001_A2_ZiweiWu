#include <iostream>
#include "PriorityQueue.h"
using namespace std;

template<class T>
class less_cmp // Less than compare with nonpointer type
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return lVal < rVal;
	}
};

template<class T>
class less_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return ((*lVal) < (*rVal));
	}
};

template<class T>
class greater_cmp // Less than compare with nonpointer type
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !(lVal < rVal);
	}
};

template<class T>
class greater_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !((*lVal) < (*rVal));
	}
};

int main()
{
	const int SIZE = 8;
	PriorityQueue<int> que(SIZE);
	que.push(2, 3);
	que.push(2, 6);
	que.push(6, 1);
	que.push(1, 2);
	que.push(100, 4);
	que.push(5, 2);
	que.push(9, 1);
	que.push(7, 6);
	// Display the priority queue
	cout << "Priority queue content (Size - " << que.GetSize() << ") : " << endl;

	while (que.isEmpty() == false)
	{
		cout << "  Priority: " << que.front().getPriority();
		cout << "  Data: " << que.front().getData();
		cout << endl;

		que.pop();
	}

	cout << endl;

	if (que.isEmpty() == true)
	{
		cout << "The container is empty." << endl;
	}
	else
	{
		cout << "The container is NOT empty." << endl;
	}
	return 0;
}