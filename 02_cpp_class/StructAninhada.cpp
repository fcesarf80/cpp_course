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
}