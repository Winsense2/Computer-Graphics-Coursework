
// Maths.h
#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Maths {
public:
    static glm::mat4 translate(const glm::vec3& translation) {
        return glm::translate(glm::mat4(1.0f), translation);
    }

    static glm::mat4 scale(const glm::vec3& scaling) {
        return glm::scale(glm::mat4(1.0f), scaling);
    }

    static glm::mat4 rotate(float angle, const glm::vec3& axis) {
        return glm::rotate(glm::mat4(1.0f), angle, axis);
    }

    static float radians(float degrees) {
        return glm::radians(degrees);
    }
};
