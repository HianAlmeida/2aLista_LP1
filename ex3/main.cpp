#include"Assalariado.cpp"
#include"Funcionario.cpp"
#include"Horistas.cpp"
#include"Comissionados.cpp"
#include"Comissionados.h"
#include<iostream>
using namespace std;


int main(){
    Funcionario *a1 = new Assalariado(1000, "Joao", 2019);

    cout << "Nome:" << a1->getNome() << "\nMatricula: " << a1->getMatricula() << "\nSalario: " << a1->calcularSalario() << endl;

    Funcionario *c1 = new Comissionados(100, 25, "Pedro", 2030);

    cout << "Nome:" << c1->getNome() << "\nMatricula: " << c1->getMatricula() << "\nSalario: " << c1->calcularSalario() << endl;

    Funcionario *h1 = new Horistas(1000, 25, "Carlos", 2000);

    cout << "Nome:" << h1->getNome() << "\nMatricula: " << h1->getMatricula() << "\nSalario: " << h1->calcularSalario() << endl;
}
