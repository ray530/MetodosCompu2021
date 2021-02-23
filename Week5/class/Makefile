all: test

test: obj/main.o obj/Particula.o
	g++ -o test obj/main.o obj/Particula.o

obj/main.o: src/main.cpp
	g++ -c src/main.cpp -o obj/main.o


obj/Particula.o: src/Particula.cpp
	g++ -c src/Particula.cpp -o obj/Particula.o


clean:
	@rm obj/* test
