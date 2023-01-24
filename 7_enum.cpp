#include<iostream>
using namespace std;

/*um enum eh um conjunto de constantes inteiras que especificam valores que uma variavel desse tipo pode ter*/


int main(void)
{   
    enum armas{fuzil=100, revolver=6, rifle=12, escopeta=2, pau=1}; /* cada elemento eh representado por um nome, tendo um valor inteiro sequencial a representa-lo*/
    armas armaSel;

    armaSel = escopeta;
    cout << armaSel << endl; /*o valor de cada elemento eh a sequencia a partir do anterior. Iniciando o primeiro elemento como 100, 
                                fara com que o valor do proximo seja 1+ do valor anterior. Se o valor inicial nao for especificado, sera 0*/

    return 0;
}