#This is a comment

OBJ=main.o statistics.o

TARGET=program

#This compiles each c file into an object file
%.o: %.c
	gcc -c -o $@ $<

#This links the objects into an exectuable
# -o means : "output file name"
$(TARGET): $(OBJ)
	gcc -o $@ $^ 