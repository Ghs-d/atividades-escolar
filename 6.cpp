#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int altu;
    char f;
    cout<<"Escreve sua altura em cm"<<endl;
    cin>>altu;
    cout<<"Escrever seu genero  M= masculino | F=feminino"<<endl;
    cin>>f;
    
        if(f='f'){
            cout<<"Seu peso ideal é : "<<((72.7 * altu)-58)/100;
        }
        else{
                        cout<<"Seu peso ideal é : "<<((62.1 * altu)-44.7)/100;

        }
}