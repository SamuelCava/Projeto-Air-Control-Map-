#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct{
    char nome[20];
    int coodX;
    int coodY;
}cidades_marcadas;

void convert_mai(char s1[], char s2[]){

    int i = 0;
    while (s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0';

    return;
}//funcao convert_mai


int main(){

    char capitais[4][20] = {{"SAOPAULO"}, {"RIODEJANEIRO"}, {"BELOHORIZONTE"}, {"CURITIBA"}};

    cidades_marcadas cidade[2];
    char str_mai[2][20];
    int c = 0;
    int res;

    printf("Iniciando sistema de rotas entre capitais brasileiras...\n");

    printf("Porfavor responda as perguntas a seguir para desenharmos o seu trajeto.\n");
    printf("Qual a capital de partida: ");
    fgets(cidade[0].nome, 19, stdin);
    cidade[0].nome[strcspn(cidade[0].nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    convert_mai(cidade[c].nome, str_mai[c]);

    for (int i = 0; i < 4; i++){
        res = strcmp(str_mai[c], capitais[i]);
        if(res == 0){
            printf("Partindo de %s\n", str_mai[c]);
            cidade[0].coodX = 75;
            cidade[0].coodY = 30;
            res = 1;
        }
    }//for achar no enum
    c++;
    

    printf("Qual a cidade de chegada: ");
    fgets(cidade[1].nome, 19, stdin);
    cidade[1].nome[strcspn(cidade[1].nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    convert_mai(cidade[c].nome, str_mai[c]);

    for (int i = 0; i < 4; i++){
        res = strcmp(str_mai[c], capitais[i]);
        if(res == 0){
            printf("Chegando em  %s\n", str_mai[c]);
            cidade[0].coodX = 75;
            cidade[0].coodY = 30;
            res = 1;
        }
    }//for achar no enum
    c++;

    return 0;
}//main