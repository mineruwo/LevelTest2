#include "Stack.h"


void Stack::Push(int element)
{
	if (idx > 29)
	{
		cout << "Out of Range!" << endl;
	}
	else 
	{
		array[idx] = element;
		idx++;
	}
	
}

void Stack::Pop()
{
	if (idx < 0)
	{
		cout << "Out of Range!" << endl;
	}
	else
	{
		array[idx] = NULL;
		idx--;
	}
	
}

void Stack::Print()
{
	for (int i = 0; i < idx; i++)
	{
		cout << "array"<<i<<"idx : " << array[i] << endl;
	}
	cout << "End array" << endl;
}

void Stack::IsFull()
{
	if (idx == 29)
	{
		cout << "array is full!" << endl;
	}
	else
	{
		cout << "array is not full" << endl;
		cout << "Current Max idx is " << idx << endl;
	}
}

void Stack::IsEmpty()
{
	if (idx == 0)
	{
		cout << "array is empty!" << endl;
	}
	else
	{
		cout << "array is not empty" << endl;
		cout << "Current idx is " << idx << endl;
	}
}
