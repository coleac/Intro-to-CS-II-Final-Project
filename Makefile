##Final Project Makefile 8/7/2016
#Aalon Cole colea@oregonstate.edu

#make Final	to create the executable file for the lab assignment
#make clean	to clean the directory after


CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

SRCS = Basement1.cpp Basement1Door.cpp Basement2.cpp Basement2Door.cpp Basket.cpp Cavern.cpp Darkness.cpp Falling.cpp FinalMain.cpp GamePlay.cpp GarbageBasement.cpp GarbageBasementDoor.cpp Newspaper.cpp OpiumDen.cpp Outside1885.cpp Outside2016.cpp Passageway.cpp Penitentiary.cpp PseudoRoom.cpp Rat.cpp Room.cpp SnakeEyes.cpp Stairway.cpp

HEADERS = Basement1.hpp Basement1Door.hpp Basement2.hpp Basement2Door.hpp Basket.hpp Cavern.hpp Darkness.hpp Falling.hpp FinalMain.hpp GamePlay.hpp GarbageBasement.hpp GarbageBasementDoor.hpp Newspaper.hpp OpiumDen.hpp Outside1885.hpp Outside2016.hpp Passageway.hpp Penitentiary.hpp PseudoRoom.hpp Rat.hpp Room.hpp SnakeEyes.hpp Stairway.hpp

Final: ${SRCS} 
	${CXX} ${LDFLAGS} ${CXXFLAGS} ${SRCS} -o Final

clean:
	rm Final