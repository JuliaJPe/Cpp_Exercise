#include <stdlib.h>
#include <stdio.h>

main(){

    FILE *arq;

    arq = fopen("alunos.txt", "r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        exit(0);
    }

    char nome[180];
    float n1, n2, n3, n4, media=0.0;

    while(!feof(arq)){
        fscanf(arq, "%s %f %f %f %f", nome, &n1, &n2, &n3, &n4);

        media = (n1+n2+n3+n4)/4;
        printf("%s %.1f\n", nome, media);
    }

    fclose(arq);
}