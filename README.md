# treasure-hunters
A game project

## Compile

cd build;
clang++ -std=c++14 -O2 -Wall -Wextra -Wpedantic -I. -UDEBUG -UTEST -o game \
    ../*.cpp -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network \
        -lsfml-system;

### TODO

- [] Create a cmake file
- [] Implement terrain collision
