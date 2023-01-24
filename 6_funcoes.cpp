#include<iostream>
using namespace std;

/*funcoes tambem sao exatamente iguais a programacao em C, porem, com algumas melhorias*/

int soma(int num1, int num2){return num1 + num2;}
void soma(){cout<<15+37<<endl;}             /*podemos escrever duas funcoes com o mesmo nome e argumentos diferentes que ela funcionara, */
                                            /*so nao eh recomendado pois pode acabar causando confusao*/

void escreve(int num1=69){cout<<num1<<endl;}     /*igualar o valor do argumento de uma funcao da a possibilidade de omitir o argumento
                                                ou seja, se nao for passado nenhum argumento para a respectiva funcao, ela tera um valor default 
                                                e funcionara normalmente com ela*/  
void recursiva(int zero)
{
    if(zero==100){return;}
    cout<<zero<<endl;
    recursiva(++zero);
}


int main(void)
{
    escreve();
    escreve(soma(15,23));
    cout<<endl;
    recursiva(50);

    return 0;
}

