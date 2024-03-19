@echo off
g++ -O3 src/*.cpp -o "Nonogram.exe" -Llib -Iinclude -Iinclude/GLFW -Iinclude/GLAD -Iinclude/KHR -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32 -static -static-libgcc -static-libstdc++ -std=c++20

echo - Script End -