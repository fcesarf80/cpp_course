#include<iostream>
#include<fstream>
using namespace std;

int main() {
    //classe ofstream o->out/saída
    //criar variável
    ofstream arquivo;
    arquivo.open("arquivo.txt");
    //escrever no arquivo
    arquivo<<"\nEscrever no arquivo\n";


    return 0;
}




/*#include<iostream>
#include<iomanip>
using namespace std;
struct Produto {
    string nome;
    float preco;
    int quantidade;
};
int main () {
    int Nprod;
    cout<<"Quantos produtos você deseja cadastrar? ";
    cin>>Nprod;
    Produto *produtos=new Produto[Nprod];
    //ler produtos
    for (int i=0; i<Nprod; i++) {
        cout<<"\nNome?";
        getline(cin, produtos[i].nome);
        cout<<"\nPreço?";
        cin>>produtos[i].preco;
        cout<<"Quantidade em stock?";
        cin>>produtos[i].quantidade;
        cin.ignore();
    }
    //Imprimir os produtos e calc total
    float totalStock=0;
    cout<<"Produtos em stock ----------------\n";
    for (int i=0; i<Nprod; i++) {
        float subtotal=produtos[i].preco*produtos[i].quantidade;
        totalStock+=subtotal;
        cout<<fixed<<setprecision(2);
        cout<<"produto"<<i+1<<":\n";
        cout<<"Nome: "<<produtos[i].nome<<" | "<<"Preço: "<<produtos[i].preco<< " | "<<"Quantidade: "<<produtos[i].quantidade<<" | "<< "Subtotal: €"<<subtotal<<endl;
        cout<<" Valor Total em Stock €"<<endl;
    }
    delete [] produtos;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"N elementos? ";
    cin>>n;
    
    int * vetor = new int[n];
    for (int i=0;i<n; i++){
        cin>>vetor[i];
    }
    for (int i=0; i<n; i++){
        cout<<vetor[i]<<" ";
    }
    delete[] vetor;
    return 0;
}*/
/*#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>
using namespace std;
int main() {
    array<float, 5> notas;
for (int i = 0; i < 5; i++) {
    do { cout<< "Digite a nota do "<<i + 1<<"° aluno: ";
          cin >> notas[i];
        } while(notas[i] < 0.0f || notas[i] > 20.0f);  }
    cout<< "\nNotas digitadas: ";
    for (float n : notas) cout << n << " ";
 cout<<"Maior nota:"<<*max_element(notas.begin(),notas.end());
 cout<<"Menor nota:"<<*min_element(notas.begin(), notas.end());
 cout<<"Média:"<<accumulate(notas.begin(),notas.end(),0.0f)/notas.size();
    array<float, 5>notasOrdenadas = notas;
    sort(notasOrdenadas.begin(), notasOrdenadas.end());
    cout <<"\n\u2022 Notas em ordem crescente: ";
    for (float n : notasOrdenadas) cout << n<< " ";
    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
using namespace std;
int main() {  int n;
    cout << "Quantos numeros deseja digitar? ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int> numeros;
    numeros.reserve(n);
    cout << "Digite os numeros:\n";
for(int i = 0; i < n; ++i) { int x; cin >> x;
        numeros.push_back(x);   }   //Exibe
    cout << "\nDigitados: ";
for(int v : numeros) cout <<v<<' ';//maior/menor/media        
    auto[itMin, itMax]= minmax_element(numeros.begin(),
    numeros.end());
    double media = accumulate(numeros.begin(),
    numeros.end(), 0.0) / numeros.size();
    cout<<"Maior: "<<*itMax <<", Menor: "<< *itMin <<
    ",Media: "<< media <<endl; //Exibe ordena crescente
    sort(numeros.begin(), numeros.end());
    cout << "Ordenados: ";
    for(int v : numeros)cout<<v <<' ';//Remove um valor
    cout << "Digite um valor a remover: ";
    int valor; 6cin >> valor;
auto novoFim =remove(numeros.begin(),numeros.end(),valor);
    if (novoFim != numeros.end()) {
        numeros.erase(novoFim, numeros.end());
        cout << "Vector atualizado: ";
 } else { cout<<"Valor nao encontrado.Vector mantido: "; }
    for (int v : numeros) cout << v << ' ';
    return 0;
}*/

/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double num;
    cout << "Digite um número real: ";
    cin >> num;
    if (num >= 0)
    cout << "Raíz quadrada: "<< sqrt(num)<<endl;
    else
cout << "Raíz quadrada: não definida para números negativos!";
    cout << "Número ao quadrado: "<< pow(num, 2)<<endl;
    cout <<"Seno: " << sin(num) << endl;
    cout <<"Coseno: "<< cos(num) << endl;
    if (num > 0)
    cout << "Logaritmo natural: "<< log(num) << endl;
    else
    cout <<"Logaritmo natural: não definido para zero ou números negativos" << endl;
    cout<< "Valor absoluto: " <<fabs(num)<< endl;   
    return 0;
}*/
/*#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main() {
    time_t now = time(0);
    tm* tLocal = localtime(&now);
    char buffer[50];
   strftime(buffer, 50, "%A, %d, %m%Y - %H:%M:%S", tLocal);
    cout << "\nData e hora atual: "<< buffer << endl;
    cout << "\nDigite o seu nome: ";
    time_t inicio = time(0);
    string nome;
    getline(cin, nome);
    time_t fim = time(0);
    double tGasto = difftime(fim, inicio);
    cout << "\nOla, "<< nome << "!"<<endl;
cout<<"Você demorou"<<tGasto<<"seg. para digitar o seu nome";
    return 0;
}*/

/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);
    cout<< "Tamanho: "<<frase.size()<<endl;
    int contA=count(frase.begin(), frase.end(),'a');
    cout<< "Número de 'a': "<<contA<< endl;
    string maiusc = frase;
    transform(maiusc.begin(),maiusc.end(),
    maiusc.begin(),::toupper);
    cout<<"Maiúsculas: " << maiusc << endl;
    string subst = frase;
    size_t pos = 0;
while((pos = subst.find("C++", pos))!=string::npos){
        subst.replace(pos, 3, "C mais mais");
        pos += 11;                               }
    cout <<"Substituída: " << subst << endl;
    string invert = frase;
    reverse(invert.begin(), invert.end());
    cout<< "Invertida: "<< invert<< endl;
    return 0;
}*/
/*#include<iostream>
#include<list>
#include<string>
using namespace std;
int main () {
    list<string>nomes;
    string nome;
    for(int i = 0; i < 5; i++) {
        cout << "Digite um nome: ";
        getline(cin, nome);
        nomes.push_back(nome); }
    cout<< "\nNomes digitados: "<<endl;
for(auto it=nomes.begin();it!=nomes.end();++it) {
        cout << *it << endl;         }
    nomes.sort();
    cout<< "\nNomes ordenados: "<<endl;
for(auto it= nomes.begin();it !=nomes.end(); ++it){
        cout<< *it << endl;                     }
    cout << "\nDigite um nome para procura: ";
    getline(cin, nome);
    bool encontrado = false;
for(auto it=nomes.begin();it !=nomes.end();++it){
        if (*it == nome) { encontrado = true;
        break;      }                         }
    if(encontrado)
    cout<< "O nome está na lista."<<endl;
    else
    cout<< "O nome NÃO consta na lista!"<< endl;
    return 0;
}*/
/*#include<iostream>
#include<list>
#include<string>
#include<iomanip>
using namespace std;
struct Prod {  //Define struct Produto
    string nome;
    float preco;
    int quant; //quantidade
};
int main() {
    list<Prod> produto = {
        {" Café", 2.50f, 2},
        {"Leite", 0.86f, 4},
        {" Pão ", 0.20f, 10},
    };
    float vTotal = 0.0f;
    cout << fixed << setprecision(2);
    cout << "Lista de produtos:\n";
  for (const auto& p : produto) {
      float totalProd = p.preco * p.quant;
      cout << "Nome: "<<p.nome
           << " | Preço: "<<p.preco<< " €"
           << " | Quantidade: "<<p.quant
           << " | Total: "<<totalProd<<" €"<<endl;
           vTotal += totalProd;   }
  cout<<"\nValor da compra: "<<vTotal<<" €"<<endl;
    return 0;
}*/

/*#include<iostream>
#include<list>
#include<string>
using namespace std;
int main() {
  list<string>nomes;
  string nome; //Leitura dos nomes:
  cout<<"Digite cinco nomes: "<<endl;
  for(int i = 0; i<5; i++) {
    cout << i + 1<< "° nome: ";
    getline(cin, nome);
    nomes.push_back(nome);
  } //Percorre interatos/exibe nomes
  cout<<"\nNomes armazenados: "<<endl;
  list<string>::iterator it;
for(it=nomes.begin();it !=nomes.end();++it) 
{  cout << *it << endl; }
  return 0;
}*/
/*#include<iostream>
#include<list>
using namespace std;
int main (){
    list<int>numeros;//Add números a lista    
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    cout<<"\nElementos da lista: ";//Imprime
    for (int num : numeros) {
        cout << num << " "; }//Imprime  lista
    cout<<"Tamanho da lista: "<<numeros.size();
    return 0;
}*/

/*#include <iostream>
#include <fstream>
using namespace std;
struct P {  string nome;
            float altura, peso;
};
int main () {
    P pessoa[5];
    for (int i = 0; i < 5; i++) {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, pessoa[i].nome);
        cout << "Altura: ";
        cin >> pessoa[i].altura;
        cout << "Peso: ";
        cin >> pessoa[i].peso;   }
    ofstream out("data.txt");
    for (int i = 0; i < 5; i++) {
      out << pessoa[i].nome <<"\t"<<pessoa[i]
      .altura<<"\t"<<pessoa[i].peso<<"\t";   }
    out.close();
    ifstream in("data.txt");
    string linha;
    while (getline(in, linha)) {
        cout << linha << endl; }
    in.close();
    return 0;
}*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string name;
    float height, weight;
    cout << "\nQual o seu nome? ";
    getline(cin, name);
    cout << "Qual a sua altura? ";
    cin >> height;
    cout << "Qual o seu peso? ";
    cin >> weight;
    ofstream out("data.txt");
    out << name << " " << height << " " << weight;
    out.close();
    ifstream in("data.txt");
    in >> name >> height >> weight;
    cout<<"\nInformações gravadas: "<<"\nNome: "<<
    name<<"\tAltura: "<<height<<"\tPeso: "<<weight;
    in.close();
    return 0;
}*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main() {            // Escreve no arquivo
    ofstream escrever;
    escrever.open("pet.txt");//Abrir arq escrita
    if (!escrever) {
      cout<<"Erro ao abrir o arquivo para escrita!"<<endl;
      return 1;    }      // Pede ao usuário o nome do pet
    string pet;
    cout << "\nQual e o nome do seu pet? ";
    getline(cin, pet);      // Escreve o nome no arquivo
    escrever << pet << endl;
    escrever.close();          // Leitura do arquivo
    ifstream leitura;
    leitura.open("pet.txt"); // Abrir arquivo para leitura
    if (!leitura) {
      cout << "Erro ao abrir o arquivo para leitura!"<<endl;
      return 1;    }      // Exibir o nome do pet
    string linha;
    cout << "\nO nome do seu pet é:\n";
    while (getline(leitura, linha)) {
        cout << linha << endl;    }
    leitura.close();
    return 0;
}*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main (){                //Abrir para escrita
    fstream arquivo("atividade5_3.txt", ios::out);
    for (int i = 1; i<=5; i++) {
        string clube;
        cout << i << "° Clube: ";
        getline(cin, clube);
        arquivo << clube << endl;
    }
    arquivo.close(); //Fecha após escrever
    arquivo.open("atividade5_3.txt", ios::in);//abrir p leitura
    cout << "\n=== Clubes Arquivados ===" << endl;
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    arquivo.close();// Fecha pós leitura
    return 0;
}*/
/*#include<iostream>
#include<fstream> // biblioteca parea arquivos
using namespace std;
int main() {                
 ifstream arquivo("atividade5_1.txt"); //Abertura arq.
 if (!arquivo.is_open()){ //Verifica abriu correto
     cout << "Erro ao abrir arquivo!" << endl;
     return 1;
    }
   string linha; //Ler/exibir arquivo
   while (getline(arquivo, linha)) {
      cout << linha << endl;
   }
   arquivo.close(); //Fecha arquivo
   return 0;
}*/

/*#include<iostream>
using namespace std;        //Define a estrutura Funcionário
struct Funcionario {char nome[100]; float sal; int age;};
int main() {
    int n;    //Qual a quantidade de funcionários para registro
    cout<<"\nQuantos funcionários deseja registrar? ";
    cin>>n;
    cin.ignore();    //Alocar dinamicamente o vetor Funcionário
    Funcionario* func = new Funcionario[n];//Ler dinamic vetorF
    for (int i = 0; i < n; i++) {       //Ler dados Funcionario
    cout << "Digite o nome do "<< i+1<< "º funcionário: ";
    cin.getline(func[i].nome, 100);         //Ler no + espaços    
    cout<<"Qual o salário do "<< i+1<< "º funcionário: ";
    cin>>func[i].sal;
    cout<<"Qual a idade do "<< i+1<< "º funcionário: ";
    cin>>func[i].age;
    cin.ignore();                           //Clear buff
    }                           //Mostrar todos os funcionários
    cout << "\n === LISTA DE FUNCIONÁRIOS ===\n";
    for (int i = 0; i < n; i++) {
    cout<<func[i].nome<<", "<<func[i].age<<" anos,"<<" salário: "
    <<func[i].sal<<" €"<<endl;
}                //libera a memória alocada dinamicamente
delete[] func;
return 0;
}*/
/*Crie um programa em C++ que: Defina uma struct chamada Funcionario com os campos:nome (array de caracteres com até 100 caracteres) salario (float) idade (int) Solicite ao utilizador o número de funcionários a serem cadastrados.
Alocar dinamicamente um vetor de Funcionario. Peça para o utilizador preencher os dados de cada funcionário. Após o cadastro, o programa deve: Mostrar todos os funcionários cadastrados. Calcular e mostrar a média salarial dos funcionários. Mostrar o funcionário mais velho cadastrado.
Libertar a memória alocada*/

/*Programa em C++ que: defina uma struct chamada Pessoa com os seguintes campos: nome (uma string de até 100 caracteres) e
idade (inteiro). • Solicite ao utilizador o número de pessoas a serem cadastradas. • Utilize alocação dinâmica (new) para criar um vetor de Pessoa. • Peça ao utilizador que preencha os dados (nome e idade) de cada pessoa. • No final, exiba os dados de todas as pessoas cadastradas. • Liberte a memória alocada dinamicamente

#include<iostream>
using namespace std;
struct Pessoa {     //Estrutura Pessoa + nome e idade
    char nome[50];
    int idade;
};
int main () {
    int n;                              //Registros
    cout<<"\nQuantas pessoas você deseja registrar? ";
    cin>>n;
    cin.ignore();                       //Clear buff 
    .               //Cria vetor Pessoas dinâmicamente
Pessoa* pessoa = new Pessoa[n];
for (int i = 0; i < n; i++) { //Le os dados de cada uma
    cout << "Digite o nome da "<< i+1<< "º pessoa: ";
    cin.getline(pessoa[i].nome, 50);//Ler no + espaços    
    cout<<"Qual a idade da "<< i+1<< "º pessoa: ";
    cin>>pessoa[i].idade;
    cin.ignore();                           //Clear buff
}                           //mostra os dados registrados
cout << "\n === LISTA DE PESSOAS ===\n";
for (int i = 0; i < n; i++) {
    cout<<pessoa[i].nome<<", "<<pessoa[i].idade<<" anos.";
}                //libera a memória alocada dinamicamente
delete[] pessoa;
return 0;
}*/
 /*
Programa q solicita ao usuário o número de elementos de um vetor de inteiros. Use alocação dinâmica de memória (new) para criar o vetor. Peça ao utilizador que preencha o vetor com valores inteiros. Calcule e exiba: A soma dos elementos. A média dos elementos. O maior e o menor valor.
Liberte a memória alocada dinamicamente no final do programa.
#include<iostream>
using namespace std;
int main () {
    int n;     //solicita número de elementos do vetor
    cout<<"\nDigite o números de elementos desejado: ";
    cin>>n;            //alocação dinâmica de memória
    int* vetor = new int[n];      //leitura elementos
        for (int i = 0; i< n; i++) {
        cout << "Número "<<i+1 <<": ";
        cin>>vetor[i];
    }                                        //cálculo
        int soma = 0;
        int maior = vetor[0];
        int menor = vetor[0];
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
        if (vetor[i]> maior) maior = vetor[i];
        if (vetor[i]< menor) menor = vetor[i];
    }
    double media = static_cast<double>(soma) / n;
    cout<<"\n\u2022 A soma dos elementos é: "<<soma<<"\t\u2022 A média é: "<< media <<endl;
    cout<<"\u2022 O Maior número é: "<< maior <<"\t\t\u2022 O menor número é: "<< menor <<endl;
    cout<<endl;
    delete[]vetor;//libera memória com delete[]vetor;
    return 0;
    }
*/
/*#include <iostream>

int main() {
    int *ptr = new int; // Alocação dinâmica de um inteiro
    *ptr = 10; // Atribuição do valor 10 ao inteiro alocado
    std::cout << "Valor: " << *ptr << std::endl; // Saída: Valor: 10
    delete ptr; // Liberação da memória alocada
    int *array = new int[5]; // Alocação dinâmica de um array de 5 inteiros
    for (int i = 0; i < 5; i++) {
        array[i] = i * 2;
    }
    std::cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " "; // Saída: Array: 0 2 4 6 8
    }
    std::cout << std::endl;
    delete[] array; // Liberação da memória do array
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
enum TipoFuncionario { Gerente=1, Tecnico=2, Estagiario =3 };
union DadosEspecificos {
    float bonus;
    int numCertific;
    char university[100];
};
struct Funcionario {
    string nome;
    int id;
    TipoFuncionario tipo;
    DadosEspecificos dados;
};
int main() {
    Funcionario func;
    int tipoInput;

    cout << "\nDigite o nome funcionário: ";
    getline(cin, func.nome);

    cout<< "Digite o ID de funcioário: ";
    cin>> func.id;
    cout<< "\nSelecione o tipo de funionário:\n";
    cout<< "[1]Gerencia [2]Técnica [3]Estagios >>Opção? ";
    cin>> tipoInput;
    func.tipo = static_cast<TipoFuncionario>(tipoInput);
    cin.ignore();    //Clear buffer
    switch (func.tipo) {
        case Gerente:
            cout<<"GERENCIA = Adicione o bônus salarial: ";
            cin>>func.dados.bonus;
            break;
        case Tecnico:
            cout<<"Tecnico = Adicione o número de certificações: ";
            cin>>func.dados.numCertific;
            break;
        case Estagiario:
            cout<<"Tecnico = Adicione o nome da universidade: ";
            cin.getline(func.dados.university, 100);
            break;
        default:
            cout<<"\nTipo inválido!\n";;
            return 1;
    }
    cout << "\n === DADOS DO FUNCIONÁRIO ===\n";
    cout << "\u2022 Nome: "<<func.nome<<"\t\u2022 ID: "<<func.id<<endl;
    switch (func.tipo) {
        case Gerente:
          cout<<"\u2022 Tipo: Gerente\t\u2022 Bônus Salarial: "<<func.dados.bonus<<" €"<<endl;
        break;
        case Tecnico:
          cout<<"\u2022Tipo Técnico - Número de Certificações: "<<func.dados.numCertific<<endl;
          break;
        case Estagiario:
          cout<<"\u2022 Tipo Estagiário - universidade: "<<func.dados.university<<endl;
    }    
    return 0;
}*/
/*Atividade nº 5 - Módulo 3
Programa que utiliza struct, union e enum para armazenar e exibir informações, solicitadas sobre funcionários de uma empresa, com suas funções e atributos específico: Gerente → Bonus salarial (float), Técnico → Número de certificações (int) e Estagiário → Universidade em que estuda (string);

/*#include<iostream>
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
}*/
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
}  */