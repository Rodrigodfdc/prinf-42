# ft_printf

*Este proyecto ha sido creado como parte del currículo de 42 por rodde-fr.*

## English

### Description
This project is a custom implementation of the `printf` function in C, named `ft_printf`. It supports various format specifiers including `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`. The goal is to replicate the behavior of the standard `printf` function while adhering to the 42 School's coding standards and constraints.

The implementation uses variadic functions (`va_list`) to handle variable arguments and recursive helper functions to convert numbers to their string representations. This approach ensures efficiency and modularity.

### Instructions
To compile the project, use the provided Makefile:

```bash
make
```

This will generate a static library `libftprintf.a` in the root directory.

To use `ft_printf` in your code:
1. Include the header: `#include "ft_printf.h"`
2. Link the library when compiling: `cc your_file.c libftprintf.a`

Example usage:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! Number: %d\n", "world", 42);
    return 0;
}
```

### Resources
- [printf(3) - Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- C Standard Library documentation for variadic functions and I/O operations.
- AI Usage: GitHub Copilot was used to assist in generating boilerplate code, debugging syntax errors, and suggesting optimizations in the implementation of helper functions like `ft_putnbr` and `ft_puthex`. It helped in structuring the recursive algorithms for number conversion.

### Algorithm and Data Structure Choices
The algorithm leverages C's variadic argument handling (`va_start`, `va_arg`, `va_end`) to parse format strings and extract arguments dynamically. For each format specifier, dedicated helper functions are called, which use recursion to convert integers and pointers to strings. This recursive approach is simple and effective for base conversion (e.g., decimal to binary for hex).

Data structures are minimal: primarily strings for output and unsigned integers for calculations. No complex data structures are needed, keeping the implementation lightweight and focused on the core functionality.

## Español

### Descripción
Este proyecto es una implementación personalizada de la función `printf` en C, llamada `ft_printf`. Soporta varios especificadores de formato, incluyendo `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` y `%%`. El objetivo es replicar el comportamiento de la función `printf` estándar mientras se adhiere a los estándares y restricciones de codificación de la Escuela 42.

La implementación utiliza funciones variádicas (`va_list`) para manejar argumentos variables y funciones auxiliares recursivas para convertir números a sus representaciones en cadena. Este enfoque asegura eficiencia y modularidad.

### Instrucciones
Para compilar el proyecto, utiliza el Makefile proporcionado:

```bash
make
```

Esto generará una biblioteca estática `libftprintf.a` en el directorio raíz.

Para usar `ft_printf` en tu código:
1. Incluye el encabezado: `#include "ft_printf.h"`
2. Enlaza la biblioteca al compilar: `cc tu_archivo.c libftprintf.a`

Ejemplo de uso:
```c
#include "ft_printf.h"

int main() {
    ft_printf("¡Hola, %s! Número: %d\n", "mundo", 42);
    return 0;
}
```

### Recursos
- [printf(3) - Página del manual de Linux](https://man7.org/linux/man-pages/man3/printf.3.html)
- Documentación de la Biblioteca Estándar de C para funciones variádicas y operaciones de E/S.
- Uso de IA: GitHub Copilot se utilizó para ayudar en la generación de código boilerplate, depuración de errores de sintaxis y sugerencias de optimizaciones en la implementación de funciones auxiliares como `ft_putnbr` y `ft_puthex`. Ayudó en la estructuración de los algoritmos recursivos para la conversión de números.

### Elección del Algoritmo y Estructura de Datos
El algoritmo aprovecha el manejo de argumentos variádicos de C (`va_start`, `va_arg`, `va_end`) para analizar cadenas de formato y extraer argumentos dinámicamente. Para cada especificador de formato, se llaman funciones auxiliares dedicadas, que utilizan recursión para convertir enteros y punteros a cadenas. Este enfoque recursivo es simple y efectivo para la conversión de bases (por ejemplo, decimal a binario para hexadecimal).

Las estructuras de datos son mínimas: principalmente cadenas para salida y enteros sin signo para cálculos. No se necesitan estructuras de datos complejas, manteniendo la implementación ligera y enfocada en la funcionalidad principal.
