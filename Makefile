CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra
TEST_FLAGS = -lgtest -lgmock -pthread

# Find all subdirectories in the apps folder
APP_DIRS := $(wildcard apps/*)

# Generate targets for each app
APPS := $(notdir $(APP_DIRS))

# Find all test directories
TEST_DIRS := $(wildcard tests/*)

# Default target to build all apps and tests
all: $(APPS) tests

# Rule to build each app
$(APPS):
	@echo "Building $@..."
	$(MAKE) -C apps/$@

# Build and run tests
tests: $(TEST_DIRS)

$(TEST_DIRS):
	@echo "Building and running tests for $@..."
	$(CXX) $(CXXFLAGS) -Iapps/sumofnumbers -o $@/run_tests $@/*.cpp $(TEST_FLAGS)
	$@/run_tests

# Clean all apps and tests
clean:
	@for dir in $(APP_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done
	@for dir in $(TEST_DIRS); do \
		rm -f $$dir/run_tests; \
	done

.PHONY: all $(APPS) clean tests $(TEST_DIRS)
