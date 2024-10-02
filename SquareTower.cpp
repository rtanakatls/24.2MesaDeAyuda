
#include <iostream>
#include <conio.h>


int leer_n2()
{
    while (true)
    {
        int value = 0;
        std::cout << "Ingrese un número: ";
        std::cin >> value;

        if (value >= 1 && value <= 5)
        {
            return value;
        }
    }

}
void draw_columns(int i, int identificador)
{
    //este for se encarga de dibujar una línea de 4 elementos
    for (int j = 1; j <= 4; j++)
    {
        if ((j > 1 && j < 4 && i>1 && i < 5) || identificador == -1)
        {
            std::cout << " ";
        }
        else
        {
            std::cout << identificador;
        }
    }
}

void dibujar_cuadrado2(int identificador, bool isMiddle)
{
    //este for se encarga de dibujar cada línea de la figura
    for (int i = 1; i <= 5; i++)
    {
        //este for se encarga de dibujar 4 líneas de 4 figuras
        for (int j = 1; j <= 4; j++)
        {
            if (isMiddle && j > 1 && j < 4)
            {
                draw_columns(i, -1);
            }
            else
            {
                draw_columns(i, identificador);
            }
        }
       
        std::cout << "\n";
    }
}

int main()
{
    while (true)
    {
        int n = leer_n2();
        //este for te dibuja cada línea de figuras
        for (int i = n; i >= 1; i--)
        {
            if (i == n || i == 1)
            {
                dibujar_cuadrado2(i, false);
            }
            else
            {
                dibujar_cuadrado2(i, true);
            }
        }
    }
}