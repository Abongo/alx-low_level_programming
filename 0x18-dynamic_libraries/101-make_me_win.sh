#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Abongo/alx-low_level_programming/b507289b8a471278af42161431aac5c21ffd1c1e/0x18-dynamic_libraries/libcyber.so
export LD_PRELOAD="$PWD/../libcyber.so"
