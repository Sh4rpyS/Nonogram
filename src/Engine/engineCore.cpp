#include <Engine/engineCore.h>

Program::Program(const GLuint &winWidth, const GLuint &winHeight, const std::string &winTitle)
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

    // Load glad
    static int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        std::cout << "Failed to initialize OpenGL context" << std::endl;
    }

    gameState = RUNNING;

    std::cout << glfwGetVersionString() << std::endl;
    std::cout << "Glad version: " << GLAD_VERSION_MAJOR(version) << "." << GLAD_VERSION_MINOR(version) << std::endl;
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

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
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