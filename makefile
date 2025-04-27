CXXFLAGS = -std=c++11

all: app

app: main.o App.o SeaPlusPlusEngine.o VertebrateCreature.o InvertebrateCreature.o VertebrateChecker.o InvertebrateChecker.o
	g++ $(CXXFLAGS) -o app main.o App.o SeaPlusPlusEngine.o VertebrateCreature.o InvertebrateCreature.o VertebrateChecker.o InvertebrateChecker.o

main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp

App.o: App.cpp
	g++ $(CXXFLAGS) -c App.cpp

SeaPlusPlusEngine.o: SeaPlusPlusEngine.cpp
	g++ $(CXXFLAGS) -c SeaPlusPlusEngine.cpp

VertebrateCreature.o: VertebrateCreature.cpp
	g++ $(CXXFLAGS) -c VertebrateCreature.cpp

InvertebrateCreature.o: InvertebrateCreature.cpp
	g++ $(CXXFLAGS) -c InvertebrateCreature.cpp

VertebrateChecker.o: VertebrateChecker.cpp
	g++ $(CXXFLAGS) -c VertebrateChecker.cpp

InvertebrateChecker.o: InvertebrateChecker.cpp
	g++ $(CXXFLAGS) -c InvertebrateChecker.cpp

clean:
	rm -f *.o app
