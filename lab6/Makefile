CC = g++
CPPFLAGS = -g -Wall -std=c++11
TEST_DIR = tests
BIN_DIR = bin
GTEST_LL = -I /usr/include/gtest/ -l gtest -l gtest_main -pthread

test: FORCE $(BIN_DIR) $(BIN_DIR)/AllProductsTest
	valgrind --leak-check=yes ./$(BIN_DIR)/AllProductsTest

$(BIN_DIR)/AllProductsTest: $(BIN_DIR)/AllProductsTest.o $(BIN_DIR)/AllProducts.o
	$(CC) $(CPPFLAGS) $^ $(GTEST_LL) -o $@

$(BIN_DIR)/AllProductsTest.o: $(TEST_DIR)/AllProductsTest.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR)/AllProducts.o: AllProducts.cpp AllProducts.h
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BIN_DIR): 
	mkdir $(BIN_DIR)

FORCE: ;

.phony: clean test

clean:
	-@rm -rf $(BIN_DIR)

AllProductsTest: $(BIN_DIR) $(BIN_DIR)/AllProductsTest
	valgrind --leak-check=yes ./$(BIN_DIR)/AllProductsTest
