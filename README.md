# project_user_intent
User intent recognition - sample tool

Project user_intent is a sample intent recognition command line tool.
It recognises user intent by parsing through the input entered by user.
This tool is based on the tag value approach,similar words are given with same tag value
based on these tag value parsing will happen and the intent will be retrieved.


This project uses STL features available on C++ 17

How to build

mkdir build
cd build
cmake ..
make


How to execute
./user_intent
[binary resides inside the build directory]
