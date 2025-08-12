/*#include<iostream>
using namespace std;
union exemplo {
    int inteiro;
    float decimal;
    char caracter;
};
int main()
{    exemplo ex;
    ex.inteiro=8;
    cout<<"\nInteiro: "<<ex.inteiro<<endl;
    ex.decimal=1.5;
    cout<<"Decimal: "<<ex.decimal<<endl;
    cout<<"\nInteiro: "<<ex.inteiro<<endl;
    return 0;
}*/

//Prog para guardar o registro de software
#include<iostream>
#include<cstring>
using namespace std;
struct software {
    string nome;
    union regkey {
        int chaveinteira;
        char chavetexto[50];
    } chave;
    //tipo de chave
    bool ehchaveinteira;
};
int main() {
    software sw;
    sw.ehchaveinteira=false;
    cout<<"Nome do Sw: ";
    cin>>sw.nome;
    cout<<"Qual o tipo de serial key?\n [1] chave\t[2] código int\n Escolha uma opção: "<<endl;

    int tipo;
    cin>>tipo;

    if (tipo==1){
        cout<<"Digite o código: ";
        cin>>sw.chave.chaveinteira;
        sw.ehchaveinteira=true;        
    }

    //Imprime na tela
    cout<<"Dados do Software: "<<endl;
    cout<<"Nome do Software: "<<sw.nome<<endl;
    if (sw.ehchaveinteira==true) {
        cout<<"Chave Inteira: "<<sw.chave.chaveinteira;
    } else {
        cout<<"Chave de texto: "<<sw.chave.chavetexto;}
    return 0;
}
