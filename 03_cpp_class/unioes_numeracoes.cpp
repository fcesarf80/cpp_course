/*#include<iostream>
using namespace std;
union Dado {
    int inteiro;
    float decimal;
    char caractere;    
};
int main() {
    Dado item;
    int escolha;
    cout<<"\n == Escolha o tipo de dado ==\n";
    cout<<"[1] inteiro\t [2] decimal\n";
    cout<<"[3] caractere\t  _  Opção ? ";
    cin>> escolha;
    switch (escolha) {
        case 1:
            cout<<"Digite um número inteiro: ";
            cin>>item.inteiro;
            cout<<"Valor inteiro armazenado: "<<item.inteiro<<endl;
            break;
        case 2:
            cout<<"Digite um número decimal: ";
            cin>>item.decimal;
            cout<<"Valor decimal armazenado: "<<item.decimal<<endl;
            break;
        case 3:
            cout<<"Digite um caractere: ";
            cin>>item.caractere;
            cout<<"Caractere digitado: "<<item.caractere<<endl;
            break;
        default:
            cout<<"Opção invalida!"<<endl;
    }
        cout<<endl;
    return 0;
}*/
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
   union { float gasolina, eletrico, diesel;
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
    cout<<endl;    //Imprime na tela
    cout<<"Marca: "<<v.marca<<endl;
    cout<<"Modelo: "<<v.modelo<<endl;
    cout<<"Ano: "<<v.ano<<endl;
    return 0;
}
*/
/*
//Prog q utiliza enum para os dias da semana
#include<iostream>
using namespace std;
enum diaSemana{sab, dom, seg, ter, qua, qui, sex};
int main()
{   diaSemana hoje;
    cout<<"\nIntroduzir entre 0-sab e 6-sex para o dia da semana:";
    int entrada;
    cin>>entrada;
    hoje=static_cast<diaSemana> (entrada);

    switch(hoje) {
    case 0:
        cout<<"Sábado";
        break;
    case 1:
        cout<<"Domingo";
        break;
    case 2:
        cout<<"Segunda";
        break;
    case 3:
        cout<<"Terça";
        break;
    case 4:
        cout<<"Quarta";
        break;
    case 5:
        cout<<"Quinta";
    case 6:
        cout<<"Sexta";    
    default:
    cout<<"Valor invalido!";
        break;
    }
    cout<<endl;
}*/
//Prog que utiliza union, struct e enum para representar tipod de veiculos
/*
#include<iostream>
using namespace std;
enum tipoVeiculo{carro, moto, caminhao};
union dadosVeiculo {
    int numPortas;//carro
    bool mala;//moto
    float carga;//caminhao
};
struct veiculo {
    tipoVeiculo tipo;
    string marca;
    dadosVeiculo dados;
};
int main()
{
    veiculo v;
    int escolha;
    cout<<"Escolha o tipo de veiculo:\n[0]Carro, [1]Moto [2]Caminhão: ";
    cin>>escolha;
    v.tipo=(tipoVeiculo)escolha;
    cout<<"Marca do veículo: ";
    cin>>v.marca;
        switch (v.tipo) {
            case carro:
                cout<<"Número de portas: ";
                cin>>v.dados.numPortas;
                break;
            case moto:
                cout<<"A moto tem mala? [1]Sim - [2]Não: ";
                cin>>v.dados.mala;
                break;
            case caminhao:
                cout<<"Carga: ";
                cin>>v.dados.carga;
                break;
            default:
                cout<<"Entrada invalida";
        }
        cout<<endl;
    //Imprimir na tela
    cout<<"**** DETALHES DO VEICULO ****\n";
    cout<<"Marca: "<<v.marca<<endl;
        switch (v.tipo){
            case carro:
                cout<<"Num de portas:"<<v.dados.numPortas;
                break;
            case moto:
                cout<<"A moto tem mala: "<<(v.dados.mala?"SIM":"NÃO");
                break;
            case caminhao:
                cout<<"Capacidade de carga: "<<v.dados.carga;
                break;
        }
    return 0;
}
    */