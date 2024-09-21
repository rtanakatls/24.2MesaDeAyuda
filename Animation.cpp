// MesaDeAyuda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>


using namespace std;

void wait()
{
    for (int i = 0; i < 100000000; i++)
    {

    }
}

void show_character(int x,int y)
{
    for (int i = 1; i <= y; i++)
    {
		std::cout << "\n";
	}
    for (int i = 1; i <= x; i++)
    {
		std::cout << " ";
	}
    std::cout << "@";
}

void draw_right(int level) 
{
    int temporal_level = level;
    if (level <= 1) 
    {
        temporal_level= 0;
    }
    for (int i = 1+(temporal_level* 3); i <= 50-(level*3); i++)
    {
		show_character(i, level*3);
		wait();
        system("cls");
	}
}

void draw_left(int level)
{
    for (int i = 50 - (level * 3); i >= 1 + (level * 3); i--)
    {
        show_character(i, 20 - (level * 3));
        wait();
        system("cls");
    }
}

void draw_down(int level)
{
    for (int i = 1 + (level * 3); i <= 20 - (level * 3); i++)
    {
        show_character(50 - (level * 3), i);
        wait();
        system("cls");
    }
}
void draw_up(int level)
{
    for (int i = 20 - (level * 3); i >= 1 + ((1+level) * 3); i--)
    {
        show_character(1 + (level * 3), i);
        wait();
        system("cls");
    }
}

void execute()
{
    for (int i = 0; i <= 3; i++)
    {
        draw_right(i);
        draw_down(i);
        draw_left(i);
        draw_up(i);
    }
}



int main2()
{
    execute();
    return 0;
}
