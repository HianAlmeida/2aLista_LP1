#ifndef OTORRINO_H_INCLUDED
#define OTORRINO_H_INCLUDED
#include "Medico.h"
class Otorrino : public Medico{
    public:
        Otorrino(std::string nome, double altura, double peso);
        virtual void procedimento(std::string paciente, std::string dia, std::string hora);
};
#endif // OTORRINO_H_INCLUDED
