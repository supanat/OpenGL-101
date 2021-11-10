//
//  main.cpp
//  glfw-ch1-1
//
//  Created by Supanat Jintawatsakoon on 28/6/2564 BE.
//

#include <iostream>
#include <GLFW/glfw3.h>

int main() {

    
    GLFWwindow * window;
    
    if (!glfwInit()) {
        std::cout << "Init error";
        return -1;
    }
    
    window = glfwCreateWindow(800,600,"Hello",0,0);
    if (!window) {
        std::cout << "Window creation error";
        glfwTerminate();
        return -1;
    }
    
    glfwMakeContextCurrent(window);
    
    
    // render loop
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(1.0,1.0,1.0,0);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    
    
}
