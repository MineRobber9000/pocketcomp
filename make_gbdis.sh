#!/bin/bash
./gen_instruction_parser.py < mnemonics.txt > instruction_parse.inc
gcc -o gbdis gbdis.c

