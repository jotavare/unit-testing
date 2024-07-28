#!/bin/bash
sudo apt update
sudo apt install -y build-essential cmake cppcheck valgrind gdb cmake-curses-gui
sudo gcc -dumpversion