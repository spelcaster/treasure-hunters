# Copyright 2016 <https://github.com/spelcaster>
# Created by:   Hugo Augusto Freitas do Carmo
#
# Last modified at     | Modified by     | Description
#

# the compiler
CXX=clang++

# compiler flags
CFLAGS = -Wall -Wextra -Wpedantic

ifdef (RELEASE)
CFLAGS += O2
else
CFLAGS += -g
endif

CFLAGS += -I./include

CXXFLAGS = $(CFLAGS) -std=c++14

# define any directories containing header files other than /usr/include
INCLUDES  =

# define library paths in addition to /usr/lib
LFLAGS =

# define any libraries to link
SFML_LIBS  = -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network
SFML_LIBS += -lsfml-system

LIBS = $(SFML_LIBS)

# define the program source files
SOURCES = $(wildcard src/*.cpp)

# define the program object files
OBJ_FILES = $(addprefix obj/, $(notdir $(SOURCES:.cpp=.o)))

# define the executable
EXECUTABLE = build/game

# other stuff
RESOURCES = build/res

.PHONY: clean

all: $(SOURCES) $(EXECUTABLE) $(RESOURCES)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $(OBJ_FILES) $(LFLAGS) $(LIBS)

# this is a suffix replacement rule for buildings .o's from .cpp's
# it uses automatic variables:
# $< - the name of the prerequisite of the rule (a .cpp file)
# $@ - the name of the target of the rule (a .o file)
# (see the GNU make manual section about automatic variables)
obj/%.o:src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(RESOURCES):
	ln -s ../res $(RESOURCES)

clean:
	$(RM) $(RESOURCES) $(OBJ_FILES) $(EXECUTABLE)

