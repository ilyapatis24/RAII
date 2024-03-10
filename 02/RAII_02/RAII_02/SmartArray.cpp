#include "SmartArray.h"

SmartArray::SmartArray(const size_t size) {
	sizeOfArray_ = size;
	sm_array_ = new int[size] {};
}

SmartArray::~SmartArray() {
	delete[] sm_array_;
}

SmartArray::SmartArray(const SmartArray& other) {
	this->sizeOfArray_ = other.sizeOfArray_;
	this->countForOverflow_ = other.countForOverflow_;
	sm_array_ = new int[other.sizeOfArray_];
	for (int i = 0; i < other.sizeOfArray_; i++)
	{
		this->sm_array_[i] = other.sm_array_[i];
	}
	std::cout << std::endl;
}

SmartArray& SmartArray::operator=(const SmartArray& other) {
	if (this != &other) {
		delete[] sm_array_;
		this->sizeOfArray_ = other.sizeOfArray_;
		this->countForOverflow_ = other.countForOverflow_;
		
		sm_array_ = new int[other.sizeOfArray_];
		for (int i = 0; i < other.sizeOfArray_; i++)
		{
			this->sm_array_[i] = other.sm_array_[i];
		}
		std::cout << std::endl;
	}
	return *this;
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
	sm_array_[countForOverflow_++] = value;
};

int SmartArray::getElement(const size_t index)
{
	if ((index >= sizeOfArray_) || (index < 0))
	{
		throw std::out_of_range("The getting element is out of array range");
	}
	return sm_array_[index];
};