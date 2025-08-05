#pragma once
#include "Pessoa.h"
using namespace std;
class Aluno:public Pessoa
{
    string Curso;
    void RealizarProva();
};