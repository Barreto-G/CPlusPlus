#include <iostream>
#include <cstdlib>
using namespace std;



int main()
{
    /*a logica de if/else segue sempre a mesma logica independente da linguagem, o que poderia mudar eh somente a forma da escrita, 
    nesse caso, eh igual ao C*/
    int num=0;
    

    while(num != -1)
    {
        cout<< "Digite um numero: ";
        cin>> num;
        if(num==-1){break;}
        if(num > 10)
            {
                cout<< num<< " eh maior que 10"<<endl;
            }
            else
            {
                cout<< num<< " eh menor ou igual a 10."<< endl;
            }
    }
    
    /*o comando goto tambem eh aplicavel em C++, porem nao eh recomendado por ser muito instavel*/

    /*----------------------------------------------------------------------------------------------------*/


    /*Operadores AND, OR e NOT sao iguais ao C
            o operador OR em C e C++ eh ||, porem em C++ tambem podemos usar 'or'
            o operador AND em C e em C++ sao iguais: &&
            o operador NOT em C e em C++ sao: !
    */

   system("cls"); /*comando clearscreen, para limpar a tela, incluso na biblioteca cstdlib*/

    /*----------------------------------------------------------------------------------------------------*/

    /*Operadores ternarios tratam de uma forma mais simplificada de se fazer uma verificacao, eh como se fosse um if mais compacto,
      no entanto, sua resposta tbm eh mais compacta, limitando as operacoes que podemos fazer apos a verificacao*/

      int nota=0;
      string res;


      cout<< "Digite sua nota: ";
      cin>> nota;
      (nota >= 60) ? res="aprovado" : res="reprovado";  /*a verificacao feita fica entre parenteses, seguida por uma interrogacao,
                                                            na frente eh colocado o que fazer se a verificacao eh verdadeira, seguido por
                                                            dois pontos e o que fazer se for falso*/

    cout << "situacao do aluno: "<< res <<endl;

    /*esse tipo de operacao tbm eh muito mais rapida para o processador fazer, sendo uma boa opcao para verificacoes rapidas e de saida simples*/

    /*tambem podemos escrever a verificacao de outra forma:
        res = (nota <=60) ? "aprovado" : "reprovado"  */


    /*outra aplicacao eh usar o operador ternario para fazer operacoes de incremento e decremento de uma variavel */
    nota = (nota<10) ? nota*=10 : nota/=10;
    cout << "sua nova nota eh " << nota <<endl;

    /*----------------------------------------------------------------------------------------------------*/


    /*o Switch tem uma escrita praticamente igual ao C, porem com uma linha de comando adicional opicional, o default, que funciona como um else*/

    int animal=0;
    cout<<"Digite qual animal voce quer ser:"<< endl<< "[1]cavalo, [2]burro, [3]jumento "<<endl;
    cin>>animal;

    switch (animal) /*lembre que o switch so faz comparacoes constantes, nao de intervalos*/
    {
        case 1:
            cout<< "cavalo manco";
            break;
        case 2:
            cout<< "burro ";
            break;
        case 3:
            cout<< "jumento dms";
            break;
        default:
            cout<< "seu animal eh invalido";
            break;
    }
    cout<<endl;

    /*caso queiramos executar os mesmos comandos para dois casos, basta configurar da seguinte forma:

        case 1:
        case 2:
            (comandos)
            break;  
    
    ao entrar em case 1 ou case 2, o programa executara as mesmas operacoes*/

    /*outra coisa que podemos fazer eh colocar um switch dentro de outro, do tipo:
        switch(var)
        {
            case 1:
            case 2:
                switch(var)
                {
                    case 1:
                        comandos;
                        break;
                    case 2:
                        comandos
                        break;
                    default:
                        break;
                }
            default:
                break;
                    
        }
        */

    /*----------------------------------------------------------------------------------------------------*/
    
    /*O laco While tem a sintaxe exatamente igual ao C*/
    int num1=0;
    while(num1<=10)
    {
        cout << num1++ <<" "; 
    }
    cout<<endl;

    /*o laco Do-While eh uma variacao do While em que primeiro os comandos sao executados para depois a verificacao ser feita, de modo a realizar a operacao
    pelo menos uma vez. Esse laco tambem eh escrito da mesma forma que em C.*/

    /*----------------------------------------------------------------------------------------------------*/

    /*o laco FOR tambem tem a mesma sintaxe que a linguagem C, com o diferencial que podemos utilizar mais de uma variavel na declaracao do laco, a exemplo:

        for(x=0,y=0 ; x!=10 || y!=5; x++,y++)
        {
            comandos;
        }
    
    */

    return 0;
}