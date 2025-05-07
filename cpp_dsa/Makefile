CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./include
SRC_DIR = src/main/cpp
OBJ_DIR = obj
BIN_DIR = bin

# Source files
SRCS = $(wildcard $(SRC_DIR)/dev/dsa/*.cpp) \
       $(wildcard $(SRC_DIR)/dev/dsa/bigo/*.cpp)

# Object files
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Executable
TARGET = $(BIN_DIR)/run_algo

# Create directories
$(shell mkdir -p $(OBJ_DIR)/dev/dsa/bigo)
$(shell mkdir -p $(BIN_DIR))

# Default target
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compile
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean 