#!/bin/bash

# Check if the program name is provided as an argument
if [ -z "$1" ]; then
    echo "Usage: $0 programName"
    exit 1
fi

PROGRAM_NAME=$1
SOURCE_FILE="${PROGRAM_NAME}.cpp"
EXECUTABLE="./${PROGRAM_NAME}"

# Check if the source file exists
if [ ! -f "$SOURCE_FILE" ]; then
    echo "Error: Source file '${SOURCE_FILE}' not found."
    exit 1
fi

# Compile the C++ program
g++ "$SOURCE_FILE" -o "$EXECUTABLE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Error: Compilation failed."
    exit 1
fi

# Run the executable
$EXECUTABLE
