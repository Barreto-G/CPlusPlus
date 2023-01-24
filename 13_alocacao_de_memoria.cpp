#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  /*o malloc pertence a biblioteca stdlib.h*/

using namespace std;

int main()
{
    //char vnome[50];

    //gets(vnome);    /*uma das limitacoes do uso de cin eh que a funcao toma o espaco como um caracter finalizador, portanto, ao salvar uma frase ou um nome e sobrenome ela nao eh util*/
                    /*a funcao gets, ou get string, da biblioteca stdio.h le todo o conteudo digitado ate que um enter seja digitado*/
    
    char *nome;     /*para alocarmos dinamicamente um tamanho, declaramos primeiro um ponteiro do tipo de elemento*/
    nome = (char *)malloc(sizeof(char)+1); /*como malloc eh do tipo void, fazemos um tape cast para converter o seu retorno ao tipo char utilizando (char *)*/
    
    /*esse exemplo de alocacao nao esta certa, porem foi o usado em aula*/
    /*eu do futuro!! nao faca isso*/

    gets(nome);

    cout << nome;


    free(nome);
    return 0;


    /*O printf e scanf tambem podem ser utilizados no C++ adicionando as bibliotecas necessarias, sua utilizacao eh igual ao C*/
}