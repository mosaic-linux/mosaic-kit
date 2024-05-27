# Mosaic Kit for Mosaic Linux
# See LICENSE file for copyright and license details.

include config.mk

SRC = kit.c
OBJ = ${SRC:.c=.o}

all: mosaic-kit

.c.o:
	${CC} -c ${CFLAGS} $<

${OBJ}: config.h config.mk

mosaic-kit: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}
