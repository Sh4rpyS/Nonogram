#include <Engine/engineCore.h>

int main(int argc, char *argv[])
{
    Program *nonogram = new Program(1280, 720, "Nonogram");
    nonogram->Start();
    return 0;
}