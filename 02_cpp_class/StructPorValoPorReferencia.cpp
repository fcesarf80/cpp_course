#include<iostream>
#include<iomanip>
using namespace std;
struct Aluno
{   long int Matricula;
    string Nome;
    string Curso;
    int Semestre;
    double Mensalidade;
};//Aluno01 = {20250001,"Cesar","TI",4,149.99}; <-Aqui, anteriormente
  //foicriado um objeto, do tipo dessa struct colocando entre } e ; .
  //Abaixo, são protótipos de funções que possuem um parâmetro do
  //tipo struct Aluno. Ou seja, estas funções são capazes de receber
  //na chamada das mesmas argumentos que sejam do tipo struct Aluno 
void MostrarDados(/*struct*/ Aluno Dado);
  //Agora criamos uma refêrencia em alterar dados... Desta forma Dado
  // não irá mais receber uma simples cópia da struct Aluno*/
void AlterarDados(/*struct*/ Aluno &Dado);//OBS.:podemos retirar struct
  //... pois é como se fosse uma classe... são publicas por padrão
int main()
{   Aluno Aluno01 = { 20250001, "Cesar", "TI", 4, 149.99 };
  //o argumento vai ser Aluno01, que já é um objeto do tipo struct
  //criado e instanciado a partir de atalho. Logo estamos enviando
  //para a função MostrarDados a variávelcvAluno01 (que neste caso
  //é um objeto do tipo struct Aluno).vMas, só enviamos uma copia
  //dos valores de Aluno01
    system("CLS");
    cout << "\n ANTES DE MODIFICAR OS DADOS\n";
    MostrarDados(Aluno01);
    AlterarDados(Aluno01);
    cout << "\n DEPOIS DE MODIFICAR OS DADOS\n";
    MostrarDados(Aluno01);    
    system("pause");
    return 0;
}  //Aluno01 é o argumento q será colocado no parâmetro Dado da função
void MostrarDados(Aluno Dado)
{   cout << "\n*************** DADOS DO ALUNO ***************\n";
    cout << "\tNome: " << Dado.Nome << endl;
    cout << "\tCurso: " << Dado.Curso << endl;
    cout << "\tSemestre: " << Dado.Semestre << endl;
    cout << "\tMatricula: " << Dado.Matricula << endl;
    cout << "\tMensalidade: " << std::fixed << std::setprecision(2)<< Dado.Mensalidade << " €" << endl;
    cout << "**********************************************\n";
    cout << endl;
}    
void AlterarDados(Aluno &Dado)
{
    Dado.Nome = "Beltrano";
    Dado.Curso = "Engenharia";
    Dado.Semestre = 1;
    Dado.Matricula = 20250702;
    Dado.Mensalidade = 870.99;
}
