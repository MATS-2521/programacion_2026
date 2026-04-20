#include "Conversacion.h"
#include <filesystem>
#include <fstream>
#include <iomanip>

void Conversacion::agregarMensaje(const Mensaje& m) {
    mensajes.push_back(m);
}

std::string Conversacion::responderEco(const std::string& entrada) {
    // Devuelve exactamente lo que recibe
    return entrada;
}

void Conversacion::guardarJSON(const std::string& carpetaBase) const {
    auto now = std::time(nullptr);
    char buf[64];
    strftime(buf, sizeof(buf), "%Y-%m-%d_%H-%M-%S", localtime(&now));

    std::filesystem::create_directory(carpetaBase);
    std::filesystem::create_directory(carpetaBase + "/" + std::string(buf));

    nlohmann::json j;
    for (auto& m : mensajes) j.push_back(m.toJSON());

    std::ofstream file(carpetaBase + "/" + std::string(buf) + "/chat.json");
    file << std::setw(4) << j;
}
