#include<iostream>
#include<list>

using namespace std;

void imprime(list<int>lista)
{   
    if(lista.empty()){cout<<"lista vazia."<<endl; return;}
     cout << "lista =";
        for (auto c : lista)
            cout << " " << c;
        cout << endl;
}


int main()
{

    list<int> aula(10);     /*ao inicializar a lista desse modo, restringimos o total de elementos nela a 50*/
    list<int> cavalo(5,50); /*Adicionando esse segundo elementos entre parenteses, iniciamos todas as posicoes com o valor especificado, nesse caso, as 5 posicoes da lista terao o valor 50*/

    list <int> aula1, aula2; /*podemos declarar varias variaveis do mesmo tipo de uma vez, assim como acontece com variaveis normais, int, char, etc*/

    /*O diferencial da lista eh ter as funcoes push-back e push-front, onde podemos adicionar valores tanto no comeco como no fim da lista da forma como quisermos*/

    /*Do mesmo modo que podemos inserir na frente e atras, podemos dar pop_back e pop_front, alem de poder imprimir os elementos na frente com front e no fim com back */
    for(int i=0; i<10;i++)
    {
        aula.push_front(i);
        aula1.push_back(i);
    }

    for(int i=0; i<10;i++)
    {
        cout<< aula.front()<<" ";
        aula.pop_front();
    }

    cout<<endl;
    for(int i=0; i<10;i++)
    {
        cout<< aula1.front()<<" ";
        aula1.pop_front();
    }
    cout<<endl;

    /*Podemos tambem inserir elementos no meio da lista, apesar de ser um pouco mais trabalhoso, eh possivel*/

    list<int>::iterator iter; 
    list <int> c1, c2;

    c1.push_back(10);
    c1.push_back(20);
    c1.push_back(30);
    c2.push_back(10);
    c2.push_back(20);
    c2.push_back(30);

    iter = c1.begin();              /*o iterator trata da posicao em que estaremos na fila, nesse caso, marcamos como o inicio da mesma*/
    iter++;                         /*faz o iterador anda uma casa*/
    imprime(c1);

    c1.insert(iter, 100);   /*esse comando insere na lista especificada o valor passado como segundo argumento, na posicao especificada, neste caso, pelo iterador*/
                            /*no entanto, a posicao tambem pode ser colocada de forma direta por lista.begin() ou lista.end()*/
    imprime(c1);

    iter = c1.begin();
    iter++; iter++;
    
    c1.insert(iter, 2, 200);    /*nesse caso, o numero 200 eh inserido duas vezes a partir da posicao especificada*/
    imprime(c1);

    c1.sort();                  /*Esta funcao ordena os elementos em uma lista, caso ela seja do tipo inteiro*/
    imprime(c1);

    c1.reverse();               /*inverte os elementos da lista*/
    imprime(c1);


    /*assim como o comando insert, temos um comando para excluir um elemento aleatorio da lista: o erase*/
    iter = c1.begin();
    advance(iter, 4); /*avanca o iterador em 4 posicoes, lembrando que em begin ele ja esta na primeira posicao, portanto avancar 4 casas faz ele parar no 5 elemento*/

    c1.erase(iter);
    imprime(c1);

    //c1.clear(); /*limpa toda a lista*/

    c1.merge(c2);       /*transfere todos os valores da lista dentro do parenteses para o comeco da lista c1*/
    imprime(c1);        /*perceba que os valores sao transferidos e nao copiados, portanto, a lista c2 fica vazia*/
    imprime(c2);

    return 0;
}