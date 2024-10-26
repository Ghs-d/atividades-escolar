#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int menor, n1,n2 ;
    cout<<"Digite um numero"<<endl;
    cin>>n1;
    cout<<"Digite segundo numero"<<endl;
    cin>>n2;

    if(n1 > n2)
    {
        int menor = n2;
    }
    else  
    {
        int menor = n1;
    }
    cout<<"O menor numero é: " << menor;
    
    return 0;
}