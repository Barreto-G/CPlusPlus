#include <iostream>
using namespace std;

    int main()
    {
        int vetor[10]= {0};     /*A declaracao de vetores e matrizes tambem eh igual ao C*/

        vetor[9] = 10;
        vetor[4] = 5;
        vetor[5] = 8;
        
        for(int i=0; i<10;i++)
        {
            cout<<vetor[i]<<" ";
        }
        cout<<endl;

        /*---------------------------------*/

        int matriz[2][2]={0};
        matriz[0][0]=1;
        matriz[0][1]=2;
        matriz[1][0]=73;
        matriz[1][1]=87;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<matriz[i][j]<<" ";
            }
            cout<<endl;
        }

        


    }