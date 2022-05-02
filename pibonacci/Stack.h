#pragma once
#include <iostream>

using namespace std;
class Stack
{
private:
	int array[30];
	int idx = 0;
public:
	void Push(int element);
	void Pop();
	void Print();
	void IsFull();
	void IsEmpty();
};

