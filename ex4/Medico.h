#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED
#include<string>
#include<iostream>

class Medico{
    protected:
        std::string nome;
        double altura;
        double peso;
    public:
        virtual void procedimento(std::string paciente, std::string dia, std::string hora) = 0;
};

#endif // MEDICO_H_INCLUDED
