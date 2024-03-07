g++ -O3 src/*.cpp -o "Nonogram.exe" -static -static-libgcc -std=c++17 -Llib -Iinclude -Iinclude/GLFW -Iinclude/GL -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32 -lmingw32 -mwindows

echo - Script End -