/* 3: Escribir un programa que reciba una serie de carácteres como argumentos. El programa deberá concatenarlos y dar la vuelta a la cadena resultante.
La cadena que almacena la concatenación de los argumentos debe utilizar la memoria justa y necesaria.*/ 

#include <string.h>
#include <stdio.h>

    void conc (char completext[], char s1 [], char s2[])
    int main (void)
    {
        char completext[100];
        char s1[] = "Hoy tendremos examen de programación", s2[] = "Sobre arrays y funciones";

            strcat (completext, s1)
            strcat (completext, "");
            strcat (completext, s2);

        printf ("%s", completext);
        
        return 0

    }
    void conc (char completext[], char s1[], char s2[])
    {

            strcat (completext, "");
            strcat (completext, s1);
    }
        