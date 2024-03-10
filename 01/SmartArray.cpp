#include "SmartArray.h"

SmartArray::SmartArray(const size_t size) {
	sizeOfArray_ = size;
	sm_array_ = new int[size] {};
	for (int i = 0; i < sizeOfArray_; i++)
	{
		sm_array_[i] = i;
	}
	std::cout << std::endl;
}

SmartArray::~SmartArray() {
	delete[] sm_array_;
}

void SmartArray::printSmartArray()
{
	for (int i = 0; i < sizeOfArray_; i++)
		std::cout << sm_array_[i] << " ";

	std::cout << std::endl;
};

void SmartArray::addElement(const int value)
{
	if (countForOverflow_ >= sizeOfArray_)
	{
		throw std::out_of_range("Size of array is smaller");
	}
	else
	{
		sm_array_[countForOverflow_] = value;
		++countForOverflow_;
	}
};

int SmartArray::getElement(const size_t index)
{
	if ((index >= sizeOfArray_) || (index < 0))
	{
		throw std::out_of_range("The getting element is out of array range");
	}
	else
	{
		return sm_array_[index];
	}
};