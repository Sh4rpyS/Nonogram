#include <engineCore.h>

Program::Program(const int &winWidth, const int &winHeight, const std::string &winTitle)
: winWidth(winWidth), winHeight(winHeight), winTitle(winTitle)
{
    // Init glfw
    try 
    {
        if (!glfwInit())
        {
            throw "glfw init error";
        }
    }
    catch (std::string error)
    {
        std::cout << error << std::endl;;
    }

    // Create the window
    window = glfwCreateWindow(winWidth, winHeight, winTitle.c_str(), nullptr, nullptr);

    if (!window)
    {
        std::cout << "window init error";
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);

    glewInit();

    /* Init glew
    try 
    {
        if (glewInit() != GLEW_OK)
        {
            throw "glew init error";
        }
    }
    catch (std::string error)
    {
        std::cout << error << std::endl;
    }
    */

    gameState = RUNNING;

    std::cout << glfwGetVersionString() << std::endl;
    std::cout << glewGetString(GLEW_VERSION) << std::endl;
}

// Runs once
void Program::Start()
{
    while (gameState == RUNNING)
    {
        if (glfwWindowShouldClose(window))
        {
            gameState = STOPPING;
        }

        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
        Update();
        glfwSwapBuffers(window);
    }

    std::cout << "stopping program";
    glfwTerminate();
}

// Runs every frame
void Program::Update()
{

}