#include<iostream>

using namespace std;

typedef struct Carro{           /*declaracao de structs tbm eh igual ao C*/
    string nome, cor;
    int pot, velMax, vel;

    void insere(string stnome, string stcor, int stpot, int stvel)          /*Podemos tambem criar funcoes dentro da struct para facilitar a escrita e a forma como chamamos no codigo main*/
    {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvel;
        vel=0;
    }

    void mostra()
    {
        cout<<"Nome do carro: "<< nome <<endl; 
        cout<<"cor do carro: "<< cor <<endl; 
        cout<<"Potencia do carro: "<< pot <<" cavalos"<<endl; 
        cout<<"Velocidade Maxima: "<<velMax <<"km/h." <<endl;
        cout<<"Velocidade atual: "<<vel <<"km/h." <<endl<<endl;
        
    }

    void mudaVel(int novaVel)
    {
        vel = novaVel;
         if(vel>velMax){vel = velMax;}
         if(vel<0){vel=0;}
    }

}Carro;

int main()
{
    Carro fusca, chevete;
    fusca.cor = "azul";
    fusca.nome = "baboubi";
    fusca.pot = 1;
    fusca.velMax = 5;
    fusca.vel=0;

    chevete.insere("possant","verdao",24,666);
    //chevete.mostra();
    //fusca.mostra();

    Carro listadecarros[3];
    listadecarros[0].insere("guri", "roxo", 69, 120);
    listadecarros[1].insere("possant","verdao",24,666);
    listadecarros[2].insere("baboubi", "amarelo", 700, 1200);

    for(int i=0; i<3;i++)
    {
        listadecarros[i].mostra();
    }

    return 0;
}