CC=g++
CFLAGS=-c -Wall
LDFLAGS=
DIR=/watchdog_cpp
SOURCES= $(DIR/watchdog.cpp) $(DIR/watchdog.h)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
    $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
    $(CC) $(CFLAGS) $< -o $@