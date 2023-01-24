#include<iostream>

using namespace std;

class Aviao     /*Criamos uma classe e dentro dela colocamos instancias, chamadas objetos*/
{               /*precisamos separar elementos que vao ser do tipo publico e do tipo privado, e os dois tipos devem ficar separados entre si*/
    public:
        int vel=0;
        int velMax;
        string tipo;
        void ini(int tp);           /*podemos prototipar funcoes para funcionar dentro de uma classe, assim como nas structs*/
                                    /*devemos no entanto, construir essa funcao fora da classe*/

    private:



};

void Aviao::ini(int tp)             /*ao declarar a funcao que esta contida dentro de uma classe, devemos fazer sua identificacao desse modo*/
{   
    //tipo 1: jato, tipo 2: monomotor, tipo 3: planador
    if(tp==1){
        this->velMax=800;           /*ao nos referirmos a alguma variavel da classe, devemos identifica-la com this->*/
        this->tipo = "Jato";
    }
    else if(tp==2){
        this->velMax=350;
        this->tipo="Monomotor";
    }
    else if(tp==3){
        this->velMax=180;
        this->tipo="Planador";
    }


}

int main()
{
    /*o objeto seria essa variavel av1*/
    Aviao *av1 = new Aviao();   /*Essa eh a forma de instanciar um novo objeto da classe aviao*/ 

    av1->ini(1);                /*chama a funcao dentro da classe aviao*/

    cout<<"Tipo de aviao: "<<av1->tipo<<". Vel max: "<<av1->velMax<<endl;       /*para o C++ usamos a setinha para nos referirmos as propriedades da classe*/

    return 0;
}