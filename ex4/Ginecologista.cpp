#include"Ginecologista.h"
Ginecologista::Ginecologista(std::string nome, double altura, double peso){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}
void Ginecologista::procedimento(std::string paciente, std::string dia, std::string hora){
    std::cout << "Consulta Ginecologista"
              << "Dr(a): " << nome
              << "\nPaciente: "<< paciente << "\nData: "<< dia << " - " << hora<< std::endl;
}
