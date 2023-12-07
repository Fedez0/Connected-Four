cmake_minimum_required(VERSION 3.10)
project(game)

# Imposta la versione di C++
set(CMAKE_CXX_STANDARD 14)

# Aggiungi l'eseguibile
add_executable(game src/game.cpp)

# Trova SFML nel sistema
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Collega l'eseguibile con SFML
target_link_libraries(game sfml-graphics sfml-window sfml-system)

