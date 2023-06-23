#!/bin/bash
wget -qO /tmp/lfinal.so  https://github.com/SireME/alx-low_level_programming/raw/main/0x18-dynamic_libraries/0x18.c/lfinal.so
export LD_PRELOAD=/tmp/lfinal.so
