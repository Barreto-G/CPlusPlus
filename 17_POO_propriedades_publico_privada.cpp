#include<iostream>
#include"17_2_Classe.h"

using namespace std;


int main()
{

   Veiculo *carro = new Veiculo(1);
    //carro->velMax = 300;            /*perceba que propriedades publicas podem ser modificadas a qualquer hora, se eu nao quiser que isso aconteca, devo passar a propriedade para o campo privado*/
   // cout<<carro->velMax;
    carro->getVelMax();               /*ao usarmos uma funcao get, podemos ver a informacao privada sem altera-la*/

    //carro->setVelMax(450);            /*com uma funcao set, podemos alterar a propriedade de acordo com a funcao preestabelecida, isso permite controlar os parametros de alteracao da propriedade privada, dando liberdade para o usuario altera-la com um determinado nivel de restricao*/
    /*perceba que como a funcao acima foi passada para o escopo primario da classe, o objeto deixa de ter acesso direto a ele*/
    carro->setLigado(1);
    cout<<carro->getLigado();









    
    return 0;
}