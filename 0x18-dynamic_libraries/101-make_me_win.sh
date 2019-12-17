#!/bin/bash
wget -P /tmp https://github.com/alejolo311/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/whaisthis.so
export LD_PRELOAD=/tmp/whatisthis.so
