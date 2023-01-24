#include<iostream>
#include<string.h>  /*a biblioteca string.h tambem pode ser usada em C++*/
using namespace std;

int main(int argc, char *argv[]) /*argc armazena o numero de parametros enviados ao executar o programa, argv armazena todos os parametros passados*/                                   
{                                  /*o primeiro argumento eh sempre o nome do programa utilizado*/
                                    /*passamos os argumentos ao executar o programa pelo terminal, basta escrever os argumentos na frente da linha de execucao do programa*/
    if(argc>1)
    {
        if(!strcmp(argv[1], "sol"))
        {
            cout<<"Vou a praia\n\n";
        }
        else if(!strcmp(argv[1], "nublado"))
        {
            cout<<"vou ao puteiro\n\n";
        }
        else{cout<<"Vou tocar uma em casa\n\n";}

    }

    system("pause");
    for(int i=0;i<argc;i++)
    {
       cout<< argv[i]<< " "; 
    }
    
    return 0;
}