#include <iostream>
#include "16_2_Classe.h"

using namespace std;

/*Esse arquivo contem exatamento o conteudo do arquivo 15, porem, declaramos a classe em um arquivo externo e o adicionamos 
    como uma biblioteca separada*/


int main()
{
    Aviao *av1 = new Aviao(1);      /*como a funcao de inicilizacao eh a mesma que a do nome da classe, ja passamos seu argumento na hora de inicializarmos*/
    Aviao *av2 = new Aviao(3);

    av1->imprimir();
    av2->imprimir();


    return 0;
}