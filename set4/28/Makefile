CXXFLAGS ?= -Wall -std=c++2a
CXX_LIBSRC ?= $(shell find . -name \*.cc)
CXX_LIBOBJS ?= $(patsubst %.cc, %.o, $(CXX_LIBSRC))
LIBDIR = $(shell find $(shell cd ..; pwd) -name person)
LDFLAGS += -L$(LIBDIR)
LDFLAGS += -lperson

all:
	$(MAKE) dependency
	$(MAKE) main

dependency: $(LIBDIR)
	$(MAKE) -C $<

main: $(CXX_LIBOBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@ 

$(CXX_LIBOBJS): %o : %cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(CXX_LIBOBJS)
	$(MAKE) clean -C $(LIBDIR)