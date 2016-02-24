# treasure-hunters
A game project

## Compile

cd build;
clang++ -g -Wall -o app ../*.cpp -std=c++11 -L/usr/include/SFML \
    -lsfml-graphics -lsfml-window -lsfml-system;

### TODO

- [] Create a cmake file
- [] Implement terrain collision
