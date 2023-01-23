clean:
	@echo "Cleaning up build..."
	rm -rf build

generate:
	@echo "Generating files..."
	cmake -H. -Bbuild -G "Unix Makefiles"

build:
	make generate
	@echo "Building project..."
	cmake --build build

full-build:
	make clean
	make build