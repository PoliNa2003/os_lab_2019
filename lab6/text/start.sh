mkdir bin
mkdir bin/static
gcc -c multmodulo.c -o bin/static/multmodulo.o
ar rcs bin/static/libmult.a bin/static/multmodulo.o