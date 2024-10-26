#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int ValorFinal_produto (int unidades,vector<int> Valordoproduto, int i){
    int valorFinal = unidades * Valordoproduto[i]; 
    
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    //Se o clinte quiser adicionar outra produtor no final o laço vai rentonar daqui
    string sim = "n�o";
    do { 

        
        int Registrado;
        int Unidades;
        vector<int> valorDprod
        cout<<"                 BEM VINDO"<<endl;
        cout<<"         DIgite o codigo do produto"<<endl;
        cout<<"                                           "<<endl;
        cout<<"     123    = Arroz"<<endl;
        cout<<"     234    = Biscoito"<<endl;
        cout<<"     456    = Feij�O"<<endl;
        cout<<"     678    = Caf�"<<endl;
        cout<<"     890    = Ch�"<<endl;
        cout<<"                                           "<<endl;
        cin>>Registrado;
       
        switch (Registrado)
        {
        case 123:
            cout<<"CODIGO IDENTIFICADO!            ARROZ"<<endl;
            cout<<"PRE�O                           R$ 8,00"<<endl;
            cout<<"Digite o numero de unidades: ";
            cin>>Unidades;  
            valorDprod[1] = unidades * 8;   
            break;
        case 234:
            cout<<"CoDIGO IDENTIFICADO!            BISCOITO"<<endl;
            cout<<"PRE�O                           R$ 2,90"<<endl;
            cout<<"Digite o n�mero de unidades: ";
            cin>>Unidades; 
            valorDprod[2] = unidades * 2.90    
            break;
        case 456:
            cout<<"CODIGO IDENTIFICADO!            FEIJ�O"<<endl;
            cout<<"PRE                           R$ 8,00"<<endl;
            cout<<"Digite o nUmero de unidades: ";
            cin>>Unidades;   
            valorDprod[3] = unidades * 8;  
            break;
        case 678:
            cout<<"CODIGO IDENTIFICADO!            CAF�"<<endl;
            cout<<"PRE�O                           R$ 8,00"<<endl;
            cout<<"D�gite o n�mero de unidades: ";
            cin>>Unidades;   
             valorDprod[4] = unidades * 8;    
            break;
        case 890:
            cout<<"CODIGO IDENTIFICADO!            CH�"<<endl;
            cout<<"PRE�oO                           R$ 8,00"<<endl;
            cout<<"Digite o n�mero de unidades: ";
            cin>>Unidades;  
             valorDprod[5] = unidades * 8;     
            break;
        
        default:
        cout<<"Codígo inválido ";
            break;
    
        }
        

            //se quiser adicionar novo produto voltar a repitir o codigo

            cout<<"Dejesa adicionar um novo produto"<<endl;
            cin>>sim;

    }while (sim =="n�o");
    
        
    

    return 0;
}
