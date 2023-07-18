GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.67.1
COMPILE=/home/noil/code/FunKey-sdk-2.3.0/bin/arm-funkey-linux-musleabihf-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_STRTOD_L=0  -DU_ATTRIBUTE_DEPRECATED= -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Ofast   -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=/home/noil/code/FunKey-sdk-2.3.0/bin/arm-funkey-linux-musleabihf-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Ofast   -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings    -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/home/noil/code/FunKey-sdk-2.3.0/bin/arm-funkey-linux-musleabihf-ar
ARFLAGS=r
RANLIB=/home/noil/code/FunKey-sdk-2.3.0/bin/arm-funkey-linux-musleabihf-ranlib
INSTALL_CMD=/usr/bin/install -c
