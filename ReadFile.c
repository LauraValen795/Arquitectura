#include <stdio.h>  // Print y scaner
#include <dirent.h> // Abrir, Cerrar y Leer
#include <sys/stat.h> // Informacion o stats

void analizar_directorio(char *ruta);
void mostrar_resultados();

// Estructura para almacenar los tamaños de los archivos y su frecuencia
typedef struct {
    long long int tamano;
    int frecuencia;
} TArchivo;

// Arrreglo (tamaños y frecuencia)
TArchivo archivos[1000]; // Tamaño 

int main() {
    char ruta[100];
    printf("Ingrese la ruta del directorio: ");
    scanf("%s", ruta);
    analizar_directorio(ruta);
    mostrar_resultados();
    return 0;
}

// Función para analizar un directorio recursivamente
void analizar_directorio(char *ruta) {
}

// Función para mostrar los resultados
void mostrar_resultados() {
}