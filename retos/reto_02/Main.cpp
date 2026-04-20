#include <iostream>
#include "Conversacion.h"

int main() {
    Conversacion chat;
    std::string entrada;

    std::cout << "Escribe un mensaje (ENTER para enviar): ";
    std::getline(std::cin, entrada);

    // Mensaje del usuario
    Mensaje usuario("usuario", entrada);
    chat.agregarMensaje(usuario);

    // Respuesta en modo eco
    std::string respuesta = chat.responderEco(entrada);
    Mensaje sistema("sistema", respuesta);
    chat.agregarMensaje(sistema);

    // Mostrar respuesta
    std::cout << "Respuesta: " << respuesta << std::endl;

    // Guardar conversación en JSON (carpeta por fecha/hora)
    chat.guardarJSON();

    return 0;
}
