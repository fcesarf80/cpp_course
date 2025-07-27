#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Esta é a primeira tela." << std::endl;
    std::cout << "Pressione qualquer tecla para limpar a tela..." << std::endl;
    std::cin.get(); // Aguarda o usuário pressionar Enter

#ifdef _WIN32
    system("CLS"); // Limpa a tela no Windows
#else
    system("clear"); // Limpa a tela em sistemas Unix-like
#endif

    std::cout << "A tela foi limpa!" << std::endl;
    return 0;
}