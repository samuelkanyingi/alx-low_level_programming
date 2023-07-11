#! /bin/bash
source = (*.c)
for source in ${source[@]}
do
	fname = "{source%*}"
	gcc -c ${source} - o ${filename}.o
done
ar rcs liball.a *.o

echo "success"
