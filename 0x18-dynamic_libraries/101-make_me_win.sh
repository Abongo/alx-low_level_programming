#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Abongo/alx-low_level_programming/master/0x18-dynamic_libraries/libcyber1.so
export LD_PRELOAD="$PWD/../libcyber1.so"
