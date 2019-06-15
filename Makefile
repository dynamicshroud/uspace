CC = gcc
FLAGS = -Wall -Wextra -pedantic -O3

default: install

lf: lf.c
	$(CC) $(FLAGS) lf.c -o lf

pr: pr.c
	$(CC) $(FLAGS) pr.c -o pr

copy: copy.c
	$(CC) $(FLAGS) copy.c -o copy

mov: mov.c
	$(CC) $(FLAGS) mov.c -o mov

rem: rem.c
	$(CC) $(FLAGS) rem.c -o rem

wd: wd.c
	$(CC) $(FLAGS) wd.c -o wd

BINS = lf pr rf copy mov rem wd

install: $(BINS)
	cp $(BINS) /usr/bin/

clean:
	rm $(BINS)
