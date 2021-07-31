TARGET=ncurses
CXX=g++
LD=g++
OBJS=hello-ncurses-1.cpp
NCURSES=-lncurses
TINFO=-ltinfo
all:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(NCURSES) $(TINFO)
install:
	@install nomedoprograma /usr/local/bin/nomedoprograma
clean:
	rm -rf *.o
