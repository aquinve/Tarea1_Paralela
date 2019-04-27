
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char* argv[], char* env[]){
    char op[10];
    FILE* fp;
    fp = fopen("/var/tmp/VarEntorno.txt","a");
    int i;
    for(i=0;env[i]!=NULL;i++){
    fprintf (fp,"%s\n",env[i]);
    }
    fclose(fp);
    char command[50];
    strcpy( command, "nano /var/tmp/VarEntorno.txt" );
    printf("Txt con las variables de entorno listas en /var/tmp. Desea abrirlo? [y/n]");
    scanf("%s",op);
    if(strcmp(op,"y")==0){
    system(command);}
    else
    return 0;
}
