#include <iostream>
using namespace std;

#define pi 3.1415 /*trata-se da declaracao de variaveis globais e constantes, em todo o programa a variavel 'pi' tera o mesmo valor*/ 
#define canal cout<<"canal doi dms\n";

int global1, global2; /*variavel global nao constante*/


int main()
{
    int numeros = 3, vidas=0; /*a declaracao de variaveis eh igual a declaracao em C*/

    char letras = 'z'; /*usa-se uma aspa para declarar char*/ 

    double decimal = 4.0005 ;
    float decimal2 = 4.0; /*o float eh menos preciso que o double, geralmente arredondando os resultados no final*/

    bool vivo; /*uma variavel booleana so tem duas possibilidades: true ou false*/

    string texto; /*temos um novo tipo de variavel, diferente do C, onde precisamos fazer um vetor de char para salvar palavras*/
                  /*uma variavel string nao eh limitada por um tamanho pre-determinado, como seria o caso de um vetor de char*/


    texto = "Dragon Ball Z";
    vivo = true;

    cout<< texto << endl;
    cout<< vivo << "\n";
    cout<< numeros << " " << letras << "\n"; /*diferentes formas de usar o cout e a quebra de linha*/

    cout<< "digite o numero de vidas" << endl;
    cin >> vidas; /*igual ao scanf em C*/
    cout<< "digite uma letra"<< endl;
    cin >> letras;

    cout<< vidas <<" "<< letras<< endl; /*quando formos alternar entre texto e variaveis, devemos sempre utilizar << para separa-los*/

    /*--------------------------------------------------------------*/

    /*para declarar multiplas variaveis de um mesmo tipo, escreve-se igualmente ao C*/
    int vidas1, tiros, life;

    char letra1 ='a', letra2 = 'b', letra3 = 'c';

    string nome = "Gabriel", sobrenome = "Barreto";

    cout<< nome <<" " << sobrenome << endl << pi << " ";
    canal;           /*mostrando as variaveis globais declaradas*/

    
    /*  A logica para variaveis globais e locais eh a mesma que a de C, declarar uma variavel no escopo de uma funcao faz com que ela esteja disponivel apenas no escopo
    da mesma, nao podendo ser acessadas fora dela. Variaveis globais sao aquelas definidas fora do escopo de qualquer funcao e podem ser utilizadas em 
    todo o programa, incluindo outros arquivos quando usamos o mesmo como biblioteca, atraves do comando include. 

        A diretiva #define nos da um tipo de variavel global constante, ou seja, que nao pode ser mudada por nenhum tipo de comando
        */

    global1 = 3; global2 = 7;
    cout<< global1 << " " << global2 << endl;

    /*-------------------------------------------------*/

    /*Operadores matematicos ocorrem da mesma forma que em C
        Operadores: + - / * % ()                          
        A precedencia dos operadores eh igual em C, primeiro resolve tudo que estiver dentro de parenteses
        depois multiplicacao e divisao, e por ultimo a soma e a subtracao */

    int res = global1 + global2;
    cout<<res<<endl;
    cout << global1*global2 + (global2/global1) - (global2%global1) << endl; /*21 + 2 - 1*/

    /*------------------------------------------------*/

    /*incremento e decremento de variaveis tambem se dao igual ao C*/

    res = res +1;
    res= res -1;

    res++;
    res--;
    
    res+=5; /*podemos usar para incrementar um valor maior que 1 de uma vez*/
    res-=3;

   /*todas essas 3 formas de incrementar/decrementar uma variavel sao iguais e validas*/

    cout<< res<< endl;

    int ex=1;
    ex*=10; /*operacoes de multiplicacao e divisao tambem podem ser feitas desse modo*/
    ex/=10; /*o valor apos o = se refere a quanto o valor sera multiplicado/dividido*/

    cout<< ex<< endl;

    /*------------------------------------------------*/

    /* Operadores pre e pos fixados:
            Operadores pos-fixados sao os que acabamos de ver, onde o operador fica a direita da variavel, de mesmo modo,
                os operadores pre-fixados sao os que estao a esquerda da variavel.
            A unica diferenca entre os dois tipos de operadores se da quando os utilizados em uma saida, por exemplo a funcao cout, quando utilizados o operador pos-fixo,
                o valor eh impresso e DEPOIS incrementado. Ja quando usamos o operador pre-fixado, o valor eh primeiro incrementado e depois impresso. */

    int ex2 = 1;

    cout<< ex++ << endl;
    cout<< ++ex << endl; 
    cout<< ex-- << endl;
    cout<< --ex << endl;

    /*somente os operadores ++ e -- funcionam com essa logica*/

    /*------------------------------------------------*/
    
    int num=10;
    cout << num << "\n";

    /*ha duas formas em que podemos inverter o valor de uma variavel:
        Podemos tanto multiplicar seu valor por -1 quanto usar um operador para encurtar o codigo */

    num = num*-1;
    num = -num; /*inversao atraves do operador*/

    cout << -num << endl; /*no entanto, esse modo de inversao nao grava na variavel a inversao, e so o inverte ao mostrar o 
                            conteudo na tela, portanto, o valor de num nao eh alterado*/

    return 0;
}