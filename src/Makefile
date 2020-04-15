ALL	=  main
SRCS    =./
BIN     = num2thsx
BINDIR  =../bin
ARFLAGS = -rv
OBJECTMODE = 32
INLINE     = -qinline -qstaticinline -qcpluscmt -qlanglvl=extc89
### Platform specific compiler definitions (multi-threaded)
#CC         =gcc  -qlonglong -qlongdouble -q$(OBJECTMODE) -qalign=full \
             $(INLINE)
CC      = gcc
AR      = ar
CP      = cp
PR      = pr -e8
CHMOD   = chmod
LS      = ls -l
SIZE    = size
RM      = rm -f
INCS    = ./include
LIBS    = 
DEBUG   = -g
BINMODE = 755

### Compiler flags for debug
CCFLAGS    = $(INCS) $(DEBUG) 
CFLAGS  = -I $(CCFLAGS)
#LDFLAGS = -L $(LIBS)

#.SUFFIXES: .c .cpp
#OBJS    = $(SRCS:.c=.o)
OBJS     = num2thsx.o

all:    $(ALL)
$(ALL):  $(OBJS) $(LIBS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@
	$(CHMOD) $(BINMODE) $@
	$(LS) $@; $(SIZE) $@

install:$(ALL)
	$(CP) $? $(BINDIR)
#	$(CP)   $? $@
#	$(CHMOD) $(BINMODE) $@

print:
	@$(PR) Makefile $(SRCS) | lp
clean:
	$(RM) $(OBJS) core
	$(RM) $(ALL)
.c.o:
	$(CC) $(CFLAGS) -c $<
.cpp.o:
	$(CC) $(CFLAGS) -c $<

#
# DEPENDENCIES
#

