#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include<exception>
#include<string>
class ValorAbaixoException : public std::exception{
    public:
        ValorAbaixoException()throw();
        virtual ~ValorAbaixoException()throw();
        virtual std::string what();
    private:
        std::string mensagem = "Valor abaixo de zero";
};

#endif // VALORABAIXOEXCEPTION_H
