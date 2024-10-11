
#include <iostream>
#include <conio.h>
struct list
{
	int value;
	list* next;
};

void increase_value(int& john, int& pepito)
{
	john+=20;
	pepito+=10;

}


int main5()
{
	
	int a = 10;
	int b = 20;

	std::cout << "a: " << a << " b: " << b << "\n";

	increase_value(a, b);
	


	std::cout << "a: " << a << " b: " << b;
	return 0;
}