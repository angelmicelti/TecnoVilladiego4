# Resolución de un problema completo de Electrónica Digital

**Cierta máquina disponible en el aula de Tecnología tiene tres interruptores (A, B y C) para su puesta en marcha, la cual se producirá al cumplirse estas condiciones: A y B tienen que activarse conjuntamente para que la máquina funcione. Basta que el interruptor C esté activado para que la máquina también funcione, independientemente del estado de A y B.**

<a name="top"></a>
PASOS QUE VAMOS A SEGUIR SIEMPRE:
1. [Identificación de las variables y la(s) función(es) lógica(s)](#Punto1)
2. [Tabla de verdad del sistema](#Punto2)
3. [Función lógica con minitérminos y maxitérminos](#Punto3)
4. Implementación de la función sin simplificar SOP
5. Implementación de la función sin simplificar POS
6. Simplificación por el método de los diagramas de Karnaugh
7. Implementación con puertas lógicas cualesquiera
8. Implementación sólo con puertas NAND
9. Implementación sólo con puertas NOR
10. Montaje práctico
  a. Con puertas cualesquiera
  b. Sólo con puertas NAND
  c. Sólo con puertas NOR
11. Trabajando en FPGA
  a. Implementación del problema con puertas lógicas
  b. Implementación del problema con una tabla
  c. Implementación del problema en Verilog

<a name="Punto1"></a>
## 1. Identificación de las variables y la función lógica

Si recordamos, las **variables binarias** son aquéllas que pueden tomar únicamente dos valores: 0 y 1, apagado y encendido, desconectado y conectado, bajo y alto, etc., y sólo dependen de ellas mismas.
Así pues, parece claro que los interruptores A, B y C serán nuestras variables lógicas. Por tanto, tenemos un problema de **tres variables lógicas**.
En cambio, el estado de la máquina (que podemos llamar, por ejemplo, M para abreviar) que también es binario (la máquina puede estar activada o desactivada) no es una variable lógica. Como el estado de la máquina depende los valores de A, B y C, diremos que **M es la función lógica**.

[Subir](#top)

<a name="Punto2"></a>
## 2. Tabla de verdad del sistema

Para obtener la tabla de verdad, tenemos que tener en cuenta que:
- Habrá una columna por cada variable y otra para la función. Como hay tres variables, tendremos un total de cuatro columnas. Por cierto, llamaré "n" al número de variables. Entonces, n=3.

- Habrá 2<sup>n</sup> filas (aparte del encabezado de la tabla, lógicamente). Como n = 3, habrá 2<sup>3</sup> = 8 filas.
Una vez dibujada la tabla, la rellenamos con las combinaciones binarias de A, B y C, dispuestas en orden creciente.
A mí me gusta añadir una columna a la izquierda, indicando el equivalente decimal de la combinación binaria de A, B y C. Quedaría así:

Dec  | A  | B  | C  | M
--|---|---|---|--
0 | 0  | 0  | 0  | 0
1  | 0  | 0  | 0  | 1
2  | 0  | 0  | 1  | 0
3  | 0  | 0  | 1  | 1
4  | 0  | 1  | 0  | 0
5  | 0  | 1  | 0  | 1
6  | 0  | 1  | 1  | 1
7  | 0  | 1  | 1  | 1


[Subir](#top)

<a name="Punto3"></a>
## 3. Funciones lógicas con minterms y maxterms

**Expresión SOP (Sum Of Products)**



![Expresión de la función como suma de productos (SOP)](SOP1.jpg)


**Expresión POS (Product Of Sums)**



![Expresión de la función como suma de productos (SOP)](POS1.jpg)


[Subir](#top)

<a name="Punto4"></a>
4. Implementación de la función sin simplificar SOP


<a name="Punto5"></a>

5. Implementación de la función sin simplificar POS

<a name="Punto6"></a>
6. Simplificación por el método de los diagramas de Karnaugh



<a name="Punto7"></a>
7. Implementación con puertas lógicas cualesquiera



<a name="Punto8"></a>
8. Implementación sólo con puertas NAND





<a name="Punto9"></a>
9. Implementación sólo con puertas NOR



<a name="Punto10"></a>
10. Montaje práctico
  a. Con puertas cualesquiera
  b. Sólo con puertas NAND
  c. Sólo con puertas NOR

<a name="Punto11"></a>
11. Trabajando en FPGA
  a. Implementación del problema con puertas lógicas
  b. Implementación del problema con una tabla
  c. Implementación del problema en Verilog
