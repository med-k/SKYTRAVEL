## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = projet-c-radhouan

projet_c_radhouan_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
        client.c  client.h \
        flights.c flights.h \
        travels.c travels.h \
        hotel.c   hotel.h 

projet_c_radhouan_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

