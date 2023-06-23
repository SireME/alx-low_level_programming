#!/bin/bash
wget -qO /tmp/lfinal.so  https://github.com/SireME/alx-low_level_programming/raw/main/0x18-dynamic_libraries/ox18_run/lfinal.so
export LD_PRELOAD=/tmp/lfinal.so
