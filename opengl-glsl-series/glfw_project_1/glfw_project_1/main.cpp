//
//  main.cpp
//  glfw_project_1
//
//  Created by Supanat Jintawatsakoon on 28/6/2564 BE.
//

#include <iostream>
#include <GLFW/glfw3.h>

int main() {

    GLFWwindow *window;
    if(!glfwInit()){
        std::cout<<"Init error";
        return -1;
    }
    std::cout<<"hello";
}
