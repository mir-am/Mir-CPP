/*
Mir's C++ Training Program
Developer: Mir, A.
July 30, 2018

This Visual Studio project is created for educational purpose.
*/

#include <iostream>
#include <vector>

void myFunction(int a)
{
	std::cout << "Hello from my Function, Value: " << a << std::endl;
}

void printValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

void forEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}


int main()
{

	// A function pointer
	typedef void(*funcPointer)(int);

	//auto function = myFunction;
	//function(8);

	funcPointer func = myFunction;
	func(8);
	func(8);

	// A practical example of function pointers
	std::vector<int> vec = { 1, 5, 10, 14, 11 };
	forEach(vec, printValue);
	// A lambda
	forEach(vec, [](int value) {std::cout << "Value: " << value << std::endl; });

	std::cin.get();

	return 0;
}