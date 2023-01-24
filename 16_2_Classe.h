using namespace std;
#ifndef CLASSEAVIAO_H_INCLUDED
#define CLASSEAVIAO_H_INCLUDED

class Aviao{               
    public:
        int vel=0;
        int velMax;
        std::string tipo;       /*ja que nao declaramos o namespace std no comeco*/
        Aviao(int tp);          /*O metodo construtor, que chamamos para inicializar a classe, geralmente tem o mesmo nome da classe*/
                                /*na aula 15 utilizamos o void ini(), mas por questao de convencao usasse o nome da classe*/
        void imprimir();

    private:

};

Aviao::Aviao(int tp)             /*a ideia por tras disso eh fazer o objeto ja ser inicializado no mesmo momento em que for declarado*/
{
    //tipo 1: jato, tipo 2: monomotor, tipo 3: planador
    if(tp==1){
        this->velMax=800;     
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

void Aviao::imprimir()
{
    cout<<"Tipo de Aviao: "<<this->tipo<<". Velocidade Maxima: "<<this->velMax<<". Velocidade Atual: "<<this->vel<<endl<<endl;
}




#endif  //CLASSEAVIAO_H_INCLUDED