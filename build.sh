#!/bin/bash

# Create the build directory if it doesn't exist
mkdir -p build

# Find all C files and compile them into build/
for file in *.c; do
    if [ -f "$file" ]; then
        gcc "$file" -o "build/${file%.c}.out"
        echo "Compiled: $file -> build/${file%.c}.out"
    fi
done

echo "Build complete!"
