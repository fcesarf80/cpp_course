#include<iostream>
using namespace std;
//Classe Base também chamada de Superclasse, Pai/Mãe
class Base
{
    public:
        void SolicitarNumeros()
        {
            cout << "\nNum1: ";
            cin >> Num1;
            cout << "Num2: ";
            cin >> Num2;
            MostrarResultado(Num1, Num2);
        }
    private:
        float Num1, num2;
        float Soma(int Num1, int Num2);
        {
            return (Num1 + Num2);
        }
        void MostrarResultado(int Num1, int Num2)
        {
            cout << "\nSoma de: " Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n\n";
        }
};
    Class Derivada :public Base{};

int main()
{
    Derivado Obj;
    Obj.SolicitarNumeros();
    system("Pause");
    return 0;
}