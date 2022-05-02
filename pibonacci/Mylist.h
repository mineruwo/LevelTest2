#pragma once
#include <iostream>
#include "listElements.h"
class Mylist
{
private:
	listElements* currElement;
public:
	void insert(listElements* element);
	void pop(listElements* element);
	void print();
};

