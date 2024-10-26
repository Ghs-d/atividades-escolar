#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    float med;
     vector<float> notas (3);
   cout<<"Digite sua primeira nota "<<endl;
   cin>>notas [1];
    cout<<"Digite sua segunda nota "<<endl;
   cin>>notas [2];
    cout<<"Digite sua terceira nota "<<endl;
   cin>>notas [3];
    med= (notas[1] + notas[2] + notas[3])/3;
    if(med >= 6.0){
        cout<<"Aprovado";
    }
    else if (med >= 3.0 && med < 6.0 ){
        cout<<"Recuperação";
        
    }
    else {
        cout<<"reprovado";
    }

    return 0;
}



