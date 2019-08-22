#include"Comissionados.h"
double Comissionados::calcularSalario(){
    return salario + (salario* 0.15 * vendas);
}

Comissionados::Comissionados(double salario, double vendas, std::string nome, int matricula){
    this->salario = salario;
    this->vendas = vendas;
    this->matricula = matricula;
    this->nome = nome;
}
