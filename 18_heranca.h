#include<iostream>
using namespace std;

#ifndef HERANCA_H_INCLUDED
#define HERANCA_H_INCLUDED

class Veiculo{                                  /*primeiro nos criamos a classe pai normalmente, com suas funcoes e propriedades publicas e privadas*/
    public:
            int vel, rodas, blind;
            void setTipo(int tp);
            void setVelMax(int vm);
            void setArma(bool ar);
            void imprime();
    private:
            int tipo, velMax;
            bool arma;  /*tem ou nao tem arma*/
};

    void Veiculo::setTipo(int tp){
            tipo=tp;
    }

    void Veiculo::setVelMax(int vm){
        velMax=vm;
    }

    void Veiculo::setArma(bool ar){
        arma = ar;
    }

    void Veiculo::imprime(){
        cout<<"Tipo de Veiculo: "<<tipo<<endl;
        cout<<"Velocidade Maxima: "<<velMax<<endl;
        cout<<"qntd de rodas: "<<rodas<<endl;
        cout<<"blindagem: "<<blind<<endl;
        cout<<"armamento: "<<arma<<endl;
        cout<<"------------------------------------"<<endl<<endl;

    }



class Moto:public Veiculo{      /*uma classe filha herda as propriedades publicas de uma classe pai, nesse caso, a classe Moto criada eh a classe filha e herda todas as propriedades publicas da classe pai*/
    public:                     /*perceba que as propriedades privadas tambem sao herdadas, porem nao temos acesso a elas, podendo acessa-las somente pelas funcoes de get e set*/
        Moto();
    private:

};

    Moto::Moto(){
        vel=0;
        blind=0;
        rodas=2;
        setTipo(1);
        setVelMax(120);
        setArma(0);
    }





class Carro:public Veiculo{
    public:
        Carro();
    private:
};

Carro::Carro()
{
    vel=0;
    blind=25;
    rodas=4;
    setTipo(2);
    setVelMax(240);
    setArma(0);
}


#endif //HERANCA_H_INCLUDED