#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <vector>
#include <string>
#include "Mensaje.h"

class Conversacion {
private:
    std::vector<Mensaje> mensajes;

public:
    Conversacion() = default;

    void agregarMensaje(const Mensaje& m);
    std::string responderEco(const std::string& entrada) const;
    void guardarJSON(const std::string& carpetaBase = "conversaciones") const;
};

#endif // CONVERSACION_H
