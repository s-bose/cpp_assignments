CXXFLAGS ?= -Wall -std=c++2a
CXX_LIBSRC ?= $(shell find . -name \*.cc)
CXX_LIBOBJS ?= $(patsubst %.cc, %.o, $(CXX_LIBSRC))

libperson.a: $(CXX_LIBOBJS)
	ar rcs $@ $^

$(CXX_LIBOBJS): %o : %cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f libperson.a $(CXX_LIBOBJS)