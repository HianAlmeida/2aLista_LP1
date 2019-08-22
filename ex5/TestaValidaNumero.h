#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H
#include"ValorAbaixoException.h"
#include"ValorAcimaException.h"
#include"ValorMuitoAcimaException.h"
class TestaValidaNumero
{
    public:
        TestaValidaNumero();
        virtual ~TestaValidaNumero();
        void validaNumero(int numero);
};

#endif // TESTAVALIDANUMERO_H
