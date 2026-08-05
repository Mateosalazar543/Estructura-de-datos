#include "fibonnaci.h"
#include "tiempo.h"

int main(int argc, char const *argv[])
{
    if(argc < 2) {
        std::cerr << "Argumento esperado: " << argv[0] << " <n>" << std::endl;
        return 1;
    }
    int n = std::atoi(argv[1]);
    ull tiempoMicrosegundos = medirTiempoEjecucion([n](){
        ull res = fibonacci(n);
        std::cout << "Fib(" << n << ") = " << res << std::endl;
    });
    std::cout << "Tiempo de ejecucion: " << tiempoMicrosegundos << " microsegundos" << std::endl;
    return 0;
}
