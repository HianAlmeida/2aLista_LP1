#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED
#include"Medico.h"
class Cirurgiao : public Medico{
    public:
        Cirurgiao(std::string nome, double altura, double peso);
        virtual void procedimento(std::string paciente, std::string dia, std::string hora);
};

#endif // CIRURGIAO_H_INCLUDED
