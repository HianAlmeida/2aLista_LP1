#ifndef COMISSIONADOS_H_INCLUDED
#define COMISSIONADOS_H_INCLUDED
#include"Funcionario.h"

class Comissionados : public Funcionario{
    private:
        double salario;
        double vendas;
    public:
        double calcularSalario();
        Comissionados(double salario, double vendas, std::string nome, int matricula);


};

#endif // COMISSIONADOS_H_INCLUDED
