README

This repository includes the extension of LTE-Sim to correct some errors comparing to the original distribution. 
Configuration

The following set up has been tested on:

Linux Mint 18.3 64-bit
BusenLabs Hydrogen

1 - Create new C++ (Cross GCC) project on Eclipse called “LTE-Sim”

2 - Download the repository

3 - Extract zip file

4 - Copy the “src” folder from the zip file downloaded from GitHub to the new C++ Eclipse project folder workspace (.../LTE-Sim)

5 - Right click on project and select refresh (you may also use F5 key), the “src” folder should now appear on Eclipse Project explorer tree

6 - Go and edit “load-parameters.h” replace line “static std::string path ("/home/sim/workspace/LTE-Sim/");”, /home/sim/workspace/LTE-Sim/ is the path to my workspace project path, replace it with yours (where you have LTE Sim).

7 - In Eclipse select your project, chose properties, C/C++ Build -> Settings -> Cross Gcc Compiler -> Dialect in "Language standart" select "ISO C11 (-std=C11)"

8 - Do the same to Cross G++ Compiler

9 - Compile
