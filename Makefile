# Makefile para compilar y ejecutar programas en C++

# Nombre del ejecutable
EXECUTABLE = RUN.exe

# Comando para compilar
CXX = g++
CXXFLAGS = -g

# Comando para ejecutar
RUN = ./$(EXECUTABLE)

# Comando para depurar el programa
DEBUG = gdb ./$(EXECUTABLE)

# Regla por defecto
.PHONY: all
all: help

# Ayuda
help:
	@echo "Comandos disponibles:"
	@echo "  make ./directorio/programa  						- Compila el programa especificado."
	@echo "  make ./directorio/programa ./directorio/libreria  	- Compila el programa especificado con la libreria indicada."
	@echo "  make run                   						- Ejecuta el programa compilado."
	@echo "  make debug                 						- Compila y ejecuta en modo depuracion."
	@echo "  make clean                 						- Elimina archivos generados."

LIBRARY = $(word 2, $(MAKECMDGOALS))

SRCS = $(wildcard $(LIBRARY)src/*.cpp)

# Regla para compilar el programa especificado

ifeq ($(LIBRARY),)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(EXECUTABLE)
	$(MAKE) run

else

%: %.cpp
	$(CXX) $(CXXFLAGS) $< $(SRCS) .\Customized-Libreries\Node\src\Node.cpp -o $(EXECUTABLE)

%:
	$(MAKE) run
endif



# Regla para ejecutar el programa
.PHONY: run
run: $(EXECUTABLE)
	@echo "Ejecutando $(EXECUTABLE)..."
	@timeout /t 2 > nul
	cls
	$(RUN)

# Regla para depurar el programa
.PHONY: debug
debug: $(EXECUTABLE)
	@echo "Ejecutando en modo depuracion..."
	@timeout /t 2 > nul
	cls
	$(DEBUG)

# Regla para limpiar archivos generados
.PHONY: clean
clean:
	@echo "Limpiando archivos generados..."
	@del *.exe
	@timeout /t 2 > nul
	cls