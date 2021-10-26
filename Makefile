CMAKE ?= cmake
BUILD_DIR ?= build
CXXFLAGS += \
    -Wall \
    -fsanitize=address

build:
	$(CMAKE) --build $(BUILD_DIR) -j $(NPROC)

%:
	$(CMAKE) --build $(BUILD_DIR) -j $(NPROC) -t $@

clean:
	$(CMAKE) --build $(BUILD_DIR) -t clean

init:
	mkdir -p $(BUILD_DIR)
	$(CMAKE) -S . -B $(BUILD_DIR) -G Ninja \
	    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
	    -DCMAKE_BUILD_TYPE=Debug

.PHONY:	build clean
