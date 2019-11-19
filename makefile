CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=libmyMath.o
FLAGS= -Wall -g

make mymaths:
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmylib.a $(OBJECTS_LIB)	

make mymathd:
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmylib.so $(OBJECTS_LIB)

make mains:
mains: $(OBJECTS_MAIN) libmylib.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

make maind:
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

make all:
  libmyMath.so libmyMath.a mains maind

make clean:
	rm -f *.o *.a *.so progmains progmaind
