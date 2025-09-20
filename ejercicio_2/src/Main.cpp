#include "../include/App.h"
#include <vector>


std::vector<float> m_vertices = {
    // --- Cuadrado (2 triángulos) ---
    -0.8f,  0.8f, 0.0f,   -0.4f,  0.8f, 0.0f,   -0.4f, 0.4f, 0.0f,
    -0.8f,  0.8f, 0.0f,   -0.4f,  0.4f, 0.0f,   -0.8f, 0.4f, 0.0f,

    // --- Triángulo ---
     0.0f,  0.8f, 0.0f,   -0.2f, 0.4f, 0.0f,    0.2f, 0.4f, 0.0f,

    // --- Rectángulo (2 triángulos) ---
    //-0.8f, -0.2f, 0.0f,    0.0f, -0.2f, 0.0f,    0.0f, -0.6f, 0.0f,
    //-0.8f, -0.2f, 0.0f,    0.0f, -0.6f, 0.0f,   -0.8f, -0.6f, 0.0f,
    0.4f, -0.6f ,0.0f,  0.8f, -0.6f, 0.0f,   0.8f, 0.2f, 0.0f,
    0.4f, -0.6f ,0.0f,   0.8f, 0.2f, 0.0f,   0.4f, 0.2f, 0.0f,
    //0.2f, -0.6f ,0.0f,   0.4f, 0.2f, 0.0f,   0.2f, 0.2f, 0.0f,
    //0.2f, -0.6f ,0.0f,   -0.2f, -0.2f, 0.0f,    0.2f, -0.2f, 0.0f,

    // --- Rombo (2 triángulos arriba, 2 abajo) ---
     0.0f, -0.2f, 0.0f,   -0.2f, -0.6f, 0.0f,    0.2f, -0.6f, 0.0f,
     0.0f, -1.0f, 0.0f,   -0.2f, -0.6f, 0.0f,    0.2f, -0.6f, 0.0f
};

std::vector<float> m_colors = {
    // Colores cuadrado
    1,1,0,   1,0,1,   0,1,1,
    1,1,0,   0,1,1,  1,0,1, 
    //0,1,1 , 1,0,1, 1,1,0,

    // Colores triángulo
    1,0,0,   0,1,0,   0,0,1,

    // Colores rectángulo
    1,0,0,   0,1,0,   0,0,1,
    1,0,0,   0,0,1,   0,1,0,

    // Colores rombo
    1,1,0,   1,0,1,   0,1,1,   
    1,1,0,   1,0,1,   0,1,1
};
/* Metodo principal */
int main() {
    // Creamos la aplicacion
    opengl::App app;
    // Establecemos los vertices y colores a usar
    app.setVertices(m_vertices);
    app.setColors(m_colors);
    // Disfrute :DD
    return app.run();
}