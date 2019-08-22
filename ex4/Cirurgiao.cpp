#include"Cirurgiao.h"
Cirurgiao::Cirurgiao(std::string nome, double altura, double peso){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}
void Cirurgiao::procedimento(std::string paciente, std::string dia, std::string hora){
    std::cout << "Cirurgia "
              << "Dr(a): " << nome
              << "\nPaciente: "<< paciente << "\nData: "<< dia << " - " << hora<< std::endl;
}
