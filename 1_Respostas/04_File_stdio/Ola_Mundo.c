#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
    FILE *fp; 
    fp  = fopen ("ola_mundo.txt", "w"); 
    if(!fp){
        printf("Não foi possivel abrir o arquivo! \n");
    }

    fprintf(fp,"Ola mundo!"); 

    fclose(fp);

    return 0;
}
