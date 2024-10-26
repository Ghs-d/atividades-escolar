#include <iostream>
using namespace  std;
int main (){

    int quant , ld1 , ld2,ld3,ld4,ld5;
    cout<<"Digite a quantidade de lados do polígono"<<endl;
    cin>>quant;
        if (quant = 3){
            cout<<"Escreve o valor do primeiro lado";
            cin>>ld1;
            cout<<"Escreve o valor do segundo lado";
            cin>>ld2;
            cout<<"Escreva o valor da base"<<endl;
            cin>>ld3;
            cout<<"Escreva o valor da altura"<<endl;
            cin>>ld4;
            cout<<"O valor da área do triângulo é: "<<(ld2 + ld4)/2;
        }
        if(quant = 4){
            cout<<"Escreve o valor do primeiro lado";
            cin>>ld1;
            cout<<"O valor da área do quadrado é: "<<ld1 * ld1;
        }
            if(quant= 5)
        {
            cout<<"Escreve o valor do primeiro lado";
            cin>>ld1;
            cout<<"Escreve o valor do segundo lado";
            cin>>ld2;
            cout<<"Escreve o valor do terceiro lado";
            cin>>ld3;
            cout<<"Escreve o valor do quatro lado";
            cin>>ld4;
            cout<<"Escreve o valor do quinto lado";
            cin>>ld5;
            
        }
        else{
            cout<<"Polígono não encontrado";
        }
}