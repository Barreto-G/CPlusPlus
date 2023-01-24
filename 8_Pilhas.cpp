#include<iostream>
#include<stack>     /*se trata de uma biblioteca com todas as funcoes referentes a pilha*/

using namespace std;

/*A logica da pilha eh a mesma para todos os casos, o ultimo elemento se torna o topo, e eh sempre o primeiro a ser retirado*/


int main(void)
{  
    stack <string> cartas;              /*para criar uma pilha, digita-se stack <tipo de pilha> nome da pilha; */
    
    cartas.push("2 de paus");           /*funcao push da biblioteca stack*/
    cartas.push("7 de copas");
    cartas.push("rei preto");
    cartas.push("novinha de ouro");

    cout<< cartas.size()<<endl;

    cartas.pop();                       /*funcao pop retira o ultimo elemento adicionado, o elemento do topo*/
    cout<< cartas.size()<<endl;         /* pilha.size() retorna o numero de elementos na pilha*/

    cout<< cartas.top()<< endl;         /*imprime o elemento no topo da pilha, sem retira-lo*/

    while(!cartas.empty())              /* pilha.empty() retorna 1 se a pilha estiver vazia e 0 se nao estiver*/
    {cartas.pop();}          

    if(cartas.empty()){cout<<"Pilha Vazia";}
    else{cartas.top();}





    return 0;
}