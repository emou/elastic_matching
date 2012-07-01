.PHONY: test
.DEFAULT: all
LIBQDBMP=lib/qdbmp/libqdbmp.a
all: $(LIBQDBMP)
	cd src && $(MAKE) $@
$(LIBQDBMP):
	cd lib/qdbmp && $(MAKE)
