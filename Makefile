CFLAGS= -std=c99
LIBS += -Lx86_64 -lrs_camera_usb -lusb -lpthread -lrt

all:dlfw

dlfw:dlfw.c
	gcc $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm dlfw
