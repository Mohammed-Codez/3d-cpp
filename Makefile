comp := clang++

ver := c++26

libloc := /opt/homebrew/lib/
incloc := /opt/homebrew/include/

inclibs := raylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

filenames := *.cpp
binname := bin/main

all:
	$(comp) $(filenames) -std=$(ver) -I$(incloc) -L$(libloc) -l$(inclibs) -o $(binname)
