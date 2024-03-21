#ifndef ENGINECORE_H
#define ENGINECORE_H

#include <Engine/glad/gl.h>
#include <Engine/GLFW/glfw3.h>
#include <iostream>
#include <string>

class Program {
public:
    Program(const GLuint &winWidth, const GLuint &winHeight, const std::string &winTitle);
    void Start();

private:

    enum gameStates {
        RUNNING,
        STOPPING
    };

    gameStates gameState;

    GLuint winWidth, winHeight;
    std::string winTitle;
    GLFWwindow *window;


    void Update();

};

#endif