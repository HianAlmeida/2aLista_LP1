#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include<exception>
#include<string>

class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException()throw();
        virtual ~ValorMuitoAcimaException()throw();
        virtual std::string what();
    private:
        std::string mensagem = "Valor muito acima do permitido";
};

#endif // VALORMUITOACIMAEXCEPTION_H
