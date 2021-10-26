# +--------------------+
# |                    |
# |   GENERAL CONFIG   |
# |                    |
# +--------------------+

PROBLEM_NAME := problem_name
LANG := cpp

ifeq ($(LANG),cpp)
TARGET := $(PROBLEM_NAME)
CLEAN_TARGETS := $(TARGET)
else ifeq ($(LANG),python)
TARGET := $(PROBLEM_NAME).py
CLEAN_TARGETS :=
else
$(error "Unknown language")
endif

CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic -Wshadow -Wformat=2 
CXXFLAGS += -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 
CXXFLAGS += -Wduplicated-cond -Wcast-qual -Wcast-align -Wno-unused-result
CXXFLAGS += -Wno-sign-conversion

PRECOMPILE_HEADERS := bits/stdc++.h


# +-------------------+
# |                   |
# |   GENERAL RULES   |
# |                   |
# +-------------------+

all: $(TARGET)
.PHONY: all

clean:
	-rm -rf $(CLEAN_TARGETS)
.PHONY: clean

rebuild: clean all
.PHONY: rebuild

# +---------------------+
# |                     |
# |   C++ COMPILATION   |
# |                     |
# +---------------------+

PCH := .precompiled_headers
CLEAN_TARGETS += $(PCH)

$(PCH)/%.gch:
	rm -f $@
	mkdir -p $(dir $@)
	$(LINK.cpp) -x c++-header "$$(echo '#include<$*>' 
	| $(LINK.cpp) -H -E -x c++ - 2>&1 >/dev/null | head -1 | cut -d ' ' -f2)" 
	-o $@
.PRECIOUS: $(PCH)/%.gch

%: %.cpp # Cancel the builtin rule

%: %.cpp $(patsubst %,$(PCH)/%.gch,$(PRECOMPILE_HEADERS))
	$(LINK.cpp) -isystem $(PCH) $< $(LOADLIBES) $(LDLIBS) -o ./build/$@
.PRECIOUS: %
