#pragma once
#include "Pessoa.h"
using namespace std;
class Professor : public Pessoa
{
    string Departamento;
    void EfetuarChamada();
    void EntregarPauta();
};