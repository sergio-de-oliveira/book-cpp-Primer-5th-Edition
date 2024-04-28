TARGET=$(shell basename $(CURDIR))
SOURCES := *.cpp
RESULT := $(shell echo $?)

all:
	g++ -o ${TARGET}.out $(SOURCES)

clean:
	@rm -f ${TARGET}.out

run:
	./$(TARGET).out
	@echo $(.SHELLSTATUS)