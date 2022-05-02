#pragma once
class listElements
{
private:
	int value;
	listElements* prevElement;
	listElements* nextElement;
public:
	listElements();
	int GetValue();
	void SetValue(int value);
	void SetPrevElement(listElements* prev);
	void SetNextElement(listElements* next);
	listElements* GetPrevElement();
	listElements* GetNextElement();
};

