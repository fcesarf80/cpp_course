#include<iostream>
using namespace std;
enum Estacao {
    Primavera = 1, Verao = 2, Outono = 3, Inverno = 4
};
int main()
{   int escolha;
    cout<<"\n=== Estações do ano: ===\n";
    cout<<"[1]Primavera\t[2]Verão\n[3]Outono\t[4]Inverno\n";
    cout<<"Escola uma estação do ano: ";
    cin>>escolha;
    switch (escolha) 
    {
        case Primavera:
         cout<<"\nA estação escolhida foi a primavera!"<<endl;
        break;
        case Verao:
            cout<<"\nA estação escolhida foi o verão!"<<endl;
        break;
        case Outono:
            cout<<"\nA estação escolhida foi o outono!"<<endl;
        break;
        case Inverno:
            cout<<"\nA estação escolhida foi o inverno!"<<endl;
        break;
    default:
        cout<<"\nOpção inválida."<<endl;
        break;
    }
    cout<<endl;
    return 0;
}





























/*Atividade nº 5 - Módulo 3


Programa que utiliza struct, union e enum para armazenar e exibir informações, solicitadas sobre funcionários de uma empresa, com suas funções e atributos específico: Gerente → Bonus salarial (float), Técnico → Número de certificações (int) e Estagiário → Universidade em que estuda (string);























/*#include<iostream>
#include<string>
using namespace std;
union ValorProduto {   //união que armazena quantidade ou preço
    int quantidade;
    float preco;
};
enum tipoValor {       //enum ->indicar o tipo d dado armazenado na união
    TIPO_QUANTIDADE,
    TIPO_PRECO
};
struct Produto {       //struct que representa o produto
    int id;
    string nome;
    ValorProduto valor;
    tipoValor tipo;
};
int main() {
    Produto produto;
    cout<<"\nDigite o ID do produto: ";     //Engtrada de dados fixos
    cin>>produto.id;
    cin.ignore();                           //limpa buffer do cin
    cout<<"Digite o nome do produto: ";
    getline(cin, produto.nome);
  int escolha;                 //escolda do valor para armazenar na união
  cout<< "\n***** Escolha qual valor deseja armazenar: *****\n";
  cout<<"[1] Quantidade em estoque\t[2] Preço do produto\n_ Opção?_";
  cin>>escolha;    
        if (escolha == 1) {
            cout<<"Digite a quantidade em estoque: ";
            cin>>produto.valor.quantidade;
            produto.tipo = TIPO_QUANTIDADE;
        } else if (escolha == 2) {
            cout<<"Digite o preço do produto: ";
            cin>>produto.valor.preco;
            produto.tipo = TIPO_PRECO;
        } else {
            cout<<"Opção invalida.\n";
            return 1;
        }    
    cout<<"\n=== Detalhes do Produto ==\n";    //Exibe dados do produto
    cout<<"ID: "<<produto.id<<endl;
    cout<<"Nome: "<<produto.nome<<endl;
        if (produto.tipo == TIPO_QUANTIDADE) {
        cout<<"Quantidade em estoque: "<<produto.valor.quantidade<<endl;
        } else if (produto.tipo == TIPO_PRECO) {
        cout<<"Preço: "<<produto.valor.preco<<" €"<<endl;
        }
    cout<<endl;
    return 0;
}*/

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