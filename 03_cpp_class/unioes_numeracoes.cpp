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
/*
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
}*/

/*
//Prog C++ que armazena infor de véiculo
#include<iostream>
using namespace std;
struct Veiculo {
    string marca, modelo;
    int ano;
    union {
        float gasolina, eletrico, diesel;
    } combustivel;
    int tipoCombustivel;//1.gasolina 2.eletric 3.diesel
};
int main()
{    Veiculo v;
    cout<<"\nMarca?";
    cin>>v.marca;
    cout<<"Modelo?";
    cin>>v.modelo;
    cout<<"Ano?";
    cin>>v.ano;
    cout<<"Escolha o tipo de combustivel:\n[1]gasolina [2] eletrico [3] diesel\n";
    cin>>v.tipoCombustivel;

    if (v.tipoCombustivel==1) {
        cout<<"Litros de gasolina?";
        cin>>v.combustivel.gasolina;
        //if alinhado
    } else if (v.tipoCombustivel==2) {
        cout<<"Percentagem de carregamento?";
    cin>>v.combustivel.eletrico;
    } else { cout<<"Litros de diesel?";
        cin>>v.combustivel.diesel;
        }
    cout<<endl;
    return 0;
}
*/