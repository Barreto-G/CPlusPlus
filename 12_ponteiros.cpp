#include<iostream>

using namespace std;
/*ponteiros tem a mesma sintaxe que no C*/
/*ponteiros sao importantes pois possibilitam modificar uma certa variavel independente do escopo da mesma*/

void inverte(int *ponteiro)
{
    *ponteiro = 69;
}

int main()
{
    string nome = "vacalo";
    string *ponteiro;       /*um ponteiro deve ser do mesmo tipo da variavel a que ele vai apontar*/

    ponteiro = &nome;
    cout<<"Endereco: "<< ponteiro<<". Conteudo: "<< *ponteiro<<endl;

    *ponteiro = "moto";     /*no endereco apontado por ponteiro, adicione o valor moto*/
    cout<<"Endereco: "<< ponteiro<<". Conteudo: "<< *ponteiro<<endl;

    int vetor[10] = {1,2,3,4,5,6,7,8,9};
    int *pont;
    pont = vetor;   /*um vetor na vdd ja eh um ponteiro para informacoes sequenciais, portanto ao fazer essa igualdade, pont ira apontar para o primeiro elemento do vetor*/

    *(pont+=1);     /*essa eh uma forma de fazer um ponteiro se mover pelos enderecos de um vetor, como o ponteiro ja eh do tipo int, ao fazer isso ele apontara para o endereco de memoria 4 bytes distantes do valor anterior*/
    *pont = 25;

    *(pont+=5);
    *pont = 76;


    for(int i=0;i<10;i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

    /*--------------------------------------------------*/
    /*ponteiros em funcoes*/

    pont = vetor; /*volta o ponteiro pro comeco do vetor*/

    for(int i=0;i<10;i++)
    {
        inverte(pont);
        pont++;
    }
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

    /*--------------------------------------------------*/

}