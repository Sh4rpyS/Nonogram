#ifndef ENGINECORE_H
#define ENGINECORE_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

class Program {
public:
    Program(const int &winWidth, const int &winHeight, const std::string &winTitle);
    void Start();

private:

    enum gameStates {
        RUNNING,
        STOPPING
    };

    gameStates gameState;

    int winWidth, winHeight;
    std::string winTitle;
    GLFWwindow *window;


    void Update();

};

#endif