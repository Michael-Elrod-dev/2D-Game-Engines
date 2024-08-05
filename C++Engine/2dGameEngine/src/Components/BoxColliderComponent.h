#pragma once
#include <glm/glm.hpp>  // Vectors for display positions

using namespace std;

struct BoxColliderComponent {
    int width;
    int height;
    glm::vec2 offset;

    BoxColliderComponent(int width = 0, int height = 0, glm::vec2 offset = glm::vec2(0.0)) {
        this->width = width;
        this->height = height;
        this->offset = offset;
    }
};