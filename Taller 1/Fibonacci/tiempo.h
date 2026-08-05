#ifndef TIEMPO_H
#define TIEMPO_H

#include <chrono>
#include <functional>

typedef unsigned long long ull;

// Recibe cualquier funcion o lambda (con o sin parametros capturados) y
// retorna el tiempo de ejecucion en microsegundos.
inline ull medirTiempoEjecucion(std::function<void()> funcion) {
    auto inicio = std::chrono::high_resolution_clock::now();
    funcion();
    auto fin = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(fin - inicio).count();
}

#endif