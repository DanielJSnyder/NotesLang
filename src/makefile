CXX = g++

CPPFILES = $(wildcard *.cpp)
OBJS := $(CPPFILES:.cpp=.o)
CPP_FLAGS = -Wall -Werror -pedantic -std=c++11

debug: CPP_FLAGS += -g3
release: CPP_FLAGS += -O3

%.o: %.cpp
	$(CXX) $(CPP_FLAGS) $^ -c 

all: $(OBJS)
	$(CXX) $(CPP_FLAGS) $(OBJS) -o ../bin/simpLatex

debug: $(OBJS)
	$(CXX) $(CPP_FLAGS) $(OBJS) -o ../bin/simpLatex

release: $(OBJS)
	$(CXX) $(CPP_FLAGS) $(OBJS) -o ../bin/simpLatex

clean:
	rm *.o
	rm ../bin/*
