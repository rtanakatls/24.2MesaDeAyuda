
#include <iostream>
#include <conio.h>

int leer_n()
{
    while (true)
    {
        int value=0;
        std::cout << "Ingrese el valor de N:";
        std::cin >> value;

        if (value >= 3 && value <= 10)
        {
            return value;
        }
        else
        {
            std::cout << "ERROR: debe ingresar un valor entre 3 y 10";
        }
    }

}

void dibujar_cuadrado(int identificador, int espacios)
{
    //este for se encarga de dibujar las filas
    for (int i = 1; i <= 4; i++)
    {
        //este for se encarga de dibujar espacios a la izquierda
        for (int j = 1; j <= espacios; j++)
        {
            std::cout << " ";
        }

        //este for se encarga de dibujar las columnas
        for (int j = 1; j <= 4; j++)
        {
            if (i == 3 && j == 2)
            {
                std::cout << identificador;
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}

int main3()
{
    int value = leer_n();
    //este for indica los identificadores de los cuadrados
    for (int i = 1; i <= value; i++)
    {
        //este for indica la cantidad de cuadrados que se van a dibujar
        for (int j = 0; j < i; j++)
        {
            dibujar_cuadrado(i, j * 4);
        }
        std::cout << "\n";

    }

    return 0;
}
