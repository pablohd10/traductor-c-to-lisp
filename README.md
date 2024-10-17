# Traductor de C a Lisp

Este proyecto implementa un traductor que convierte programas escritos en C a Lisp utilizando una gramática definida en un archivo Yacc/Bison. El traductor procesa el código fuente en C y genera su equivalente en Lisp, permitiendo así la traducción entre estos dos lenguajes.

## Estructura del proyecto

El proyecto está organizado en los siguientes archivos y carpetas:

### Archivos principales
- `trad.y`: Contiene la gramática para la traducción de C a Lisp. Este archivo define las reglas de análisis sintáctico necesarias para el traductor.
  
- `trad.pdf`: Código de trad.y en formato pdf.
  
- `memoria.pdf`: Un documento adicional que describe el proceso de desarrollo y las decisiones de diseño tomadas para el proyecto.

### Carpeta de pruebas (`pruebas/`)
Contiene tres conjuntos de pruebas escritas en C, diseñadas para validar la funcionalidad del traductor. Estas pruebas están organizadas en subcarpetas:

- **iniciales/**: Casos de prueba básicos para validar el funcionamiento inicial del traductor (e.g., `factorial1.c`, `while1.c`).
  
- **avanzadas/**: Casos de prueba más complejos que incluyen estructuras y funciones avanzadas del lenguaje C (e.g., `fibonacci3.c`, `potencias1.c`).
  
- **adicionales/**: Casos de prueba que cubren estructuras adicionales como vectores, sentencias globales y control de flujo (e.g., `for.c`, `if.c`, `vectores.c`).

## Requisitos

- **Bison/Yacc**: Necesario para procesar el archivo `trad.y` y generar el traductor.
  
- **GCC**: Para compilar los programas de prueba en C.

## Ejecución

1. Utiliza Bison o Yacc para procesar el archivo `trad.y` y generar el parser correspondiente:
   ```bash
   bison -d trad.y
   
   gcc -o trad trad.tab.c
   ```
