#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int ano, ida;
    cout<<"Escreva o ano de nascimento"<<endl;
    cin>>ano;
    ida = 2024 - ano;
    if(ida >= 18){
        cout<<"è maior de idade";
    }
    else{
        cout<<"É menor de idade";
    }
    return 0;
}
