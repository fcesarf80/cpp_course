//Crie um prog que receba os dados: ID, título, autor, editora e anos de um livro e coloquenestes dados na tela.
#include <iostream>
#include <string>
using namespace std;

//Criada um struct, um modelo para criação de objetos deste tipo
//Importante destacar que até aqui no final

struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};
//aqui não existirá criação de nada na memória RAM, isso ou esta
//struct é apenas um modelo para criação de outras variáveis
/*quando fora criada uma variavel do tipo desta struct, o compilador irá usar este molde, este modelo para arrumar e armazenar dados na memória RAM*/

int main()
{
	//Aqui foi criada uma variavel de nome livro(poderia ser outro nome)
	//como livro é diferente de Livro pode ser feito, mas confunde...
	/*logo aqui temos a criação na memória RAM de uma variável de nome livro
	e que será criada a partir do modelo da struct Livro*/
	//Em c++ podemos retirar a palavra struct ao criar uma variável do tipo struct

	struct Livro livro;

	//A partir de agora podemos acessar os campos desta variavel livro atraves da notação ponto(.)

	cout << "\n***Cadastro de Livro***" << "\n";
	cout << "Digite ID do Livro: ";
	cin >> livro.ID;

	cout << "\nDigite o Titulo do livro: ";
	cin.ignore();
	std::getline(cin, livro.Titulo); //obtenha linha = getline 

	cout << "\nDigite o Autor do Livro: ";
	std::getline(cin, livro.Autor);

	cout << "\nDigite a Editor do Livro: ";
	std::getline(cin, livro.Editora);

	cout << "\nID: " << livro.ID << "\n";
	cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n";
    cout<< endl;

	system("PAUSE");
	return 0;
}

/*
#include <iostream>
using namespace std;
struct Ponto3D
{
	int X;
	int Y;
	int Z;
	void DesenharPonto3D(Ponto3D Pontos)
	{
		cout << "\nX:" << Pontos.X << "\nY:" << Pontos.Y << "\nZ:" << Pontos.Z <<"\n" << endl;;
	}
};


int main()
{
	Ponto3D PontoC;
	PontoC.X = 3;
	PontoC.Y = 4;
	PontoC.Z = 5;
	PontoC.DesenharPonto3D(PontoC);
	system("PAUSE");
	return 0;
}
*/
/*
union abc{
    int a;
    char b;
    //o tipo string não pode ser utilizado
};

@include<iostream>
int main()
{
    abc elem;
    elem.a=10;
    cout<<"A: "<<elem.a <<endl;
    elem.b='a';
    cout<<"B: "<<elem.b <<endl;
    cout<<"Tamanho ocupado pela union: "<<sizeof(union abc)<<endl;
}

ex2 item;
int escolha, tipo;
cout<<"Escolha o tipo de dado que deseja armazenar?"<<end;
cout<<"1-Inteiro"<<endl;
cout<<"2-Float"<<endl;
cout<<"3-Decimal"<<endl;
cout<<"opção?"<<endl;

switch(escolha)

case 2:
cout<<"Decimal";
cin>>item.f;
tipo=2;
break

return 0;
{
atividade 3 - struct & Union
union infoProduto
{
    int quantidade;
    float preco;
};

struct Produto
{
    int ID;
    string nome;
    infoProduto info;
    char tipoInfo;//q - quantidade e p / preco
}
Produto P cout<<"Cadastro do Produto:\n";
//Leitura de dados
cout<<"ID?"; cin>>p.ID;
cib.ignore();

cout<<"Nome do produto";
getline(cin, p.nome)

int escolha, tipo;
cout<<"Escolha o tipo de informação  que deseja armazenar?"<<end;
cout<<"1-Quantidade"<<endl;
cout<<"2-Preço"<<endl;
cout<<"opção?"<<endl;
cin>>escolha;

switch(escolha)

case 1:
cout<<"Quantidade?";
cin>>p.infoProduto.quantidade;;
p.tipoInfo=q;
break
case 2:
cout<<"Preço?";
cin>>p.infoProduto.preco;;
p.tipoInfo=p;
break
default:
cout<<"Opcao invalida";
return 1;
}

//Exibir os dados
cout<<"\n ----Detalhe do Produto---\n\n";
cout<<"ID: "<<p.id<<endl;
cout<<"Nome: "<<p.nome<<endl;

if(p.topoInfo=='q')
{
    cout<<"Quantidade em stock: "<<p.Info.quantidade<<endl;
else if (p.topoInfo=='p') {
    cout<<"Preço produto: "<<p.Info.preco<<endl;
}else{
    cout<<"Tipo desconecido\n";
}
//enum ou enumerações

return 0;
}
*/

/*#include<iostream>              //Destrutor. exemplo com índice 
#include<stdlib.h>              //PONTEIRO
using namespace std;
struct Data     //Como não foi especificado o modificador de
                //acesso na struct ele serápor padrão public
{   
    static int contador;
    int id;
    int Dia;
    int Mes;  
    int Ano;      
    Data()
    {
        //como o contador é estático, ele não vai perder o valor e
        //portanto irá incrementar de um a cada chamada do destrutor
        //e do construtor
        id = contador++;
        cout<<"\n\u2022 Construtor Data( " << id << ") executado"<< "\n";}
    ~Data(){cout<<"\n\u2022 Destrutor ~Data( " << id << ") executado"<< "\n";}    
};

//Desta forma, acima, você pode iniciar os valores ao instanciar e usar chaves

int Data::contador = 1; 
        
int main()             
{
    { Data Agenda1;
       //Aqui criei um novo ESCOPO, pois lembre que entre Chaves é um
       //escopo e vai terminar o ciclo de vida das variáveis. Então, 
       //quando o código ultrapassar a Chave final, tudo o que for
       //declarado dentro do escopo morre dentro do escopo
        {
            Data Agenda2;
            //Agora este objeto 'Agenda3' está na Heap e não será
            //destruído ao final do escopo
            //ele só será destruido, se for utilizada a função delete 
            Data *Agenda3 = new Data;
        }   
      Data Agenda4;
    }  
    cout<<endl;
    system("pause");
    return 0;
}*/

/*
#include<iostream>              //Destrutor. exemplo com índice 
#include<stdlib.h>
using namespace std;
struct Data     //Como não foi especificado o modificador de
                //acesso na struct ele serápor padrão public
{   
    static int contador;
    int id;
    int Dia;  
    int Mes;  
    int Ano;      
    Data()
    {
        //como o contador é estático, ele não vai perder o valor e
        //portanto irá incrementar de um a cada chamada do destrutor
        //e do construtor
        id = contador++;
        cout<<"\n\u2022 Construtor Data( " << id << ") executado"<< "\n";}
    ~Data(){cout<<"\n\u2022 Destrutor ~Data( " << id << ") executado"<< "\n";}    
};

//Desta forma, acima, você pode iniciar os valores ao instanciar e usar chaves

int Data::contador = 1; 
        
int main()             
{
    { Data Agenda1;
       //Aqui criei um novo ESCOPO, pois lembre que entre Chaves é um
       //escopo e vai terminar o ciclo de vida das variáveis. Então, 
       //quando o código ultrapassar a Chave final, tudo o que for
       //declarado dentro do escopo morre dentro do escopo
        {
            Data Agenda2;
        }   
      Data Agenda3;
    }  
    cout<<endl;
    system("pause");
    return 0;
}
*/
/*
#include<iostream>              //Destrutor
#include<stdlib.h>
using namespace std;
struct Data     //Como não foi especificado o modificador de
                //acesso na struct ele serápor padrão public
{   
    int Dia;        
    int Mes;  
    int Ano;      
    Data()
    {cout<<"\n\u2022 Construtor Data() executado"<< "\n";}
    ~Data(){cout<<"\n\u2022 Destrutor ~Data() executado"<< "\n";}    
};
        
int main()             
{
    { Data Agenda1;
       //Aqui criei um novo ESCOPO, pois lembre que entre Chaves é um
       //escopo e vai terminar o ciclo de vida das variáveis. Então, 
       //quando o código ultrapassar a Chave final, tudo o que for
       //declarado dentro do escopo morre dentro do escopo
        {
            Data Agenda2;
        }   
      Data Agenda3;
    }  
    system("pause");
    return 0;
}
*/

/*
#include<iostream>
#include<stdlib.h>
using namespace std;
//Structs em C++
//Uma estrutura ou struct é um grupo de elementos de
//dados agrupados sob um nome. Esses elementos de dados,
//conhecidos como membros, podem ter diferentes tipo de
//diferentes tamanhos

//Se você não especificar o modificador de visibilidade 
//public, privat ou protected na classe por padrão os
//membros serão privat. Na struct por padrão serão public,

class Data  //struct NomedaStruct{}
{   
    //Como não foi especificado o modificador de acesso
    //na struct ele serápor padrão public
public:
    int Dia;         //tipo nome_do_membro1;
    int Mes;   //tipo nome_do_membro2;
    int Ano;       //tipo nome_do_membro3;

public:
    Data(): Dia(30), Mes(07), Ano(2025){}
    
}; //antes do ; pode declarar NomeObjeto1, NomeObjeto2...;
        
int main()             //NomedaStruct Objeto1, Objeto2...;
{
    system("color 0A");
    Data Agenda;
    //desta forma você tem acesso aos atributos, as
    //variáveis da struct diretamente no código da 
    //função main.. ou seja, fora do código da struct
    
    cout << "\n\u2022 Dia: " << Agenda.Dia << " - Mes: " << Agenda.Mes <<" - Ano: " << Agenda.Ano<<"\n"<<endl;
    system("pause");
    return 0;
}
*/
// struct Data  //struct NomedaStruct{}
// {   
//     //Como não foi especificado o modificador de acesso
//     //na struct ele serápor padrão public
//     int Dia;         //tipo nome_do_membro1;
//     int Mes;   //tipo nome_do_membro2;
//     int Ano;       //tipo nome_do_membro3;
    
// }; //antes do ; pode declarar NomeObjeto1, NomeObjeto2...;
        
// int main()             //NomedaStruct Objeto1, Objeto2...;
// {
//     system("color 0A");
//     Data Agenda;
//     //desta forma você tem acesso aos atributos, as
//     //variáveis da struct diretamente no código da 
//     //função main.. ou seja, fora do código da struct
//     Agenda.Dia = 30;
//     Agenda.Mes = 07;
//     Agenda.Ano = 2015;
//     cout << "\n\u2022 Dia: " << Agenda.Dia << " - Mes: " << Agenda.Mes <<" - Ano: " << Agenda.Ano<<"\n"<<endl;
//     system("pause");
//     return 0;
// }


