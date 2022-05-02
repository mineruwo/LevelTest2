#include "listElements.h"

listElements::listElements()
{
    prevElement = nullptr;
    nextElement = nullptr;
}

int listElements::GetValue()
{
    return value;
}

void listElements::SetValue(int value)
{
    this->value = value;
}

void listElements::SetPrevElement(listElements* prev)
{
    prevElement = prev;
}

void listElements::SetNextElement(listElements* next)
{
    nextElement = next;
}

listElements* listElements::GetPrevElement()
{
    return prevElement;
}

listElements* listElements::GetNextElement()
{
    return nextElement;
}
