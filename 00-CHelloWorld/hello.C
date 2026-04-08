#include <stdio.h>

int main() {

    printf("Hello world\n");

    FILE *salida;
    salida=fopen("output.txt","w");

    fprintf(salida,"Hello World");

    fclose(salida);

    return 0;
}
