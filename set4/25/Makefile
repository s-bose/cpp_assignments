CXXFLAGS ?= -Wall -std=c++2a
CXX_LIBSRC ?= $(shell find . -name \*.cc)
CXX_LIBOBJS ?= $(patsubst %.cc, %.o, $(CXX_LIBSRC))

interest_calculator: $(CXX_LIBOBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(CXX_LIBOBJS): %o : %cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f interest_calculator $(CXX_LIBOBJS)