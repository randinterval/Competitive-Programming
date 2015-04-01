# Simple Script to Create a File from Template.cpp by Saad Ahmed
#!/bin/bash

mkdir $1
cp updateMake.sh $1/updateMake.sh
cp Makefile $1/Makefile
echo 'message:Folder '$1' Created' | zenity --notification --listen

