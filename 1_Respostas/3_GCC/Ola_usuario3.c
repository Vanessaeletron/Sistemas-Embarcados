#include <stdio.h>
#include <stdlib.h>

int i;
int main (int argc, const char *argv[ ]){
printf("Olá %s \n", argv[1]);
printf("Nº de argumentos: %d \n", argc);
for (i=1; i<argc, i++);{
printf ("%s", argv[i]);}
return 0;
}
