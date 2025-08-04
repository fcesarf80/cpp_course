
//Cadastro Livros com quantidade informada pelo usuário
// vetores dinâmicos(vetor)
//Código qual não se sabe a quantidade de livros que sarão
//cadastrados, ou seja, é preciso usar um vetor que possa
//ser declarado vazio e depois que seja permitido a este
//vetor aumentar de tamanho durante a execução do programa.
#include<iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;
//uma struct de nome Livro capaz de armazenar ID, Titulo e Autor
struct Livro
{   int ID;
    string Titulo;
    string Autor;
};
int main()
{    setlocale(LC_ALL, "portuguese");
    //Aqui serácriado na memória quando da execução do programa
    //um vetor que vai armazenar em cada índice uma struct Livro
    vector<Livro> livros;
    int quantidade;
    cout << "\nInforme o número de livros para o cadastro: ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++)
    {  Livro Cadastro; //Necessário criar um objeto struct que será
     //usado para armazenar cada uma das informações de cada livro,
     //a cada passada do 'for' este objeto conterá as informações
     //digitadas pelo usuário e depois este objeto será adicionado 
     //como novo elemengto de vetor livros
        cout << "\t*** CADASTRO DE LIVROS ***\n";
        cout << "Digite o ID do Livro: " << i + 1 << " : ";
        cin >> Cadastro.ID;
        cin.ignore(); //cin.ignore()*
        cout << "Digite o Titulo do Livro: " << i + 1 << " : ";
        getline(cin,Cadastro.Titulo); //obtenha linha = getline
        cout <<"Digite Autor do livro: " << i + 1 << " : ";
        getline(cin,Cadastro.Autor);
     //Aqui a struct Cadastro que foi cadastrada com as informações
     //será colocada sempre no final do vetro. Isso criará um novo
     //elemento a cada passada do for, até sair do loop
        livros.push_back(Cadastro);
        system("CLS");
    }
    cout << "\n\t**** DADOS DOS LIVROS ****\n";

    for(int i = 0; i < livros.size(); i++)
    {   //é um vetor de struct Livro, logo cada indice deste vetor
        //contem um struct livro. Logo para colocar as informações
        //de cada struct na tela usaremos o índice [i]
        cout<< "ID: " << livros[i].ID;
        cout << "- Titulo: " << livros[i].Titulo;
        cout << "- Autor: " << livros[i].Autor;
        cout << "\n____________________________________\n";
        cout << "************************************\n";
    }
  system("pause");
  return 0;

}
//*cin.ignore() é usado para ignorar um ou mais caracteres no buffer de entrada. Geralmente, é usado após operações de leitura com cin >> para remover o caractere de nova linha (\n) deixado no buffer, evitando problemas com leituras subsequentes com getline() ou outras funções de leitura de linha. 

/*#include <iostream>
#include <string>

struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
    int Ano;
};

int main()
{
    //Cria um vetor (array) de structs. Cada índice do vetor
    //terá dentro dele uma struct do tipo Livro. Assim, para
    //ler ou escrever dados nesta struct usamos NomeDaVariavelStruct[índice].campodesejado; ex.:livro[3].Titulo = "Alice"; como temos
    //índices podemos percorrer estes vetor de struct via 'loop for'.

	struct Livro livro[5];
    for(int i = 0; i < 5; i++)
    {
        std::cout << "\n*** Cadastro de Livros ***" << "\n";
        std::cout << "\nDigite ID do Livro:" << i+1 << " : ";
        std::cin >> livro[i].ID;

	    std::cout << "\nDigite o Título do Livro:" << i+1 << " : ";
	
	    std::cin.ignore();
	    std::getline(std::cin, livro[i].Titulo);

	    std::cout << "\nDigite o Autor do Livro:" << i+1 << " : ";
	    std::getline(std::cin, livro[i].Autor);

	    std::cout << "\nDigite A Editora do Livro:" << i+1 << " : ";
	    std::getline(std::cin, livro[i].Editora);
        // system("CLS");
    }

    std::cout << "******** DADOS DOS LIVROS ********";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nID: " << livro[i].ID << "\n";
	    std::cout << "Titulo: " << livro[i].Titulo << "\n";
	    std::cout << "Autor: " << livro[i].Autor << "\n";
	    std::cout << "Editora: " << livro[i].Editora << "\n";
        std::cout << "--------------------------------------";
        std::cout << std::endl;
    }	
    std::cout << "**********************************";
	system("PAUSE");
	return 0;
}*/