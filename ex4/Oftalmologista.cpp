#include"Oftalmologista.h"
Oftalmologista::Oftalmologista(std::string nome, double altura, double peso){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}
void Oftalmologista::procedimento(std::string paciente, std::string dia, std::string hora){
    std::cout << "Consulta Oftalmologista "
              << "Dr(a): " << nome
              << "\nPaciente: "<< paciente << "\nData: "<< dia << " - " << hora<< std::endl;
}
