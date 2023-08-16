#include <cmath>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>

int main() {
    // GLFWの初期化
    if (!glfwInit()) {
        return -1;
    }

    // ウィンドウの作成
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello GLFW", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // OpenGLのコンテキストを作成
    glfwMakeContextCurrent(window);

    // メインループ
    while (!glfwWindowShouldClose(window)) {
        // フレームバッファをクリア
        glClear(GL_COLOR_BUFFER_BIT);

        // バックバッファとフロントバッファを交換
        glfwSwapBuffers(window);

        // イベントをポーリング
        glfwPollEvents();
    }

    // GLFWを終了
    glfwTerminate();

    return 0;
}