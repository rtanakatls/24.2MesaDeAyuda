
#include <iostream>
#include <conio.h>


void draw_line(int current_number, int total)
{
	int value = 1;

	for (int i = 1; i <= (total * 2) - 1; i++)
	{
		if (i <= total - current_number || value > current_number * 2 - 1)
		{
			std::cout << " ";
		}
		else
		{
			std::cout << value;
			value++;
		}
	}
}

void solve(int n)
{

	for (int i = 1; i <= n; i++)
	{
		draw_line(i, n);
		std::cout << "\n";
	}
	for (int i = n-1; i >= 1; i--)
	{
		draw_line(i, n);
		std::cout << "\n";
	}
}


int main()
{
	solve(5);

}