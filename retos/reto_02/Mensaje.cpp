#include "Mensaje.h"

Mensaje::Mensaje(const std::string& a, const std::string& c)
    : autor(a), contenido(c), timestamp(std::time(nullptr)) {}

nlohmann::json Mensaje::toJSON() const {
    return {
        {"autor", autor},
        {"contenido", contenido},
        {"timestamp", timestamp}
    };
}
