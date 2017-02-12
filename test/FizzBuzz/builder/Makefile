CC	:= g++
CPPFLAGS :=
CXXFLAGS := -Wall -g -Wextra -std=c++11

TOP_DIR := ../../..
HEADER_DIR := $(TOP_DIR)/source/FizzBuzz/header
SOURCE_DIR := $(TOP_DIR)/source/FizzBuzz/src
TEST_SOURCE_DIR := ../source
COTS_DIR := ../../../cots
BIN_DIR := ../bin

INCLUDE := -I$(TEST_SOURCE_DIR) \
	-I$(COTS_DIR)/builder/src \
	-I$(HEADER_DIR)

SOURCE_FILES := $(SOURCE_DIR)/FizzBuzz.cpp
$(info $$SOURCE_FILES is [${SOURCE_FILES}])

TEST_FILES := $(SOURCE_DIR)/test_runner.cpp \
	$(SOURCE_DIR)/buzz_test.cpp \

SOURCE_OBJ_DIR := $(TOP_DIR)/bin/obj
SOURCE_OBJ_FILES := $(addprefix $(SOURCE_OBJ_DIR)/,$(notdir $(SOURCE_FILES:.cpp=.o)))
$(info $$SOURCE_OBJ_FILES is [${SOURCE_OBJ_FILES}])
$(info $$SOURCE_OBJ_DIR is [${SOURCE_OBJ_DIR}])

TEST_OBJ_DIR := $(BIN_DIR)/obj
TEST_OBJ_FILES := $(addprefix $(TEST_OBJ_DIR)/,$(notdir $(TEST_FILES:.cpp=.o)))


LIBS := -L$(COTS_DIR)/check-0.10.0/src/.libs -lcheck \
	-L$(COTS_DIR)/check-0.10.0/lib/.libs -lcompat

TARGET_DIR := $(BIN_DIR)
TARGET := $(BIN_DIR)/TestRunner


####### RULES ########

all : $(TARGET)

$(TARGET): $(SOURCE_OBJ_FILES) $(TEST_OBJ_FILES)
		$(CC) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) $(TEST_OBJ_FILES) $(SOURCE_OBJ_FILES) $(LIBS) -o $@

$(SOURCE_OBJ_DIR)/%.o: $(SOURCE_DIR)/%.cpp
		$(CC) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

$(TEST_OBJ_DIR)/%.o: $(TEST_SOURCE_DIR)/%.cpp
		$(CC) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(TARGET) $(TEST_OBJ_DIR) $(SOURCE_OBJ_DIR)

.PHONY: all
$(shell mkdir -p $(SOURCE_OBJ_DIR))
$(shell mkdir -p $(TEST_OBJ_DIR))
$(shell mkdir -p $(TARGET_DIR))



