# Simple Script to Create a File from Template.cpp by Saad Ahmed
#!/bin/bash
cp 'template.cpp' $1.cpp
mv $1.cpp $2/$1.cpp
echo 'message:Successfully Created File '$1'.cpp in Folder '$2' ' | zenity --notification --listen
