# this bash script is for running C++ programs 
# just add the program name as an argument
# example: ./run.sh <programName>
# this will automatically compile and run the given program

#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 programName"
    exit 1
fi

PROGRAM_NAME=$1
SOURCE_FILE="${PROGRAM_NAME}.cpp"
EXECUTABLE="./${PROGRAM_NAME}"

if [ ! -f "$SOURCE_FILE" ]; then
    echo "Error: Source file '${SOURCE_FILE}' not found."
    exit 1
fi

g++ "$SOURCE_FILE" -o "$EXECUTABLE"

if [ $? -ne 0 ]; then
    echo "Error: Compilation failed."
    exit 1
fi

$EXECUTABLE
