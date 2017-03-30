LIBS += -Lx86_64 -lrtsuvc -lusb-1.0 -lrtscamkit -lpthread

all:dlfw

dlfw:dlfw.c
		gcc -o $@ $^ $(LIBS)

clean:
		rm dlfw
