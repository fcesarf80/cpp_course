#include <iostream>
#include <string>

int main()
{ 
    float Notas[5]{0.0f};
    float Media, Soma{ 0.0 };//Importante inicializa variáveis contadoras
    int i;
    std::string NomeAluno;

    std::cout << "\nDigite o nome do Aluno: ";
    std::cin >> NomeAluno;

    //Nesta for o i vai de 0 até 4

    for (int i = 0; i <= 4; i++)
    {
        std::cout << "\nDigite a nota " << (i+1) << ": ";
        std::cin >> Notas[i];
        Soma = Soma + Notas[i];
        system("CLS");
    }

    //std::cout << "\nDigite a primeira nota: ";
    //std::cin >> Notas[0];

    //std::cout << "\nDigite a segunda nota: ";
    //std::cin >> Notas[1];

    //std::cout << "\nDigite a terceira nota: ";
    //std::cin >> Notas[2];

    //std::cout << "\nDigite a quarta nota: ";
    //std::cin >> Notas[3];

    //std::cout << "\nDigite a quinta nota: ";
    //std::cin >> Notas[4];

    //precisamos de uma variavel que acumule a soma das notas!
    Soma = Soma + Notas[i];
    Media = Soma /5;
       
    std::cout << "\nA média das notas do aluno foi: " << Media << "\n\n";

    system("Pause");
    return 0;
}

