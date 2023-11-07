# Простой make-file без переменных, для релиза и дебага

.PHONY: all debug release clean

all: debug release

debug: main-dbg

hello-dbg: main.cpp
	g++ -g -O0 main.cpp -o main-dbg -Wall

release: hello

hello: main.cpp
	g++ -O2 main.cpp -o main -DNDEBUG -Wall

clean:
	rm -rf *.o main
	rm -rf *.o main-dbg
