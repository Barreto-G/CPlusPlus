#include<iostream>
#include"18_heranca.h"

using namespace std;

int main(){
    Moto *motoca = new Moto();          /*perceba que podemos criar varias classes diferentes herdando as propriedades do mesmo pai*/
    Carro *possante = new Carro();
    motoca->imprime();
    possante->imprime();



    return 0;
}