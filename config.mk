# version of kit
VERSION = 0.1

# edit the information below
# --------------------------

# paths (where it is being installed)
PREFIX = /usr/local

# flags
CPPFLAGS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_XOPEN_SOURCE=700L -DVERSION=\"${VERSION}\"
CFLAGS = -std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os ${INCS} ${CPPFLAGS}

# compiler that is being used
CC = cc
