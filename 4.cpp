#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int maça;
    cout<<"Digite a quantidade de maça";
    cin>>maça;
    if (maça< 12){
        cout<<"O valor total  é : "<< maça * 0.30;
    }
    else {
       cout<<"O valor total  é : "<< maça * 0.25;

    }
}