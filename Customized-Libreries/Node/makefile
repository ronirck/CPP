TARGET = RUN

LIBS = -lm

CC = g++

CFLAGS = -g

.PHONY: default all clean

default: $(TARGET)
all: default

OBJECTS = ${patsubst %.cpp, %.o, $(wildcard *.cpp)}

HEADERS = ${wildcard *.h}

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $@