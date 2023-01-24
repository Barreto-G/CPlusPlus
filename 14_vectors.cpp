#include<iostream>
#include<vector> /*biblioteca onde esta a estrutura de vector*/
using namespace std;

/*Vectors sao uma estrutura que se assemelha aos vetores, mas de uma forma mais modernizada e facil de trabalhar*/

void imprime(vector <int> vetor){
    cout<<"Vector: ";
    for(int i=0; i<vetor.size();i++)
    {
        cout<< vetor[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    vector<int> num; /*forma de se declarar um vector de int, note que nao eh necessario especificar o tamanho, ja que a memoria eh alocada dinamicamente*/

    int tam, i;

    num.push_back(10); /*insere no final do vector o valor*/
    num.push_back(5);
    num.push_back(13);
    num.push_back(1);

    tam = num.size(); /*retorna o tamanho do vetor*/

    imprime(num);

    //num.pop_back();     /*remove o ultimo elemento do vetor*/
    
    vector <int> num1;

    num1.push_back(69);
    num1.push_back(73);
    num1.push_back(43);

    //num.swap(num1);     /*troca todos os valores de num pelos de num1*/
    
    cout<<"Primeiro valor de num: "<< num.front()<<". Ultimo elemento de num: "<<num.back()<<endl;
    cout<<"Elemento do meio de num: "<< num.at(num.size()/2)<<endl<<endl;       /*num.at() nos permite adquirir o valor de uma posicao qualquer do vector*/

    num.insert(num.begin()+1, 133); /*insere o valor na posicao especificada, podendo ser representada por um iterator ou feita de forma direta como no exemplo*/
    num.insert(num.end(), 144);     /*uma forma de inserir no final, ou utilizando o final como ponto de referencia*/
    imprime(num);

    num.erase(num.begin()+1);       /*apaga um valor do vector na posicao apontada*/
    imprime(num);

    num.pop_back(); /*retira o ultimo elemento do vector*/
    num.clear();    /*limpa todo o vector*/
    bool vazio = num.empty();    /*retorna 1 se o vector estiver vazio*/

    
    return 0;
}