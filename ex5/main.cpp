#include <iostream>
#include"TestaValidaNumero.h"

using namespace std;

int main()
{
    TestaValidaNumero *n = new TestaValidaNumero();

    try{
        //n->validaNumero(-15);
        //n->validaNumero(200);
        n->validaNumero(1500);
    }
    catch(ValorAbaixoException excep){
        std::cerr << excep.what() << std::endl;
    }
    catch(ValorAcimaException excep){
        std::cerr << excep.what() << std::endl;
    }
    catch(ValorMuitoAcimaException excep){
        std::cerr << excep.what() << std::endl;
    }

    return 0;
}
