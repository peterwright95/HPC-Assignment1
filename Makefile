TARGET	= libmatmult.so
LIBSRCS	= 
LIBOBJS	= matmult_lib.o matmult_nat.o \
          matmult_kmn.o matmult_knm.o \
          matmult_mkn.o matmult_mnk.o \
          matmult_nkm.o matmult_nmk.o \
          matmult_blk.o
# original version
OPT	= -g 
# optimized vesion
# OPT	= -g -O3 -std=c99
PIC	= -fPIC

CC	= gcc
CFLAGS= $(OPT) $(PIC) $(XOPTS)

SOFLAGS = -shared 
XLIBS	= -L/usr/lib64/atlas -lsatlas

$(TARGET): $(LIBOBJS)
	$(CC) -o $@ $(SOFLAGS) $(LIBOBJS) $(XLIBS)

clean:
	@/bin/rm -f core core.* $(LIBOBJS) 
