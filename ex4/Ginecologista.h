#ifndef GINECOLOGISTA_H_INCLUDED
#define GINECOLOGISTA_H_INCLUDED
#include"Medico.h"
class Ginecologista : public Medico{
    public:
        Ginecologista(std::string nome, double altura, double peso);
        virtual void procedimento(std::string paciente, std::string dia, std::string hora);
};


#endif // GINECOLOGISTA_H_INCLUDED
