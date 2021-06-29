#!/bin/bash
TARGET_PATH="$(pwd)"
echo Enter target file relative to "$TARGET_PATH"
read -r target
gcc "$TARGET_PATH/$target"
./a.out