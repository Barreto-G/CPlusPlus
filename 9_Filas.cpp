#include<iostream>
#include<queue>

using namespace std;

/*  Como sempre, o primeiro elemento a entrar eh o primeiro a sair, assim como uma fila na vida real*/

/*  A unica diferenca de comandos para a biblioteca da pilha, eh que inves de pilha.top(), temos o fila.front() para acessarmos o primeiro termo da fila.
    Alem disso, ainda podemos ver o ultimo elemento inserido na fila utilizando o fila.back() */


int main()
{
    queue <int> fila;

    fila.push(69);
    fila.push(71);
    fila.push(63);
    fila.push(47);
    fila.push(51);

    cout << "Tamanho da Fila: " << fila.size() << endl;
    cout << "Ultimo elemento da Fila: " << fila.back()<<endl;
    cout << "Primeiro elemento da Fila: " << fila.front()<<endl;

    while(!fila.empty())
    {
        cout<<fila.front()<< " ";
        fila.pop();
    }




    return 0;
}