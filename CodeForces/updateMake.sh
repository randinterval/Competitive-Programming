# Simple Script to Add Extra Target in Make File - By Saad Ahmed
#!/bin/bash
echo -e $1:'\n''	'g++ -std=gnu++11 -O2 -g -Wall -Werror -DSAAD $1.cpp >> Makefile
> data.in
echo 'message:Program '$1' Entry Added in Makefile :) \n Compile using make '$1'' | zenity --notification --listen
