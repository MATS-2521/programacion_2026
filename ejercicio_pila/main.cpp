#include "custom_stack.h"
#include <iostream>

int main(){
    CustomStack mi_pila;

    mi_pila.push(1);

    mi_pila.push(2);
    
    mi_pila.push(3);

    std::cout <<"tamaño de la pila:" << mi_pila.size() << std::endl;

    mi_pila.pop();

    std::cout <<"ultimo valor de la pila:" <<mi_pila.top() << std::endl;


    return 0;
}
