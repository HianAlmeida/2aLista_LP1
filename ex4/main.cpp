#include"Cirurgiao.cpp"
#include "Otorrino.cpp"
#include "Ginecologista.cpp"
#include "Oftalmologista.cpp"

int main(){
    Medico *c1 = new Cirurgiao("Carlos", 1.80, 85);
    c1->procedimento("Joao", "21/10/2019", "14:00");

    Medico *otorrino = new Otorrino("Maria", 1.65, 65);
    otorrino->procedimento("Hian", "10/10/2019", "15:00");

    Medico *ginecologista = new Ginecologista("Rafaela", 1.75, 70);
    ginecologista->procedimento("Ianny", "10/10/2019", "15:00");

    Medico *oftalmologista = new Oftalmologista("Diniz", 1.68, 85);
    oftalmologista->procedimento("Hian", "25/10/2019", "15:00");





}
