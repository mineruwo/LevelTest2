#include <iostream>

using namespace std;

int pibonaccis(int count)
	{
	if (count <= 1)
	{
		return count;
	}

	return pibonaccis(count - 1)+ pibonaccis(count-2);
}

int hanoi(int count)
{
	//2^n + 1

	return count * count + 1;
}


int main()
{
	int count = 10;

	cout<<pibonaccis(count);
}