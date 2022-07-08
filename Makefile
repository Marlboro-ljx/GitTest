
FILES = \
	test.cpp

TARGET = main

$(TARGET):test.o
	g++ $^ -o $@
test.o:
	g++ -c $< $(FILES) -o $@

.PHONY:
clean:
	rm -rf $(TARGET) test.o			