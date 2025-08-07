

/*#include<iostream>
using namespace std;
struct Sensor
{   int id;
    float temperatura;
    float humidade;
};
void preencherSensor(Sensor* s)
{   cout << "\nID do sensor: ";
    cin >> s->id;
    cout << "Temperatura (C°): ";
    cin >>s->temperatura;
    cout << "Humidade (%): \n";
    cin >> s->humidade;    
}
void mostrarSensor(Sensor* s)
{   cout << "=== DADOS DO SENSOR === " <<"\n";
    cout << "ID: " << s->id << "\n";
    cout << "Temperartura: " << s->temperatura<<" C°" <<"\n";
    cout << "Humidade: " << s->humidade << " %" << endl;
}
int main()
{   Sensor sensor1;
    preencherSensor(&sensor1);
    mostrarSensor(&sensor1);
    return 0;
}
*/








/*
#include<iostream>
#include<string>
using namespace std;
struct Livro {
    string titulo;
    string autor;
    int ano;
};
int main()
{   Livro livro1;
    Livro* ptrLivro = &livro1;
    
    cout << "\nDigite o titulo do livro: ";
    getline(cin, ptrLivro->titulo);
    cout << "Digite o autor do livro: ";
    getline(cin, ptrLivro->autor);
    cout << "Digite o ano da publicação: ";
    cin >> ptrLivro->ano;

    cout << "\n === DADOS DO LIVRO === " << "\n";
    cout << "Título: " << ptrLivro->titulo << "\n";
    cout << "Autor: " << ptrLivro->autor<< "\n";
    cout << "Ano: " << ptrLivro->ano << endl;
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
struct Aluno {
    string nome;
    float notas[2];
};
int main()
{   const int TotalAlunos = 3;
    Aluno alunos[TotalAlunos];
 for (int i = 0; i < TotalAlunos; i++) {
      cout << "\nDigite o nome do aluno(a) "<<i+1<<"º: ";
      getline(cin>>ws, alunos[i].nome);//ws remove espaços
      for (int j = 0; j<2; j++) {
cout<<"Digite a nota "<<j+1<<"º de "<<alunos[i].nome<<": ";
         cin>> alunos[i].notas[j]; }
               cout << endl;
   }  //Cálculo melhor média
    float maiorMed = -1.0;
    int indicMelhorMed = 0;
    cout << "\n====== Média dos Alunos ======\n";
     for (int i = 0; i < TotalAlunos; i++) {
    float media=(alunos[i].notas[0]+alunos[i].notas[1])/2;
        cout<<"Aluno: "<<alunos[i].nome<<" | Média: "<<media <<endl;
          if (media > maiorMed || i ==0) {
            maiorMed = media;
            indicMelhorMed = i;}
        }  //Mostrar o aluno com a maior média
     cout << "\nAluno com a maior média: "<< alunos[indicMelhorMed].nome << " (" << maiorMed<< ")\n";
     cout << endl;
    return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
struct Produto {
    string nome;
    float preco;
    int quant; //quantidade  };
int main()
{    Produto produto[2][2];
     //leitura
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            cout<< "Produto [" <<i<< "][" <<j<<"] =\n";

            cout << "Nome?";
            cin >> produto[i][j].nome;
            cout << "Preço?";
            cin >>produto[i][j].preco;
            cout << "Quantidade?";
            cin >>produto[i][j].quant;       }    }
    //escrita
    cout << fixed << setprecision(2);
    cout <<"*********************************"<<endl;
    cout <<"\tPRODUTO EM STOCK"<<"\n";
    cout <<"*********************************"<<endl;
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                Produto p=produto[i][j];
                float total= p.preco*p.quant;

                cout << "Produto [" << i << "]" <<"[" << j << "]" <<p.nome <<" | "<< p.preco << " | "<<p.quant << " | "<< total << " €\t |" <<endl;   }    }
        cout << endl;
    return 0;  }
*/
/*
#include<iostream>
#include<string>
using namespace std;
struct Produto
{   string nome;
    float preco;
    int quantidade;
}; int main()
{   Produto prod;
    int opcao;
 do{ cout << "\nMENU DE OPÇÕES:\n";
     cout << "1-Inserir produto | 2-Mostrar produto\n";
     cout << "3-Sair \t\t  | Opção?";
     cin >> opcao;
     cout << "\n";
     if(opcao==1){
         cin.ignore();
      cout<<"Nome do produto?"; getline(cin,prod.nome);
         cout<<"Preço do produto?"; cin>>prod.preco;
         cout<<"Quantidade produto?"; cin>>prod.quantidade;
         cout<<"Produto inserido com sucesso!\n";
        }else if (opcao==2){
         cout<<"Produto inserido:\n";
         cout<<"nome:"<<prod.nome<<"\n";
         cout<<"Preço:"<<prod.preco<<"\n";
         cout<<"Quantidade:"<<prod.quantidade<<endl;
        }else{
         cout<<"Saindo...";}
    } while (opcao!=3);
    return 0;
}
*/


// // Função para inserir produtos
// void insertProduct(Product products[], int& total)
// {   if (total >= 100)
//     { cout << "Limite máximo de produtos atingido!" << endl;
//     return;
//     }
// cout << "\n === Inserir Produto ===" << "\n";
// cout << "Nome: ";
// cin.ignore(); //limpa buffer
// getline(cin,products[total].name);

// cout << "Preço: ";
// cin >> produtos[total].price;

// cout << "Quantidade: ";
// cin >> products[total].quantity;

// total++;
// cout << "Produto inserido com sucesso!\n";
// }
// //Funçao para listar produtos
// void listProducts(const Product products[], int total)
// {   if (toral == 0)
//     { cout << "\nNenhum produto registrado.\n" << endl;
//     return;
//     }
// cout << "\n === LISTA DE PRODUTOS === " << endl;
// }
// cout << endl;


// int main()
// {   product p1;
    
//     p1.nome = "Banana";
//     p1.price = 1.22;
//     p1.quantity = 6;
//     p1.operation.insert = "Incluir";
//     p1.operation.list = "listar";
//     p1.operation.exit = "Sair";

//     cout << "\nDigite o nome do produto: ";
//     getline(cin,p.name);
//     cout << "Digite o preço do produto: ";
//     cin >> p.price;
//     cout << "Digite a quantidade do produto: ";
//     cin >> p.quantity;

//     cout << "\n***** SISTEMA DE REGISTRO DE PRODUTOS *****\n";cout << "\tProduto: " << p.name << ", preço: " << p.price << "€, quantidade: " << p.quantity << "\n" << endl;
//     return 0;
// }
/*
#include<iostream>
#include<string>
#include<limits>
using namespace std;
struct StudentCard
{   int codAluno;
    int year;
    string name;
    string Ufcd;    
};
int main()
{   StudentCard estudante;
    cout << "\n\tTecnisign\n"; 
    cout << "Digite o código do aluno: ";
    cin >> estudante.codAluno;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
          
    cout << "Digite o nome do aluno: ";
    getline(cin, estudante.name);
    cout << "Digite a UFCD: ";
    getline(cin, estudante.Ufcd);
    cout << "Digite o Ano: ";
    cin >> estudante.year;

    cout << "\n***** CARTÃO DO ALUNO *****";
    cout << "\nDados do estudante: \n";
    cout << "Codigo do aluno: " << estudante.codAluno << "\n";
    cout <<"name do aluno: "<< estudante.name << "\n";
    cout << "UFCD: "<< estudante.Ufcd << "\n";
    cout << "Ano: " << estudante.year << endl;
    return 0;
}*/

/*
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    time_t HoraAtual = time(0);

    tm* MinhaHora = localtime(&HoraAtual);
    cout << "\nHora: " << 1 + MinhaHora->tm_hour << ":" << 1 + MinhaHora->tm_min << ":" << 1 + MinhaHora->tm_sec;
    cout << "\nDia: " << MinhaHora->tm_mday;
    cout << "\nMês: " << 1 + MinhaHora->tm_mon;
    cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n"<< endl; 

    system("pause");
    return 0;
}
*/
// ou int main()
//{ time_t Tempo = time(NULL)}; 
//cout << ctime(&Tempo);
//system("pause");
//return 0;
//}


/*
#include<iostream>
#include<cstring>
using namespace std;
struct Data
{
    int Dia;
    int Mes;
    int Ano;
};
struct Endereco
{
    string Rua;
    string Cidade;
    string Estado;
    string Pais;
};
struct Pessoa
{
    string Nome;
    Data DtNascimento;
    Endereco Endereco;
};
int main()
{
    Pessoa Pessoa01;
    Pessoa01.Nome = "Udemy";
    Pessoa01.DtNascimento.Dia = 01;
    Pessoa01.DtNascimento.Mes = 8;
    Pessoa01.DtNascimento.Ano = 2025;
    Pessoa01.Endereco.Rua = " Rua Star - ";
    Pessoa01.Endereco.Cidade = "São Francisco";
    Pessoa01.Endereco.Estado = " - California - ";
    Pessoa01.Endereco.Pais = "EUA. ";

    cout << "Nome: " << Pessoa01.Nome << "\n";
    cout << "Data Nascimento: " << Pessoa01.DtNascimento.Dia <<"\\ "<< Pessoa01.DtNascimento.Mes << "\\ " << Pessoa01.DtNascimento.Ano << "\n";
    cout << "Endereço: " <<  Pessoa01.Endereco.Rua << Pessoa01.Endereco.Cidade << Pessoa01.Endereco.Estado << Pessoa01.Endereco.Pais << "\n" << endl;

    system("pause");
    return 0;
}
*/
/*
                            //Vetros de structs aninhadas
#include<iostream>
#include<cstring>
using namespace std;
struct Data
{
    int Dia;
    int Mes;
    int Ano;
};
struct Endereco
{
    string Rua;
    string Cidade;
    string Estado;
    string Pais;
};
struct Pessoa
{
    string Nome;
    Data DtNascimento;
    Endereco Endereco;
};
int main()
{
    Pessoa Pessoa01[2];
for (int i = 0; i < 2; i++)
{
    Pessoa01[i].Nome = "Udemy";
    Pessoa01[i].DtNascimento.Dia = 01+i;
    Pessoa01[i].DtNascimento.Mes = 8+i;
    Pessoa01[i].DtNascimento.Ano = 2025+i;
    Pessoa01[i].Endereco.Rua = " Rua Star - ";
    Pessoa01[i].Endereco.Cidade = "São Francisco";
    Pessoa01[i].Endereco.Estado = " - California - ";
    Pessoa01[i].Endereco.Pais = "EUA. ";
}
for (int i = 0; i < 2; i++)
{
    cout << "Nome: " << Pessoa01[i].Nome << "\n";
    cout << "Data Nascimento: " << Pessoa01[i].DtNascimento.Dia <<"\\ "<< Pessoa01[i].DtNascimento.Mes << "\\ " << Pessoa01[i].DtNascimento.Ano << "\n";
    cout << "Endereço: " <<  Pessoa01[i].Endereco.Rua << Pessoa01[i].Endereco.Cidade << Pessoa01[i].Endereco.Estado << Pessoa01[i].Endereco.Pais << "\n" << endl;
}
    system("pause");
    return 0;
}*/
/******************************************** */
/*
#include<iostream>
using namespace std;
struct Aluno
{   int codAluno;
    string nome;
    string UFCD;
    int ano;
    
    void insereAluno(int cod, string n, string dis, int a)
    {   codAluno=cod;
        nome=n;
        UFCD=dis;
        ano=a;
    }
    
    void imprimeAluno()
    {   cout << "Cod Aluno: " << codAluno << endl;
        cout << "Nome: " << nome << endl;
        cout << "UFCD: " << UFCD << endl;
        cout << "ano: " << ano << endl;
    }
};

int main()
{   
    Aluno al1, al2, al3;
    al1.nome = "Katarine";
    al1.codAluno = 01;
    al1.UFCD = "UFCD 0810";
    al1.ano = 2025;
    
    al2.nome = "Cesar";
    al2.codAluno = 02;
    al2.UFCD = "UFCD 0810";
    al2.ano = 2025;
    
    al3.insereAluno(03,"Zumba", "UFCD 0810", 2025);
    
    al1.imprimeAluno();
    cout<<endl;
    al2.imprimeAluno();
    cout<<endl;
    al3.imprimeAluno();
    cout<<endl;
 
    return 0;
}*/