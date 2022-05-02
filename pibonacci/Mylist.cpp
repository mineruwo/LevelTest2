#include "Mylist.h"

void Mylist::insert(listElements* element)
{
	if (currElement == nullptr)
	{
		currElement = element;
	}
	else if (currElement->GetNextElement() == nullptr)
	{
		currElement->SetNextElement(element);
		element->SetPrevElement(currElement);

		currElement = element;
	}
	else
	{
		listElements* temp = currElement->GetNextElement();
		currElement->SetNextElement(element);
		element->SetNextElement(temp);
		element->SetPrevElement(currElement);
		temp->SetPrevElement(element);
		currElement = temp;
	}
}

void Mylist::pop(listElements* element)
{
	if (currElement->GetNextElement() == nullptr && currElement->GetPrevElement() == nullptr)
	{
		currElement == nullptr;
	}
	else
	{
		currElement->GetPrevElement()->
			SetNextElement(currElement->GetNextElement());

		currElement->GetNextElement()->
			SetPrevElement(currElement->GetPrevElement());

		currElement = currElement->GetPrevElement();
	}
}

void Mylist::print()
{
	while (true)
	{
		if (currElement->GetPrevElement() == nullptr)
		{
			break;
		}

		currElement = currElement->GetPrevElement();
	}

	while (true)
	{
		if (currElement->GetNextElement() == nullptr)
		{
			std::cout << currElement->GetValue() << std::endl;
			break;
		}

		std::cout << currElement->GetValue() << std::endl;
	}
}
