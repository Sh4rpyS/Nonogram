@echo off
g++ -O3 src/main.cpp -o "Nonogram.exe" src/Engine/* -Llib -Iinclude -Iinclude/Engine -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32 -static -static-libgcc -static-libstdc++ -std=c++20

echo - Script End -