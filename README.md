# ft_printf / ft_printf

*Este proyecto ha sido creado como parte del currículo de 42 por rodde-fr.*

---

**English**

## Description
`ft_printf` is a small reimplementation of the C standard library `printf` function. The project implements support for the following conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%`.

The objective is to reproduce the expected behaviour of `printf` for the supported conversions while following the coding rules of the 42 curriculum (no forbidden functions, clear modular design, and robust handling of edge cases).

## Instructions
To build the project, run:

```bash
make
```

This builds an archive `libftprintf.a` in the project root (object files are created in the `objects/` folder).

To compile and run the provided test `main.c`:

```bash
cc main.c libftprintf.a -o test_ft_printf
./test_ft_printf
```

To use `ft_printf` in your own program:

1. Include the header: `#include "ft_printf.h"`
2. Link `libftprintf.a` when compiling your program.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "world", 42);
    return 0;
}
```

## Resources
- `printf(3)` manual: https://man7.org/linux/man-pages/man3/printf.3.html
- C99/C11 standard references for variadic functions and integer types
- Tutorials on variadic functions and base conversions (search for "C va_list tutorial", "itoa recursive base conversion")

AI usage
- An AI assistant was used to draft and proof the README content and to suggest minor code and test improvements. Specifically, AI helped with: organizing test cases in `main.c`, drafting example usage, and wording of algorithm justification. All source code logic and final edits were reviewed and adjusted manually.

## Algorithm and Data Structures — Design & Justification
Choice summary:

- Argument parsing: the implementation relies on C variadic functions (`va_start`, `va_arg`, `va_end`) to extract arguments dynamically from the call site. This is the canonical method for implementing `printf`-like functions in C.

- Per-specifier handlers: each supported conversion specifier is implemented by a dedicated helper function (for example: `ft_putchar`, `ft_putstr`, `ft_putnbr`, `ft_putunsigned`, `ft_puthex`, `ft_puthex_upper`, `ft_putptr`). This keeps the core parser (`ft_printf`) small and the conversion logic isolated and testable.

- Numeric conversion: integer-to-string conversion is implemented using iterative/recursive routines that perform repeated division and modulus operations in the target base (10 for decimal, 16 for hexadecimal). Using recursion or simple loops produces predictable stack and time behaviour; both approaches yield O(k) time where k is the number of digits.

- Pointer formatting: pointers are cast to an unsigned integer type large enough to hold addresses (`unsigned long` / `uintptr_t`) and converted to hexadecimal with a `0x` prefix. `NULL` pointers are printed as `(nil)` to match common `printf` behaviour.

- Data structures: the implementation uses primitive C types (chars, ints, unsigned ints, `void *`) and short buffers when necessary. No dynamic memory allocation or complex data structures are required, which reduces overhead and keeps the project compliant with 42 constraints.

Complexity and safety considerations:

- Time complexity is linear in the number of characters written; each conversion produces characters proportional to the number of digits or bytes required to represent the value.
- Memory usage is minimal and stack-based; avoid heap allocations to keep the code simple and safe under 42 rules.

---

**Español**

## Descripción
`ft_printf` es una reimplementación reducida de la función `printf` de la biblioteca estándar en C. El proyecto soporta las conversiones: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` y `%%`.

El objetivo es reproducir el comportamiento esperado de `printf` para las conversiones soportadas, respetando las normas del currículo de 42 (sin funciones prohibidas, diseño modular y manejo correcto de casos límite).

## Instrucciones
Para compilar el proyecto, ejecuta:

```bash
make
```

Esto genera el fichero `libftprintf.a` en la raíz del proyecto (los objetos se colocan en la carpeta `objects/`).

Para compilar y ejecutar el `main.c` de pruebas incluido:

```bash
cc main.c libftprintf.a -o test_ft_printf
./test_ft_printf
```

Para usar `ft_printf` en tu propio código:

1. Incluye el encabezado: `#include "ft_printf.h"`
2. Enlaza `libftprintf.a` al compilar tu programa.

Ejemplo:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("¡Hola %s, número: %d\n", "mundo", 42);
    return 0;
}
```

## Recursos
- Manual `printf(3)`: https://man7.org/linux/man-pages/man3/printf.3.html
- Referencias del estándar C sobre funciones variádicas y tipos enteros
- Tutoriales sobre `va_list` y conversiones entre bases

Uso de IA
- Se ha utilizado un asistente de IA para redactar y estructurar este README y para sugerir pruebas y mejoras menores en el `main.c`. Las decisiones finales y las implementaciones fueron validadas y ajustadas manualmente.

## Elección del algoritmo y estructura de datos — Justificación

- Parsing de argumentos: se emplea el mecanismo variádico de C (`va_start`, `va_arg`, `va_end`) porque es el método estándar y eficiente para funciones con número variable de argumentos.

- Handlers por especificador: cada especificador tiene su propia función encargada de formatear y devolver el número de caracteres escritos. Esto facilita la lectura, el testeo y el mantenimiento.

- Conversión numérica: la conversión de enteros a cadenas utiliza divisiones sucesivas por la base correspondiente (10 o 16). Este método es directo, eficiente y sencillo de verificar.

- Punteros: los punteros se castean a un entero sin signo suficientemente grande y se imprimen en base hexadecimal con prefijo `0x`. Los punteros `NULL` se representan como `(nil)` para coincidir con el comportamiento esperado.

- Estructuras de datos: se emplean sólo tipos primitivos y buffers locales; no se usa memoria dinámica para minimizar la complejidad y los riesgos.

---

If you want, I can also:

- Add a short section with a matrix of implemented vs. missing features.
- Run tests over `printfTester/` and add a short note about compatibility with the provided tester.

File updated: `/home/rodde-fr/Documents/printf/README.md`

## Makefile targets / Objetivos del Makefile

The repository provides a Makefile with the following commonly used targets:

- `make` (or `make all`): build the static library `libftprintf.a`. Object files are placed in `objects/`.
- `make clean`: remove generated object files and the `objects/` directory.
- `make fclean`: run `make clean` and also remove the archive `libftprintf.a`.
- `make re`: perform `fclean` followed by a full rebuild (`make all`).

Usage examples:

```bash
# build the library
make

# clean object files
make clean

# remove library and objects
make fclean

# rebuild from scratch
make re
```

Notas (Español):

- `make` compila los archivos fuente y crea `libftprintf.a` en la raíz.
- `make clean` borra la carpeta `objects/` con los .o.
- `make fclean` además borra `libftprintf.a`.
- `make re` limpia todo y recompila.

These targets are implemented in the provided `Makefile`. Use them to keep your build artifacts tidy and to reproduce clean builds.
🧪 PrintfTester

PrintfTester es una herramienta comunitaria diseñada para comparar el comportamiento de tu ft_printf con el de la función estándar printf. Es especialmente útil para validar la precisión, robustez y compatibilidad de tu implementación.
Instalación

    Clona el repositorio:

    git clone https://github.com/Tripouille/printfTester.git

    Accede al directorio del tester:

    cd printfTester

Ejecución de pruebas

    Tests obligatorios:

    make m

    Tests de bonus:

    make b

    Todos los tests (obligatorios + bonus):

    make a

    Limpiar archivos generados:

    make fclean

