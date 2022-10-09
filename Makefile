all: 
	g++ -c src/Engine/*.cpp src/Render/*.cpp
	g++ *.o -o game.exe -lsfml-graphics -lsfml-window -lsfml-system
	./game

clean:
	rm game.exe main.o start.o RenderWindow.o