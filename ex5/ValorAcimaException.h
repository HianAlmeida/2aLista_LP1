#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include<exception>
#include<string>
class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException()throw();
        virtual ~ValorAcimaException()throw();
        virtual std::string what();
    private:
        std::string mensagem = "Valor acima do permitido";

};

#endif // VALORACIMAEXCEPTION_H
