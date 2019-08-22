#ifndef OFTALMOLOGISTA_H_INCLUDED
#define OFTALMOLOGISTA_H_INCLUDED
#include"Medico.h"
class Oftalmologista : public Medico{
    public:
        Oftalmologista(std::string nome, double altura, double peso);
        virtual void procedimento(std::string paciente, std::string dia, std::string hora);
};


#endif // OFTALMOLOGISTA_H_INCLUDED
