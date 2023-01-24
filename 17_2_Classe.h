#include <iostream>

using namespace std;

#ifndef CLASSEVEICULO_H_INCLUDED
#define CLASSEVEICULO_H_INCLUDED

class Veiculo
{
    public:
        int tipo;
        void getVelMax();   /*funcoes get servem para nos retornarem informacoes de dentro da classe privada, isso possibilita ao usuario ver a informacao, mas nao modifica-la*/
        //void setVelMax(int nvel); /*funcoes set permitem alterar uma determinada propriedade privada por meio de uma funcao*/
        bool getLigado();
        void setLigado(bool l);
        Veiculo(int tp); 
        

    private:            /*Nas propriedades privadas, o objeto nao tera acesso direto a essas informacoes, portanto para manipula-las deve haver alguma funcao que o faca*/
        int vel, velMax;
        bool ligado;
        string nome;
        void setVelMax(int nvel);   /*declarando setVelMax na area privada da classe, faz com que o usuario nao tenha acesso a ela, so podendo ser chamada por outras funcoes dentro da classe*/

};

    Veiculo::Veiculo(int tp)
    {
        tipo=tp;
        ligado=0;vel-0;
        switch (tipo)
        {
            case 1:
                nome = "Carro";
                velMax=200;
                break;

            case 2:
                nome = "Aviao";
                velMax=800;
                break;

            case 3:
                nome = "Navio";
                velMax=120;
                break;

            default:
                break;
        }
    }

    void Veiculo::getVelMax()
    {
        cout<<"Velocidade Maxima: "<< velMax<<endl;

    }

    void Veiculo::setVelMax(int nvel){
        velMax = nvel;
    }

    bool Veiculo::getLigado(){
        return ligado;
    }

    void Veiculo::setLigado(bool l){
        if(l==1){ligado=true;}
        else if(l==0){ligado=false;}
    }




#endif /*CLASSEVEICULO_H_INCLUDED*/