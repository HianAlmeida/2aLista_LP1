#include"Otorrino.h"
Otorrino::Otorrino(std::string nome, double altura, double peso){
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}
void Otorrino::procedimento(std::string paciente, std::string dia, std::string hora){
    std::cout << "Consulta Otorrino "
              << "Dr(a): " << nome
              << "\nPaciente: "<< paciente << "\nData: "<< dia << " - " << hora<< std::endl;
}
