#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>
#include <ctime>
#include <nlohmann/json.hpp>

class Mensaje {
public:
    std::string autor;
    std::string contenido;
    std::time_t timestamp;

    Mensaje() = default;
    Mensaje(const std::string& a, const std::string& c);

    nlohmann::json toJSON() const;
};

#endif // MENSAJE_H
