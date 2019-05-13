.PHONY: build
build:
	gcc "src/Weather.c" -Iinclude -Llib -lcurl -o "build/weather"
run:
	./build/weather
