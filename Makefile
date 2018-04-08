CMAKE_DIR := $(shell pwd)/cmake-build-debug
.PHONY: src test
src:
	@cd $(CMAKE_DIR) && $(MAKE_COMMAND) -f src/Makefile all
test:
	@cd $(CMAKE_DIR) && $(MAKE_COMMAND) -f test/Makefile all
	@$(CMAKE_DIR)/test/homework_tests/runBasicTests

