# C++

> By Ronirck

Este repositorio está diseñado con fines educativos para aprender y practicar C++. El desarrollo se realizó en un sistema operativo
**Windows 10** utilizando **MinGW** para descargar los compiladores y **Make** para la gestión de compilación a través de Makefiles.

# TABLA DE CONTENIDOS

1. [Introducción al Lenguaje](#introducción-al-lenguaje)

    - Historia y características
    - Instalación y configuración del entorno de desarrollo.

2. [Fundamentos de C++](#fundamentos-de-c)

    - Uso de `iostream` para entrada y salida
    - Namespaces
    - Tipos de datos
    - Bucles y Estructuras de Control de Flujo
    - Vectores y Matrices
    - Libreria `math.h`
    - Funcion `goto`

3. [Apuntadores y Funciones](#apuntadores-y-funciones)

    - Definición y uso de apuntadores
    - Funciones
    - Prototipado
    - Alcance de las variables

4. [Programación Orientada a Objetos (POO)](<#programación-orientada-a-objetos-(poo)>)

    - Conceptos Clave
    - Herencia
    - Polimorfismo
    - Pilares de POO

5. [Templates](#apuntadores-y-funciones)

    - Definición y uso de templates
    - Tipos
        - Templates de Funcion
        - Templates de Clase

6. [Estructuras de Datos](#estructuras-de-datos)

    - Listas
    - Pilas
    - Colas
    - Arboles

7. [Creación de Librerías](#creación-de-librerías)

    - Cómo crear y utilizar librerías en C++

---

## Introducción al Lenguaje

### Historia y Características

C++ es un lenguaje de programación de propósito general que fue desarrollado por Bjarne Stroustrup en los laboratorios Bell en la década
de 1980. Su diseño comenzó en 1979, y la primera versión se lanzó en 1985. C++ se basa en el lenguaje C, añadiendo características de
programación orientada a objetos (POO), lo que permite a los programadores crear aplicaciones más complejas y organizadas.

#### <ins>Características:</ins>

-   <ins>Programación Orientada a Objetos</ins>: Soporta encapsulamiento, herencia y polimorfismo.

-   <ins>Tipado Estático</ins>: Los tipos de datos se verifican en tiempo de compilación, lo que ayuda a detectar errores antes de la
    ejecución.

-   <ins>Eficiencia</ins>: Permite un control detallado sobre los recursos del sistema, lo que lo hace adecuado para aplicaciones de alto
    rendimiento.

-   <ins>Bibliotecas Estándar</ins>: Incluye la STL (Standard Template Library), que proporciona estructuras de datos y algoritmos
    genéricos.

-   <ins>Compatibilidad con C</ins>: C++ es compatible con C, lo que permite a los programadores utilizar código C existente.

-   <ins>Programación Genérica</ins>: Permite la creación de funciones y clases que pueden trabajar con cualquier tipo de dato.

-   <ins>Manejo de Recursos</ins>: Soporta RAII (Resource Acquisition Is Initialization), que ayuda a gestionar recursos de manera
    eficiente.

---

### Instalación y configuración del entorno de desarrollo.

Este proyecto se está desarrollando en un sistema operativo **Windows 10**. A continuación, se detallan los pasos para instalar y configurar
el entorno de desarrollo utilizando **MinGW**.

### 1. Instalación de MinGW

1. **Descargar MinGW**:

    - Visita la página oficial de [SOURCEFORGE](https://sourceforge.net/projects/mingw/) y descarga el instalador.

2. **Instalar MinGW**:

    - Ejecuta el instalador y selecciona los componentes que deseas instalar. Asegúrate de incluir:
        - `mingw32-base` (el compilador de C/C++)
        - `mingw32-gcc-g++` (el compilador g++)
        - `msys-base` (para el entorno de línea de comandos)

3. **Configurar la variable de entorno PATH**:
    - Agrega la ruta de instalación de MinGW (por defecto suele ser `C:\MinGW\bin`) a la variable de entorno PATH para poder usar `g++` y
      `make` desde cualquier terminal.

> [!NOTE]
>
> Es posible que en el directorio `C:\MinGW\bin`, no este especificamente el nombre de archivo `make`, sino `mingw32-make`. Para estos casos
> basta simplemente con cambiar el nombre del archivo a `make`.

---

### 2. Verificación de la Instalación

Abre una terminal (cmd) y ejecuta los siguientes comandos para verificar que la instalación fue exitosa:

```bash
    g++ --version
    make --version
```

Si ambos comandos devuelven información sobre las versiones instaladas, la configuración se ha realizado correctamente.

---

### 3. Uso de Makefile

El proyecto incluye un archivo `Makefile` que facilita la compilación de los programas. A continuación, se describen algunos comandos que
puedes usar en el Makefile:

#### Comandos Comunes en el Makefile

-   **make**: Compila el programa utilizando las reglas definidas en el Makefile.
-   **make clean**: Elimina los archivos objeto y ejecutables generados durante la compilación.
-   **make all**: Compila todos los objetivos definidos en el Makefile.
-   **make run**: Compila y ejecuta el programa (si está definido en el Makefile).

#### Limitaciones

-   **Dependencias**: Asegúrate de que todas las dependencias necesarias estén incluidas en el Makefile. Si falta alguna, la compilación
    puede fallar.
-   **Compatibilidad**: Este Makefile está diseñado para funcionar en entornos de Windows con MinGW. Puede que no funcione correctamente en
    otros sistemas operativos sin modificaciones.
-   **Archivos de entrada**: Asegúrate de que todos los archivos fuente y recursos necesarios estén en las ubicaciones correctas
    especificadas en el Makefile.

---

## Fundamentos de C++

### Libreria `iostream`

La librería iostream en C++ es una de las bibliotecas estándar más importantes y se utiliza para la entrada y salida de datos. Su nombre
proviene de "input" (entrada) y "output" (salida). Esta biblioteca proporciona las funcionalidades necesarias para trabajar con flujos de
datos, permitiendo leer datos desde la entrada estándar (como el teclado) y escribir datos en la salida estándar (como la pantalla).

#### Componentes principales de iostream:

1. Flujos de entrada y salida:

    - `std::cin`: Objeto que representa la entrada estándar (normalmente el teclado).

    - `std::cout`: Objeto que representa la salida estándar (normalmente la pantalla).

    - `std::cerr`: Objeto que representa la salida de error estándar.

    - `std::clog`: Objeto que representa un flujo de registro de errores.

2. Tipos de datos:

    - `std::istream`: Clase base para flujos de entrada.

    - `std::ostream`: Clase base para flujos de salida.

    - `std::iostream`: Clase que combina las funcionalidades de entrada y salida.

> [!IMPORTANT]
>
> Para este curso solo se profundizará en las funciones `std::cin` y `std::cout`, pero se invita a investigar mas sobre las demas.

#### Metodos de las Funciones `std::cin` y `std::cout`

1.  Metodos de `std::cin`:

    -   `std::cin.clear()`: Restablece el estado de error del flujo. Si se ha producido un error (por ejemplo, al intentar leer un tipo de
        dato incorrecto), este método permite que el flujo vuelva a estar listo para nuevas operaciones de entrada.

    -   `std::cin.ignore()`: Ignora un número específico de caracteres en el flujo de entrada. Se utiliza comúnmente para descartar
        caracteres no deseados, como el salto de línea que queda en el búfer después de una entrada.

        -   Ejemplo:

            ```CPP
                std::cin.ignore(100, '\n');
            ```

            Ignorará hasta 100 caracteres o hasta que encuentre un salto de línea.

    -   `std::cin.get()`: Lee un solo carácter del flujo de entrada. Puede ser útil para leer caracteres individuales, incluyendo espacios y
        saltos de línea.

        -   Ejemplo:

            ```CPP
                char c = std::cin.get();
            ```

    -   `std::cin.getline()`: Lee una línea completa de texto hasta que se encuentra un salto de línea. Es útil para leer cadenas de texto
        que pueden contener espacios.

        -   Ejemplo:

            ```CPP
                char buffer[100];
                std::cin.getline(buffer, 100);
            ```

    -   `std::cin.peek()`: Devuelve el siguiente carácter en el flujo de entrada sin extraerlo. Esto permite ver qué carácter está a
        continuación sin modificar el estado del flujo.

        -   Ejemplo:

            ```CPP
                char c = std::cin.peek();
            ```

2.  Metodos de `std::cout`:

    -   `std::cout.flush():` Vacía el búfer de salida, asegurando que todos los datos pendientes se envíen a la salida. Esto es útil cuando
        se necesita que la salida se muestre inmediatamente.

        -   Ejemplo:

            ```CPP
                std::cout.flush();
            ```

    -   `std::cout.put():` Escribe un solo carácter en el flujo de salida. Es útil cuando se desea enviar un carácter específico sin usar el
        operador de inserción.

        -   Ejemplo:

            ```CPP
                std::cout.put('A');
            ```

    -   `std::cout.write():` Escribe un bloque de datos en el flujo de salida. Se utiliza para escribir una cantidad específica de
        caracteres desde un buffer.

        -   Ejemplo:

            ```CPP
                const char* str = "Hola";
                std::cout.write(str, 4); // Escribe "Hola"`
            ```

    -   `std::cout.precision():` Establece o devuelve la precisión de los números de punto flotante que se mostrarán. Esto afecta la
        cantidad de dígitos que se mostrarán después del punto decimal.

        -   Ejemplo:

            ```CPP
                std::cout.precision(3);
            ```

---

### Namespaces

Un namespace es un contenedor que permite agrupar identificadores bajo un nombre específico. Esto ayuda a evitar colisiones de nombres, ya
que dos identificadores pueden tener el mismo nombre si pertenecen a diferentes namespaces.

Ejemplo de un namespace:

```CPP
    namespace MiEspacio {
        void funcion() {
            std::cout << "Función en MiEspacio" << std::endl;
        }
    }

    namespace OtroEspacio {
        void funcion() {
            std::cout << "Función en OtroEspacio" << std::endl;
        }
    }

    int main() {
        MiEspacio::funcion(); // Llama a la función en MiEspacio
        OtroEspacio::funcion(); // Llama a la función en OtroEspacio
        return 0;
    }
```

#### Para que sirven los namespaces

-   Evitar conflictos de nombres: Permiten que diferentes partes de un programa o diferentes bibliotecas utilicen el mismo nombre para
    diferentes identificadores sin causar conflictos.

-   Organización del código: Ayudan a organizar el código en módulos o componentes lógicos, lo que facilita la lectura y el mantenimiento.

-   Facilitar la reutilización: Permiten que las bibliotecas se integren sin problemas en un programa, ya que los nombres de las funciones y
    clases pueden estar agrupados en su propio espacio de nombres.

#### Namespace `std`

El namespace std es el espacio de nombres estándar de C++. Contiene todas las funciones, clases y objetos de la biblioteca estándar de C++.
Por ejemplo, `std::cout`, `std::cin`, `std::vector`, `std::string`, entre otros, pertenecen a este espacio de nombres.

#### Instrucción `using namespace`

La instrucción using namespace se utiliza para evitar tener que escribir el prefijo del namespace cada vez que se utiliza un identificador
de ese namespace. Por ejemplo, si deseas utilizar `std::cout` y `std::cin` sin el prefijo `std::`, puedes incluir la siguiente línea al
principio de tu código:

```CPP
    using namespace std;
```

Ejemplo de uso de `using namespace`:

```CPP
    #include <iostream>

    using namespace std; // Ahora no es necesario usar el prefijo std::

    int main() {
        cout << "Hola, mundo!" << endl; // Se puede usar cout y endl directamente
        return 0;
    }
```

#### Consideraciones sobre `using namespace`

-   Conflictos de nombres: Usar `using namespace` puede llevar a conflictos de nombres si hay identificadores con el mismo nombre en
    diferentes namespaces. Por ejemplo, si tienes una función llamada `funcion()` en tu código y también en `std`, puede haber ambigüedad.

-   Alcance: La instrucción `using namespace` afecta al alcance en el que se declara. Si se declara dentro de una función, solo afectará a
    esa función. Si se declara en el ámbito global, afectará a todo el archivo.

-   Mejor práctica: En proyectos grandes o en bibliotecas, es común evitar el uso de `using namespace std;` en el ámbito global para
    prevenir conflictos de nombres. En su lugar, se recomienda usar el prefijo `std::` explícitamente o usar using para identificadores
    específicos.

---

### Tipos de Datos

C++ ofrece varios tipos de datos nativos que se pueden clasificar en diferentes categorías. Los tipos de datos nativos son aquellos que
están integrados en el lenguaje y no requieren bibliotecas adicionales para su uso. A continuación, se describen los tipos de datos más
comunes:

1. Tipos de Datos Primitivos

Los tipos de datos primitivos son los tipos básicos que se utilizan para construir otros tipos de datos. Los más comunes son:

-   Tipos Enteros:

    -   `int`: Representa un número entero. Su tamaño puede variar, pero generalmente ocupa 4 bytes.

    -   `short`: Un entero corto, generalmente de 2 bytes.

    -   `long`: Un entero largo, generalmente de 4 o 8 bytes, dependiendo del sistema.

    -   `long long`: Un entero muy largo, que generalmente ocupa 8 bytes.

-   Tipos de Punto Flotante:

    -   `float`: Representa un número de punto flotante de precisión simple, generalmente de 4 bytes.

    -   `double`: Representa un número de punto flotante de precisión doble, generalmente de 8 bytes.

    -   `long double`: Representa un número de punto flotante de precisión extendida, cuyo tamaño puede variar.

-   Tipo Carácter:

    `char`: Representa un solo carácter y ocupa 1 byte. Puede ser utilizado para almacenar caracteres ASCII.

-   Tipo Booleano:

    `bool`: Representa un valor booleano, que puede ser true (verdadero) o false (falso).

> [!NOTE]
>
> Cabe resaltar que a los tipos de datos numericos (`int`,`float`, `double`, etc), se les puede agregar la palabra `unsigned`, para
> optimizar el uso de memoria de tal forma que solamente se muestren valores positivos.

2. Tipos de datos compuestos

Los tipos de datos compuestos se construyen a partir de tipos de datos primitivos. Los más comunes son:

-   Arreglos (arrays): Un arreglo es una colección de elementos del mismo tipo. Se puede acceder a los elementos mediante un índice.

    Ejemplo:

    ```CPP
        int numeros[] = {1, 2, 3, 4, 5};
    ```

-   Estructuras (`struct`): Una estructura es un tipo de dato que permite agrupar diferentes tipos de datos bajo un mismo nombre. El tamaño
    de la `struct` es la suma de los tamaños de todos sus miembros.

    Ejemplo:

    ```CPP
        struct Persona {
            std::string nombre;
            int edad;
        };
    ```

    Formas de declarar `struct`:

    1. En la declaracion:

        ```CPP
            struct Persona {
                std::string nombre;
                int edad;
            }persona1;
        ```

    2. En la funcion:

        ```CPP
            struct Persona {
                std::string nombre;
                int edad;
            };

            int main(){
                Persona persona1;
            }
        ```

-   Uniones (`union`): Una unión es similar a una estructura, pero todos los miembros comparten el mismo espacio de memoria. El tamaño de la
    `union` es igual al tamaño del miembro más grande. Solo se puede utilizar uno de los miembros a la vez.

    Ejemplo:

    ```CPP
        union Dato {
            int entero;
            float decimal;
        };
    ```

    Formas de declarar `union`:

    1. En la declaracion:

        ```CPP
            union Dato {
                int entero;
                float decimal;
            }dato1;
        ```

    2. En la funcion:

        ```CPP
            union Dato {
                int entero;
                float decimal;
            };

            int main(){
                Dato dato1;
            }
        ```

-   Enumeraciones (enum): Una enumeración es un tipo de dato que consiste en un conjunto de constantes enteras. Se utiliza para representar
    un conjunto de valores posibles.

    Ejemplo:

    ```CPP
        enum Color { Rojo, Verde, Azul };
    ```

---

#### Tipo de dato `String`

En C++ el tipo de dato `string` se considera un tipo de dato, pero es importante aclarar que no es un tipo de dato primitivo como `int`,
`char`, o `float`. En cambio, `string` es una clase que forma parte de la biblioteca estándar de C++ (STL, Standard Template Library) y se
utiliza para representar y manipular cadenas de caracteres de manera más eficiente y conveniente que los arreglos de caracteres (`char[]`).

#### Características del tipo `String`

-   Manejo dinámico de memoria: A diferencia de los arreglos de caracteres, que tienen un tamaño fijo, los objetos de tipo `string` pueden
    crecer y decrecer dinámicamente según sea necesario. Esto significa que puedes agregar o eliminar caracteres sin preocuparte por la
    gestión de la memoria.

-   Funciones y métodos: La clase `string` proporciona una variedad de métodos para manipular cadenas, como concatenación, búsqueda,
    comparación, y extracción de subcadenas. Esto hace que trabajar con cadenas sea mucho más fácil y menos propenso a errores.

-   Compatibilidad con caracteres: Aunque `string` se utiliza para manejar cadenas de caracteres, también se puede utilizar con caracteres
    individuales (`char`) y arreglos de caracteres.

#### Métodos de la clase `std::string`

1. Constructor y Destructor:

    - `std::string()`: Constructor por defecto que crea una cadena vacía.

    - `std::string(const char* str)`: Constructor que inicializa la cadena con una cadena de caracteres C (un arreglo de char).

    - `~std::string()`: Destructor que libera la memoria utilizada por la cadena.

2. Métodos de acceso:

    - `size()`: Devuelve el número de caracteres en la cadena.

    - `empty()`: Devuelve true si la cadena está vacía, de lo contrario, devuelve false.

    - `operator[]`: Permite acceder a un carácter en una posición específica (indexación).

    - `at(size_t pos)`: Devuelve el carácter en la posición `pos`, lanzando una excepción si `pos` está fuera de rango.

3. Métodos de modificación:

    - `append(const std::string& str)`: Agrega `str` al final de la cadena.

    - `insert(size_t pos, const std::string& str)`: Inserta `str` en la posición pos.

    - `erase(size_t pos = 0, size_t len = npos)`: Elimina len caracteres a partir de la posición `pos`.

    - `replace(size_t pos, size_t len, const std::string& str)`: Reemplaza `len` caracteres a partir de `pos` con `str`.

    - `clear()`: Elimina todos los caracteres de la cadena.

4. Métodos de búsqueda:

    - `find(const std::string& str, size_t pos = 0)`: Busca `str` en la cadena y devuelve la posición de la primera aparición, o
      `std::string::npos`(constante estática de la clase `std::string`, que se utiliza para indicar una posición no válida) si no se
      encuentra.

    - `rfind(const std::string& str, size_t pos = npos)`: Busca `str` desde el final de la cadena y devuelve la posición de la última
      aparición.

    - `find_first_of(const std::string& str, size_t pos = 0)`: Busca el primer carácter de `str` en la cadena.

    - `find_last_of(const std::string& str, size_t pos = npos)`: Busca el último carácter de `str` en la cadena.

5. Métodos de comparación:

    - `compare(const std::string& str)`: Compara la cadena con `str`. Devuelve `0` si son iguales, un valor negativo si la cadena es menor
      que `str`, y un valor positivo si es mayor.

    - `compare(size_t pos1, size_t len1, const std::string& str)`: Compara una subcadena de la cadena actual que comienza en `pos1` y tiene
      una longitud de `len1` con `str`.

6. Métodos de conversión:

    - `c_str()`: Devuelve un puntero a una cadena de caracteres C (un arreglo de `char`) que representa la cadena.

    - `data()`: Devuelve un puntero a los datos de la cadena (similar a `c_str()` pero puede no estar terminado en nulo en versiones
      anteriores de C++).

    - `substr(size_t pos = 0, size_t len = npos)`: Devuelve una subcadena que comienza en `pos` y tiene una longitud de `len`.

7. Métodos de concatenación:

    - `operator+`: Permite concatenar dos cadenas.

    - `operator+=`: Permite agregar una cadena al final de otra.

---

### Bucles y Estructuras de Control de Flujo

#### Estructuras de Control de Flujo

Las estructuras de control de flujo permiten dirigir la ejecución del programa en función de condiciones específicas. Las principales
estructuras son:

1. if:

    - Ejecuta un bloque de código si una condición es verdadera.

    - Ejemplo:

        ```CPP
            int i = 0;
            if (i == 0){
                // Codigo a ejecutar
            }
        ```

2. else:

    - Ejecuta un bloque de código si la condición del `if` es falsa.

    - Ejemplo:

        ```CPP
            int i = 1;
            if (i == 0){
                // Codigo a ejecutar
            }
            else
            {
                // Codigo a ejecutar si la condicion es falsa
            }
        ```

3. else if:

    - Permite verificar múltiples condiciones.

    - Ejemplo:

        ```CPP
            int i = 1;
            if (i == 0){
                // Codigo a ejecutar
            }
            else if(i == 1){
                // Codigo a ejecutar
            }
            else
            {
                // Codigo a ejecutar si la condicion es falsa
            }
        ```

4. switch:

    - Selecciona uno de varios bloques de código para ejecutar, basado en el valor de una variable.

    - Ejemplo:

        ```CPP
            int i = 3;

            switch(i){
                case 1:
                    // Codigo a ejecutar
                    break;

                case 2:
                    // Codigo a ejecutar
                    break;

                case 3:
                    // Codigo a ejecutar
                    break;

                default:
                    // Codigo que se ejecuta si no se cumple ningun caso
                    break;
            }
        ```

#### Bucles

Los bucles permiten repetir un bloque de código varias veces. Los principales tipos de bucles en C++ son:

1.  while:

    -   Ejecuta un bloque de código mientras una condición sea verdadera.

    -   Ejemplo:

        ```CPP
            int i = 0;
            while (i < 5) {
                std::cout << "i es: " << i << std::endl;
                i++;
            }
        ```

2.  do while:

    -   Similar al while, pero garantiza que el bloque de código se ejecute al menos una vez.

    -   Ejemplo:

        ```CPP
            int j = 0;
            do{
                std::cout << "j es: " << j << std::endl;
                j++;
            } while (j < 5);
        ```

3.  for:

    -   Se utiliza para iterar un número específico de veces. Es ideal cuando conoces de antemano cuántas veces necesitas ejecutar el bloque
        de código.

    -   Ejemplo:

        ```CPP
            for (int k = 0; k < 5; k++) {
                std::cout << "k es: " << k << std::endl;
            }
        ```

#### Control de Bucles

En C++, puedes controlar la ejecución de bucles con dos palabras clave:

1. break:

    - Termina el bucle inmediatamente.

    - Ejemplo:

    ```CPP
        for (int l = 0; l < 10; l++) {
            if (l == 5) {
                break; // Sale del bucle cuando l es 5
            }
            std::cout << "l es: " << l << std::endl;
        }
    ```

2. continue:

    - Salta a la siguiente iteración del bucle.

    - Ejemplo:

    ```CPP
        for (int m = 0; m < 10; m++) {
            if (m % 2 == 0) {
                continue; // Salta los números pares
            }
            std::cout << "m es: " << m << std::endl;
        }
    ```

---

### Vectores y Matrices

Los vectores en C++ son una parte de la biblioteca estándar (STL) y se utilizan para almacenar colecciones de elementos de un mismo tipo.
Son dinámicos, lo que significa que pueden cambiar de tamaño automáticamente cuando se agregan o eliminan elementos.

#### Ventajas de Usar Vectores

-   Tamaño Dinámico: No necesitas especificar el tamaño al momento de la creación.

-   Acceso Rápido: Permiten acceso aleatorio a los elementos.

-   Facilidad de Uso: Proporcionan métodos para manipular fácilmente los datos.

#### Ejemplo de uso

```CPP
    #include <vector>

    int main(){

        std::vector<int> numeros; // Declaracion de un vector
        std::vector<int> numeros2 = {1, 2, 3, 4, 5}; // Declaracion e inicializacion de un vector

        return 0;
    }
```

#### Métodos de `std::vector`

1. Constructores

    - `vector()`: Crea un vector vacío.

    - `vector(size_type count)`: Crea un vector con count elementos, todos inicializados a su valor por defecto.

    - `vector(size_type count, const T& value)`: Crea un vector con count elementos, todos inicializados a value.

    - `vector(const vector& other)`: Crea una copia del vector other.

    - `vector(vector&& other) noexcept`: Mueve el contenido de other al nuevo vector.

2. Destructores

    - `~vector()`: Destruye el vector y libera la memoria.

3. Operadores

    - `operator=`: Asigna el contenido de otro vector al vector actual.

    - `operator[]`: Accede al elemento en la posición especificada.

    - `at()`: Accede al elemento en la posición especificada de forma segura.

    - `front()`: Devuelve una referencia al primer elemento.

    - `back()`: Devuelve una referencia al último elemento.

    - `data()`: Devuelve un puntero al primer elemento del vector.

4. Capacidad

    - `size()`: Devuelve el número de elementos en el vector.

    - `max_size()`: Devuelve el número máximo de elementos que puede contener el vector.

    - `capacity()`: Devuelve la capacidad actual del vector (número de elementos que puede contener sin necesidad de realocar).

    - `empty()`: Devuelve true si el vector está vacío.

5. Modificación

    - `clear()`: Elimina todos los elementos del vector.

    - `insert()`: Inserta elementos en la posición especificada.

    - `erase()`: Elimina elementos en la posición especificada.

    - `push_back()`: Agrega un elemento al final del vector.

    - `pop_back()`: Elimina el último elemento del vector.

    - `resize()`: Cambia el tamaño del vector.

    - `swap()`: Intercambia el contenido de dos vectores.

    - `assign()`: Asigna nuevos valores al vector.

6. Operaciones de Algoritmo

    - `begin()`: Devuelve un iterador al primer elemento.

    - `end()`: Devuelve un iterador al final del vector (un puntero al siguiente del último elemento).

#### Iteracion de un vector con For

1. Forma tradicional: Utilizando los operadores `[]`.

    ```CPP
        for (int i = 0; i < numeros.size(); ++i) {
            std::cout << numeros[i] << " ";
        }
    ```

2. Basado en Rango: Solo C++11 y superior.

    ```CPP
        for (int num : numeros) {
            std::cout << num << " ";
        }
    ```

#### Matrices o (Vector de Vectores)

Una matriz es una estructura de datos bidimensional que organiza los datos en filas y columnas. Se puede considerar como un vector de
vectores. Las matrices son útiles para representar datos en forma de tablas, imágenes, gráficos, o cualquier contexto donde se necesite
manejar datos en dos dimensiones.

En C++, las matrices se pueden implementar utilizando la clase `std::vector` de la biblioteca estándar. Esto permite crear matrices
dinámicas que pueden cambiar de tamaño en tiempo de ejecución, a diferencia de los arreglos estáticos.

#### Representación de Matrices

Una matriz se representa como un vector de vectores. Cada fila de la matriz es un vector, y todos estos vectores se agrupan en un vector
principal.

```CPP
    std::vector<std::vector<int>> matriz(3, std::vector<int>(4));
```

En este ejemplo, estamos creando una matriz de 3 filas y 4 columnas, donde cada elemento es un entero inicializado a 0.

#### Interacción con Métodos de `std::vector`

Los métodos de `std::vector` se pueden utilizar para manipular las matrices de varias maneras:

1. Acceso a Elementos:

    - Puedes acceder a los elementos de la matriz utilizando el operador de subíndice (`[]`).

    - Ejemplo: `matriz[i][j]` accede al elemento en la fila `i` y columna `j`.

2. Modificación:

    - Puedes modificar los elementos de la matriz de la misma manera que accedes a ellos.

    - Ejemplo:` matriz[i][j] = nuevo_valor;` cambia el valor en la posición especificada.

3. Tamaño y Capacidad:

    - Puedes usar `size()` para obtener el número de filas y columnas.

    - Ejemplo: `matriz.size()` devuelve el número de filas, y `matriz[0].size()` devuelve el número de columnas.

4. Iteración:

    - Los métodos `begin()` y `end()` permiten recorrer los elementos de la matriz utilizando iteradores, facilitando la manipulación de
      cada elemento.

5. Inserción y Eliminación:

Puedes usar métodos como `push_back()` para agregar filas o columnas, y `erase()` para eliminar elementos.

---

### Libreria `math.h`

La biblioteca math.h en C++ es una versión de la biblioteca matemática estándar que se utiliza en el lenguaje C. Al incluir math.h, obtienes
acceso a una variedad de funciones matemáticas que pueden ser utilizadas en tus programas.

#### Características de math.h

1. Funciones Matemáticas Básicas:

    - Potencias y Raíces:

        - `double pow(double base, double exp)`: Calcula `base^exp`.

        - `double sqrt(double x)`: Calcula la raíz cuadrada de `x`.

2. Funciones Trigonométricas:

    - `double sin(double x)`: Calcula el seno de `x` (en radianes).

    - `double cos(double x)`: Calcula el coseno de `x`.

    - `double tan(double x)`: Calcula la tangente de `x`.

3. Funciones Inversas:

    - `double asin(double x)`: Calcula el arco seno de `x`.

    - `double acos(double x)`: Calcula el arco coseno de `x`.

    - `double atan(double x)`: Calcula el arco tangente de `x`.

4. Funciones Hiperbólicas:

    - `double sinh(double x)`: Calcula el seno hiperbólico de `x`.

    - `double cosh(double x)`: Calcula el coseno hiperbólico de `x`.

    - `double tanh(double x)`: Calcula la tangente hiperbólica de `x`.

5. Funciones Exponenciales y Logarítmicas:

    - `double exp(double x)`: Calcula `e^x`.

    - `double log(double x)`: Calcula el logaritmo natural de `x`.

    - `double log10(double x)`: Calcula el logaritmo en base `10` de `x`.

6. Funciones de Redondeo:

    - `double ceil(double x)`: Redondea hacia arriba.

    - `double floor(double x)`: Redondea hacia abajo.

    - `double round(double x)`: Redondea al entero más cercano.

7. Funciones de Valor Absoluto:

    - `double fabs(double x)`: Devuelve el valor absoluto de `x`.

---

### Funcion `goto`

-   Sintaxis de goto:

    La declaración goto se utiliza para saltar a una etiqueta específica en el código. La etiqueta se define precediéndola con un
    identificador seguido de dos puntos (`:`).

-   Ejemplo de codigo usando `goto`:

    ```CPP
        #include <iostream>

        int main() { int x = 0;

            start: // Etiqueta
            std::cout << "x es: " << x << std::endl;
            x++;

            if (x < 5) {
                goto start; // Salta a la etiqueta 'start'
            }

            std::cout << "Fin del programa." << std::endl;
            return 0;
        }
    ```

-   Consideraciones sobre `goto`:

    -   Legibilidad: El uso de `goto` puede hacer que el flujo del programa sea difícil de seguir. Esto puede llevar a lo que se llama
        "código espagueti", donde el control del flujo se vuelve confuso.

    -   Alternativas: En la mayoría de los casos, es preferible utilizar otras estructuras de control de flujo como:

        -   Bucles (for, while, do while).
        -   Condicionales (if, switch).

    -   Uso en Errores: A veces, `goto` se utiliza para manejar errores en funciones, permitiendo salir de varias capas de anidamiento. Sin
        embargo, esto también puede manejarse con excepciones en C++, lo que es una práctica más limpia.

> [!CAUTION]
>
> El uso de goto en C++ permite saltar a etiquetas específicas, pero su uso debe ser considerado cuidadosamente. Aunque puede ser útil en
> algunas situaciones, en general, es mejor optar por estructuras de control más claras y legibles.

---

## Apuntadores y Funciones

### Puntero

Un puntero es una variable que almacena la dirección de memoria de otra variable. En lugar de contener un valor directo, un puntero "apunta"
a la ubicación en la memoria donde se encuentra el valor.

#### Declaración de punteros:

Para declarar un puntero, se utiliza el operador `*` (asterisco) antes del nombre de la variable. La sintaxis es la siguiente:

```CPP
    tipo_de_dato* nombre_del_puntero;
```

#### Ejemplo:

```CPP
    int variable = 42; // Declaramos una variable entera
    int* puntero = &variable; // Declaramos un puntero y le asignamos la dirección de 'variable'
```

#### Conceptos clave sobre punteros:

-   Dirección de memoria: El operador `&` se utiliza para obtener la dirección de memoria de una variable. En el ejemplo anterior,
    `&variable` devuelve la dirección de variable.

-   Desreferenciación: El operador `*` se utiliza para acceder al valor almacenado en la dirección de memoria a la que apunta el puntero. En
    el ejemplo, `*puntero` devuelve el valor de variable.

-   Punteros nulos: Un puntero puede no apuntar a ninguna dirección válida. En este caso, se le puede asignar el valor `nullptr` (o `NULL`
    en versiones anteriores de C++). Esto es útil para indicar que un puntero no está inicializado.

#### Punteros y memoria dinámica:

Los punteros son esenciales para la gestión de memoria dinámica en C++. Puedes usar new para asignar memoria en el heap y delete para
liberar esa memoria.

#### New y Delete

-   `new`: El operador `new` se utiliza para asignar memoria dinámica. Cuando usas `new`, se reserva un bloque de memoria en el montón
    (heap) y se devuelve un puntero a la dirección de inicio de ese bloque.

    -   Ejemplo:

        ```CPP
            // Asignación de memoria para un entero
            int* ptr = new int;  // Reserva memoria para un entero
            *ptr = 42;           // Asigna un valor a la memoria reservada
        ```

-   `delete`: El operador `delete` se utiliza para liberar la memoria que fue previamente asignada con `new`. Esto es importante para evitar
    fugas de memoria, que ocurren cuando se pierde la referencia a un bloque de memoria asignado sin liberarlo.

    -   Ejemplo:

        ```CPP
            int* ptr = new int(42); // Asignación dinámica
            std::cout << "Valor de ptr: " << *ptr << std::endl; // Imprime 42

            delete ptr; // Libera la memoria
        ```

        > [!NOTE]
        >
        > -   Liberación de Arreglos: Si se asignó un arreglo con `new`, debes usar `delete[]` para liberar la memoria:
        >
        > ```CPP
        >   int* arr = new int[5]; // Reserva memoria para un arreglo de 5 enteros
        >   delete[] arr; // Libera la memoria del arreglo
        > ```

---

### Funciones

Una función es un bloque de código que realiza una tarea específica. Las funciones permiten dividir un programa en partes más pequeñas y
manejables, lo que facilita la reutilización del código y mejora la legibilidad.

#### Sintaxis de una Función en C++

La sintaxis básica para declarar una función es la siguiente:

```CPP
    tipo_de_retorno nombre_de_funcion(parametros) {
    // Cuerpo de la función
    // Código a ejecutar
    return valor; // (opcional, si el tipo de retorno no es void)
}
```

#### Componentes de una Función

-   Tipo de Retorno: Indica el tipo de dato que la función devolverá. Puede ser int, float, void, etc.

-   Nombre de la Función: Un identificador que se utiliza para llamar a la función.

-   Parámetros: Variables que se pasan a la función. Son opcionales. Pueden ser por valor o por referencia.

-   Cuerpo de la Función: Contiene el código que se ejecutará cuando se llame a la función.

#### Ejemplo de una Funcion con Parametros por Valor

```CPP
    // Declaración de una función que suma dos números
    int sumar(int a, int b) {
        return a + b; // Devuelve la suma de a y b
    }

    // Declaración de una función que imprime un mensaje
    void imprimirMensaje() {
        std::cout << "¡Hola, mundo!" << std::endl;
    }

    int main() {
        // Llamada a la función imprimirMensaje
        imprimirMensaje();

        // Llamada a la función sumar
        int resultado = sumar(5, 7);
        std::cout << "La suma es: " << resultado << std::endl; // Imprime 12

        return 0;
    }
```

#### Ejemplo de una Funcion con Parametros por Referencia

```CPP
    void incrementar(int* num) {
        *num++; // Incrementa el valor de num
    }

    int main() {
        int x = 5;
        incrementar(&x); // Llama a la función con x
        std::cout << "Valor de x después de incrementar: " << x << std::endl; // Imprime 6

        return 0;
    }
```

> [!NOTE]
>
> Al pasar los valores por valor, se crea una copia de las variables enviadas en la llamada de la funcion. En el caso de pasarlos por
> referencia se esta afectando a la misma direccion de la variable enviada en la funcion.

---

### Prototipado de Funciones

El prototipado de funciones en C++ es una técnica que permite declarar funciones antes de su implementación. Esto es útil para informar al
compilador sobre la existencia de una función, su nombre, su tipo de retorno y los tipos de sus parámetros, lo que permite que la función
sea llamada antes de su definición en el código.

#### ¿Por qué usar Prototipos de Funciones?

-   Organización del Código: Permite definir funciones en un orden diferente al que se llaman, lo que puede hacer que el código sea más
    legible.

-   Evitar Errores de Compilación: Si intentas llamar a una función que no ha sido declarada, el compilador generará un error. Los
    prototipos ayudan a evitar esto.

-   Facilitar la Modularidad: Permiten dividir el código en archivos diferentes, facilitando la gestión de proyectos grandes.

#### Sintaxis

La sintaxis para un prototipo de función es la siguiente:

```CPP
    tipo_de_retorno nombre_funcion(tipo_parametro1, tipo_parametro2, ...);
```

#### Ejemplo

```CPP
    #include <iostream>

    // Prototipos de funciones
    void saludar();
    int sumar(int a, int b);

    int main() {
        saludar(); // Llama a la función saludar
        int resultado = sumar(5, 7); // Llama a la función sumar
        std::cout << "La suma es: " << resultado << std::endl; // Imprime el resultado
        return 0;
    }

    // Definición de la función saludar
    void saludar() {
        std::cout << "¡Hola, mundo!" << std::endl;
    }

    // Definición de la función sumar
    int sumar(int a, int b) {
        return a + b; // Devuelve la suma de a y b
    }

```

---

### Alcance de variables

El alcance de una variable se refiere a la parte del programa donde la variable es accesible y puede ser utilizada. En C++, el alcance de
las variables se puede clasificar en varias categorías:

#### Tipos de Alcance

1. Alcance Global:

    - Las variables declaradas fuera de cualquier función tienen alcance global. Son accesibles desde cualquier parte del programa,
      incluidas las funciones.

    - Ejemplo:

        ```CPP
            int variableGlobal = 10; // Variable global

            void mostrarVariableGlobal() {
                std::cout << "Variable Global: " << variableGlobal << std::endl;
            }

            int main() {
                mostrarVariableGlobal(); // Imprime 10
                return 0;
            }
        ```

2. Alcance Local:

    - Las variables declaradas dentro de una función tienen alcance local. Solo son accesibles dentro de esa función y no pueden ser
      utilizadas fuera de ella.

    - Ejemplo:

        ```CPP
            void funcionLocal() {
                int variableLocal = 20; // Variable local
                std::cout << "Variable Local: " << variableLocal << std::endl;
            }

            int main() {
                funcionLocal(); // Imprime 20
                // std::cout << variableLocal; // Esto causará un error de compilación
                return 0;
            }
        ```

3. Alcance de Parámetros:

    - Los parámetros de una función también tienen un alcance local. Son accesibles solo dentro de la función y tienen el mismo
      comportamiento que las variables locales.

    - Ejemplo:

        ```CPP
            void imprimirNumero(int numero) { // 'numero' es un parámetro
                std::cout << "Número: " << numero << std::endl;
            }

            int main() {
                imprimirNumero(30); // Imprime 30
                // std::cout << numero; // Esto causará un error de compilación
                return 0;
            }
        ```

---

## Programación Orientada a Objetos (POO)

La programación orientada a objetos es un paradigma de programación que utiliza "objetos" para representar datos y métodos para operar sobre
esos datos. Este enfoque se basa en el concepto de encapsulamiento, donde los datos y las funciones que actúan sobre esos datos se agrupan
en una sola unidad llamada objeto.

#### Propósitos de la POO

-   Modularidad: Divide el programa en partes más pequeñas y manejables (clases y objetos).

-   Reutilización: Permite reutilizar código a través de la herencia y la composición.

-   Abstracción: Facilita la representación de conceptos del mundo real mediante objetos.

-   Encapsulamiento: Protege el estado interno de un objeto, exponiendo solo lo necesario.

### Conceptos Clave

1. Clases:

Una clase es una plantilla o un modelo que define un tipo de objeto. Especifica los atributos (datos) y métodos (funciones) que tendrán los
objetos creados a partir de ella.

Ejemplo:

```CPP
    class Perro {
    public:
        std::string nombre;
        int edad;

        void ladrar() {
            std::cout << "¡Guau!" << std::endl;
        }
    };
```

2. Objetos:

Un objeto es una instancia de una clase. Cuando se crea un objeto, se asigna memoria para almacenar sus atributos y se pueden utilizar sus
métodos.

Ejemplo:

```CPP
    Perro miPerro; // Creación de un objeto de tipo Perro

    miPerro.nombre = "Fido";
    miPerro.edad = 3;
    miPerro.ladrar(); // Llama al método ladrar
```

3.  Metodos y Atributos:

    -   Atributos: Son las variables que almacenan el estado de un objeto. En el ejemplo anterior, `nombre` y `edad` son atributos de la
        clase `Perro`.

    -   Métodos: Son las funciones que definen el comportamiento de un objeto. En el ejemplo, `ladrar()` es un método que permite al objeto
        `Perro` ladrar.

4.  Métodos Públicos, Protegidos y Privados:

    -   Métodos Públicos: Son accesibles desde cualquier parte del programa. Se utilizan para interactuar con los objetos.

    -   Métodos Protegidos: Solo son accesibles dentro de la clase y sus `subclases`. Se utilizan para permitir que las `subclases` accedan
        a ciertos métodos sin exponerlos al mundo exterior.

    -   Métodos Privados: Solo son accesibles dentro de la propia clase. Se utilizan para ocultar detalles de implementación y proteger el
        estado interno del objeto.

5.  Tipos de metodos:

    1.  Constructores

        Los constructores son métodos especiales que se llaman automáticamente al crear un objeto de la clase. Se utilizan para inicializar
        los atributos del objeto. Pueden tener parámetros o ser por defecto.

        Ejemplo:

        ```CPP
            Punto(double x, double y) : x(x), y(y) {
                // Inicializa x e y
            }
        ```

    2.  Destructores

        Los destructores son métodos especiales que se llaman automáticamente cuando un objeto sale de su alcance o se destruye. Se utilizan
        para liberar recursos, como memoria dinámica.

        Ejemplo:

        ```CPP
            ~Punto(){
                // Código para liberar recursos, si es necesario
            }
        ```

    3.  Getters

        Los getters son métodos que permiten acceder a los atributos privados de una clase. Suelen tener un nombre que comienza con "get"
        seguido del nombre del atributo.

        Ejemplo:

        ```CPP
            double getX() const {
                return x;
            }
        ```

    4.  Setters

        Los setters son métodos que permiten modificar los atributos privados de una clase. Suelen tener un nombre que comienza con "set"
        seguido del nombre del atributo.

        Ejemplo:

        ```CPP
            void setX(double x) {
                this->x = x;
            }
        ```

    5.  Métodos Estáticos

        Los métodos estáticos pertenecen a la clase en lugar de a una instancia específica. Se pueden llamar sin crear un objeto de la clase
        y suelen ser utilizados paraoperaciones que no dependen de los atributos de instancia.

        Ejemplo:

        ```CPP
            static int obtenerCantidadPuntos() {
                return contador;
            }
        ```

    6.  Métodos de Clase

        Los métodos de clase son similares a los métodos estáticos, pero pueden acceder a los atributos estáticos de la clase. Se definen
        con la palabra clave static.

        Ejemplo:

        ```CPP
            class Ejemplo {
            public:
                static int contador;

                static void incrementarContador() {
                    contador++;
                }
            };
        ```

    7.  Métodos de Amistad

        Los métodos de amistad son funciones externas a la clase que pueden acceder a sus atributos privados. Se declaran con la palabra
        clave `friend`.

        Ejemplo:

        ```CPP
            friend std::ostream& operator<<(std::ostream& os, const Punto& punto) {
                os << "Punto(" << punto.x << ", " << punto.y << ")";
                return os;
            }
        ```

    8.  Sobrecarga de Métodos

        La sobrecarga de métodos permite definir múltiples métodos con el mismo nombre en una clase, siempre que tengan diferentes tipos o
        números de parámetros.

        Ejemplo:

        ```CPP
            class Calculadora {
            public:
                int sumar(int a, int b) {
                    return a + b;
                }

                double sumar(double a, double b) {
                    return a + b;
                }
            };
        ```

    9.  Sobrecarga de Operadores

        La sobrecarga de operadores permite redefinir el comportamiento de los operadores (como `+`, `-`, `*`, `<<`, etc.) para objetos de
        clases personalizadas.

        Ejemplo:

        ```CPP
            class Punto {
            public:
                int x, y;

                Punto operator+(const Punto& otro) {
                    return Punto{x + otro.x, y + otro.y};
                }
            };
        ```

---

### Herencia

La herencia es un mecanismo que permite crear una nueva clase (`subclase`) a partir de una clase existente (`superclase`). La `subclase`
hereda atributos y métodos de la `superclase`, lo que promueve la reutilización de código.

Ejemplo:

```CPP
    class Animal {
    public:
        void comer() {
            std::cout << "Comiendo" << std::endl;
        }
    };

    class Perro : public Animal {
    public:
        void ladrar() {
            std::cout << "¡Guau!" << std::endl;
        }
    };
```

#### Tipos de Herencia

En C++, puedes especificar diferentes tipos de herencia:

-   Publica: `class SubClase : public SuperClase` (los miembros públicos y protegidos de la `superclase` se convierten en públicos y
    protegidos en la `subclase`).

-   Protegida: `class SubClase : protected SuperClase` (los miembros públicos y protegidos de la `superclase` se convierten en protegidos en
    la `subclase`).

-   Privada: `class SubClase : private SuperClase` (los miembros públicos y protegidos de la `superclase` se convierten en privados en la
    `subclase`).

### Polimorfismo

El polimorfismo es la capacidad de una función o método para actuar de diferentes maneras según el contexto. Permite que una misma operación
se aplique a diferentes tipos de objetos.

#### Tipos de Polimorfismo

-   Polimorfismo Estático: Se logra en tiempo de compilación. Un ejemplo común es la sobrecarga de métodos, donde varias funciones pueden
    tener el mismo nombre pero diferentes parámetros.

-   Polimorfismo Dinámico: Se logra en tiempo de ejecución, típicamente mediante el uso de herencia y métodos virtuales. Permite que una
    llamada a un método se resuelva en función del tipo de objeto en tiempo de ejecución.

    -   Ejemplo de polimorfismo dinamico:

        ```CPP
            class Animal {
            public:
                virtual void hacerSonido() {
                    std::cout << "Sonido de animal" << std::endl;
                }
            };

            class Gato : public Animal {
            public:
                void hacerSonido() override {
                    std::cout << "¡Miau!" << std::endl;
                }
            };

            int main()
            {
                Animal* animal = new Gato();

                animal->hacerSonido();
            }

        ```

### Encapsulamiento

El encapsulamiento es el principio de ocultar los detalles internos de una clase y exponer solo lo necesario a través de métodos públicos.
Esto protege el estado interno del objeto y evita que el acceso no controlado a sus atributos cause errores.

#### Beneficios

-   Protección de datos: Limita el acceso a los atributos, evitando modificaciones no deseadas.

-   Abstracción: Permite a los usuarios interactuar con el objeto sin conocer su implementación interna.

#### Ejemplo

```CPP
    class CuentaBancaria {
    private:
        double saldo;

    public:
        void depositar(double cantidad) {
            if (cantidad > 0) {
                saldo += cantidad;
            }
        }

        double obtenerSaldo() {
            return saldo;
        }
    };
```

### Abstraccion

La abstracción es el proceso de simplificar un sistema al enfocarse en los aspectos esenciales y ocultar los detalles complejos. En POO, se
logra mediante clases e interfaces que representan conceptos del mundo real.

#### Beneficios

-   Simplificación: Permite a los programadores trabajar con un modelo simplificado de un sistema.

-   Interfaz clara: Proporciona una forma clara de interactuar con los objetos.

#### Ejemplo

```CPP
    class Vehiculo {
    public:
        virtual void conducir() = 0; // Método abstracto
    };

    class Coche : public Vehiculo {
    public:
        void conducir() override {
            std::cout << "Conduciendo un coche" << std::endl;
        }
    };
```

---

## Templates

Las templates en C++ son una característica que permite definir funciones y clases genéricas. Esto significa que puedes escribir código que
funcione con diferentes tipos de datos sin necesidad de duplicar el código para cada tipo específico. Las templates son especialmente útiles
para crear estructuras de datos y algoritmos que son independientes del tipo de datos.

### Tipos de Templates

-   Template de Función: Permiten crear funciones que pueden operar con diferentes tipos de datos.

-   Template de Clase: Permiten crear clases que pueden manejar diferentes tipos de datos.

#### Templates de Funcion

La sintaxis básica para definir una template de función es la siguiente:

```CPP
    template <class T>
    T nombreFuncion(T arg) {
        // Cuerpo de la función
    }
```

#### Ejemplo

```CPP
    #include <iostream>

    template <class T>
    void intercambiar(T* a, T* b) {
        T temp = *a; // Usamos un tipo genérico T
        *a = *b;
        *b = temp;
    }

    int main() {
        int x = 5, y = 10;
        std::cout << "Antes de intercambiar: x = " << x << ", y = " << y << std::endl;
        intercambiar(&x, &y);
        std::cout << "Después de intercambiar: x = " << x << ", y = " << y << std::endl;

        double m = 1.5, n = 2.5;
        std::cout << "Antes de intercambiar: m = " << m << ", n = " << n << std::endl;
        intercambiar(&m, &n);
        std::cout << "Después de intercambiar: m = " << m << ", n = " << n << std::endl;

        return 0;
    }
```

#### Templates de Clase

La sintaxis básica para definir una template de clase es la siguiente:

```CPP
    template <class T>
    class NombreClase {
    public:
        T miembro; // Miembro de tipo genérico

        NombreClase(T val) : miembro(val) {} // Constructor

        void mostrar() {
            std::cout << "Valor: " << miembro << std::endl;
        }
    };
```

#### Ejemplo

```CPP
    #include <iostream>

    template <class T>
    class Par {
    private:
        T primero;
        T segundo;

    public:
        Par(T a, T b) : primero(a), segundo(b) {}

        void mostrar() {
            std::cout << "Primer valor: " << primero << ", Segundo valor: " << segundo << std::endl;
        }
    };

    int main() {
        Par<int> parInt(1, 2);
        parInt.mostrar(); // Imprime: Primer valor: 1, Segundo valor: 2

        Par<double> parDouble(3.14, 2.71);
        parDouble.mostrar(); // Imprime: Primer valor: 3.14, Segundo valor: 2.71

        return 0;
    }
```

---

## Estructuras de Datos

Las estructuras de datos son formas de organizar y almacenar datos en una computadora de manera que se puedan utilizar de manera eficiente.
Son fundamentales en la programación y el desarrollo de software, ya que afectan directamente la eficiencia y el rendimiento de los
algoritmos que operan sobre esos datos.

### Propósitos de las Estructuras de Datos

-   Organización: Facilitan la organización de datos de manera que se puedan acceder y modificar fácilmente.

-   Eficiencia: Permiten realizar operaciones en los datos (como inserciones, eliminaciones y búsquedas) de manera eficiente en términos de
    tiempo y espacio.

-   Facilidad de uso: Ayudan a los programadores a gestionar datos complejos de manera más sencilla.

### Tipos de Estructuras de Datos

Las estructuras de datos se pueden clasificar en dos categorías principales:

1. Estructuras de Datos Lineales:

    - Ejemplos: Arreglos, listas, pilas y colas.

    - Características: Los elementos están organizados en una secuencia lineal. Cada elemento tiene un único predecesor y un único sucesor
      (excepto el primero y el último).

2. Estructuras de Datos No Lineales:

    - Ejemplos: Árboles y grafos.

    - Características: Los elementos no están organizados de manera secuencial. Pueden tener múltiples relaciones entre ellos, lo que
      permite representaciones más complejas.

> [!NOTE]
>
> Aunque los arreglos son estructuras de datos, no se van a incluir en esta seccion ya que de forma nativa son estructuras estaticas y en
> esta seccion solo se incluyen las estructuras dinamicas.

---

> [!IMPORTANT]
>
> Para las estructuras de datos vistas a continuacion, se hara uso de la clase Nodo, vista en el ejemplo de `Templates/script/2.deClase.cpp`

### Listas

Una lista es una estructura de datos que almacena una colección de elementos de manera secuencial. A diferencia de los arreglos, las listas
permiten la inserción y eliminación de elementos de manera más flexible, ya que no requieren que los elementos estén contiguos en memoria.

#### Tipos de listas

-   Lista simple: Cada nodo apunta al siguiente.

    -   Lista simple-circular: El último nodo apunta al primero.

-   Lista doble: Cada nodo apunta al siguiente y al anterior.

    -   Lista doble-circular: El último nodo apunta al primero, y el primer nodo apunta al ultimo.

> [!NOTE]
>
> En estos tipos de listas, estas caracteristicas dependen mas del nodo que la lista en si.

#### Implementacion en C++

```CPP
    template <class elem>
    class List
    {
    private:
        Nodo<elem> *prim;

    public:
        List() : prim(nullptr) {}

        // Método para agregar un nodo al final de la lista
        void append(elem value)
        {
            Nodo<elem> *newNode = new Nodo<elem>(value);
            if (!prim)
            {
                prim = newNode;
                return;
            }
            Nodo<elem> *temp = prim;
            while (temp->getSiguiente())
            {
                temp = temp->getSiguiente();
            }
            temp->setSiguiente(newNode);
        }

        // Método para imprimir la lista
        void print()
        {
            Nodo<elem> *temp = prim;
            while (temp)
            {
                cout << temp->getDato() << " -> ";
                temp = temp->getSiguiente();
            }
            cout << "nullptr" << endl;
        }

        // Destructor para liberar memoria
        ~List()
        {
            Nodo<elem> *temp;
            while (prim)
            {
                temp = prim;
                prim = prim->getSiguiente();
                delete temp;
            }
        }
    };
```

#### Metodos

...

### Pilas

Una pila es una estructura de datos que sigue el principio LIFO (Last In, First Out), lo que significa que el último elemento agregado es el
primero en ser eliminado. Puedes imaginarla como una pila de platos: solo puedes agregar o quitar el plato de la parte superior.

#### Implementacion en C++

```CPP
    template <class elem>
    class Stack
    {
    private:
        Node<elem> *prim;

    public:
        Stack() : prim(nullptr) {}

        // Método para agregar un nodo a la pila
        void push(elem value)
        {
            Node<elem> *newNode = new Node<elem>(value);

            newNode->setSiguiente(prim);
            prim = newNode;
        }

        // Método que elimina el tope de la pila.
        void pop()
        {
            Node<elem> *aux = prim;

            prim = prim->getSiguiente();
            delete aux;
        }

        // Método que devuelve el dato del nodo en la cima de la pila.
        elem top()
        {
            return prim->getDato();
        }

        // Destructor para liberar memoria
        ~Stack()
        {
            while (prim)
            {
                pop();
            }
        }
    };
```

#### Metodos

### Cola

Una cola es una estructura de datos que sigue el principio FIFO (First In, First Out), lo que significa que el primer elemento agregado es
el primero en ser eliminado. Puedes imaginarla como una fila de personas esperando para ser atendidas: la primera persona en la fila es la
primera en ser atendida.

#### Implementacion en C++

```CPP
    template <class elem>
    class Stack
    {
    private:
        Node<elem> *prim;

    public:
        Stack() : prim(nullptr) {}

        // Método para agregar un nodo a la pila
        void push(elem value)
        {
            Node<elem> *newNode = new Node<elem>(value);

            newNode->setSiguiente(prim);
            prim = newNode;
        }

        // Método que elimina el tope de la pila.
        void pop()
        {
            Node<elem> *aux = prim;

            prim = prim->getSiguiente();
            delete aux;
        }

        // Método que devuelve el dato del nodo en la cima de la pila.
        elem top()
        {
            return prim->getDato();
        }

        // Destructor para liberar memoria
        ~Stack()
        {
            while (prim)
            {
                pop();
            }
        }
    };
```

#### Cola de Prioridades

Una cola de prioridades es una estructura de datos que, a diferencia de una cola normal, no solo organiza los elementos en un orden
secuencial, sino que también asigna una prioridad a cada elemento. Esto significa que los elementos con mayor prioridad se procesan antes
que aquellos con menor prioridad, independientemente del orden en que fueron añadidos a la cola.

##### Ejemplo de Uso

Las colas de prioridades se utilizan comúnmente en aplicaciones como:

-   Sistemas de gestión de tareas: Donde ciertas tareas deben ser ejecutadas antes que otras.

-   Algoritmos de búsqueda: Como el algoritmo de Dijkstra para encontrar el camino más corto en un grafo.

-   Simulaciones: Donde eventos se procesan en el orden de su importancia o tiempo.

### Arboles

Un árbol es una estructura de datos jerárquica que consiste en nodos conectados por aristas. Se utiliza para representar relaciones
jerárquicas y se compone de un nodo raíz, nodos internos y nodos hoja.

#### Componentes

1. Raíz: El nodo superior del árbol, desde el cual se derivan todos los demás nodos.

2. Hijos: Los nodos que están directamente debajo de un nodo dado.

3. Padre: Un nodo que tiene uno o más nodos hijos.

4. Hoja: Un nodo que no tiene hijos.

5. Altura: La longitud del camino más largo desde la raíz hasta una hoja.

6. Profundidad: La longitud del camino desde la raíz hasta un nodo específico.

7. Orden: Cantidad maxima de hijos que puede tener un nodo.

#### Tipos de Árboles

1. Árbol Binario: Cada nodo tiene como máximo dos hijos (hijo izquierdo y hijo derecho).

2. Árbol Binario de Búsqueda (BST): Un árbol binario donde el valor del nodo izquierdo es menor que el del nodo padre y el valor del nodo
   derecho es mayor.

3. Árbol N-ario: Cada nodo puede tener hasta N hijos.

4. Árbol Balanceado: Un árbol que mantiene su altura equilibrada para optimizar las operaciones de búsqueda, inserción y eliminación.

5. Árbol AVL y Árbol Rojo-Negro: Tipos de árboles balanceados que garantizan que las operaciones se realicen en tiempo logarítmico.

> [!NOTE]
>
> Debido a que los arboles son una estructura de datos no lineal, se modificara la estructura de la clase "Node"

#### Implementacion en C++

```CPP
    template <class elem>
    class Stack
    {
    private:
        Node<elem> *prim;

    public:
        Stack() : prim(nullptr) {}

        // Método para agregar un nodo a la pila
        void push(elem value)
        {
            Node<elem> *newNode = new Node<elem>(value);

            newNode->setSiguiente(prim);
            prim = newNode;
        }

        // Método que elimina el tope de la pila.
        void pop()
        {
            Node<elem> *aux = prim;

            prim = prim->getSiguiente();
            delete aux;
        }

        // Método que devuelve el dato del nodo en la cima de la pila.
        elem top()
        {
            return prim->getDato();
        }

        // Destructor para liberar memoria
        ~Stack()
        {
            while (prim)
            {
                pop();
            }
        }
    };
```

---

## Creación de Librerías
