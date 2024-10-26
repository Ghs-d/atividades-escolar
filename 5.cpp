#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int val1 , val2 , val3 ;
cout<<"escreve um numero"<<endl;
cin>>val1;
cout<<"escreve um numero"<<endl;
cin>>val2;
cout<<"escreve um numero"<<endl;
cin>>val3;
    
    if(val1>val2 && val2>val3 ){
        cout<<"OS valores em ordem crescente :"<<val1,val2,val3;
    }
     if(val1>val3 && val3>val2 ){
        cout<<"OS valores em ordem crescente :"<<val1,val3,val2;
    }
    if(val2>val1 && val1>val3 ){
        cout<<"OS valores em ordem crescente :"<<val2,val1,val3;
    }
    if(val2>val3 && val3>val1 ){
        cout<<"OS valores em ordem crescente :"<<val2,val3,val1;
    }
     if(val3>val1 && val1>val2 ){
        cout<<"OS valores em ordem crescente :"<<val3,val1,val2;
    }
    if(val3>val2 && val2>val1 ){
        cout<<"OS valores em ordem crescente :"<<val3,val2,val1;
    }
    else if (val1 = val2 , val1= val2 , val2=val3 , val3=val1 ){
        cout<<"Error";
    }

}