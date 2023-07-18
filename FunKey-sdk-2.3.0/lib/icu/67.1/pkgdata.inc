GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.67.1
COMPILE=/home/noil/code/FunKey-sdk-2.3.0/bin/ccache /usr/bin/gcc -I/home/noil/code/FunKey-sdk-2.3.0/include -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=0  -DU_DISABLE_RENAMING=1 -DU_ATTRIBUTE_DEPRECATED= -O2 -I/home/noil/code/FunKey-sdk-2.3.0/include -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/home/noil/code/FunKey-sdk-2.3.0/include -DPIC -fPIC
GENLIB=/home/noil/code/FunKey-sdk-2.3.0/bin/ccache /usr/bin/gcc -O2 -I/home/noil/code/FunKey-sdk-2.3.0/include -std=c11 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/home/noil/code/FunKey-sdk-2.3.0/lib -Wl,-rpath,/home/noil/code/FunKey-sdk-2.3.0/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/usr/bin/ar
ARFLAGS=r
RANLIB=/usr/bin/ranlib
INSTALL_CMD=/usr/bin/install -c
