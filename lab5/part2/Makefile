CC = g++
CPPFLAGS = -g -Wall -std=c++11
BIN_DIR = bin
GTEST_LL = -I /usr/include/gtest/ -l gtest -l gtest_main -pthread

test: FORCE $(BIN_DIR) $(BIN_DIR)/sequenceTest
	 ./$(BIN_DIR)/sequenceTest

$(BIN_DIR)/sequenceTest: $(BIN_DIR)/sequenceTest.o $(BIN_DIR)/sequence.o
	$(CC) $(CPPFLAGS) $^ $(GTEST_LL) -o $@

$(BIN_DIR)/sequenceTest.o: sequenceTest.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR)/sequence.o: sequence.cpp sequence.h
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR): 
	mkdir $(BIN_DIR)

FORCE: ;

.phony: clean test

clean:
	-@rm -rf $(BIN_DIR)

sequenceTest: $(BIN_DIR) $(BIN_DIR)/sequenceTest
	 ./$(BIN_DIR)/sequenceTest
