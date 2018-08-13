#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[30];
    int valor;

    printf("Bienvenido al terminal simple!\n");
    printf("ingresa tu usuario y procedamos...\n");
    scanf("%s", usuario);
    
    if(strcmp(usuario,"pablo") == 0)
    {
        printf("¿Que quieres hacer?\n");
        printf("ingresa un valor: 1 leer las noticias,\n 2 escuchar musica,\n 3 chatear.\n");

        scanf("%d", &valor);
            if(valor == 1)
                printf("Haz seleccionado leer las noticias, bienvenido!\n link: http://www.ellanquihue.cl/\n");
            else if(valor == 2)
                printf("Haz seleccionado escuchar musica\n");
            else if(valor == 3)
                printf("Haz seleccionado chatear\n");
            else
                printf("Adios que te vaya bien!");    
    }

}