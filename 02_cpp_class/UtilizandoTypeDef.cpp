#include<iostream>
using namespace std;

typedef int inteiro;
typedef char caractere;
typedef float real;

int main()
{
    inteiro Numero{ 12 };
    caractere Letra{ 'A' };
    float Nota{ 2.3 };
    real Media{ 7.0 };
    cout << "\nNémro: " << Numero; 
    cout << "\nLetra: " << Letra; 
    cout << "\nNota: " << Nota; 
    cout << "\nMedia: " << Media <<"\n"; 
    system("pause");
    return 0;
}