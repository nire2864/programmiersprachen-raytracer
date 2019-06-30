#ifndef HITPOINT_HPP
#define HITPOINT_HPP

#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include "color.hpp"

struct Hitpoint
{
    bool hit_ = false;
    std::string name_ = "unnamed";
    Color color_{1.0f,1.0f,1.0f};
    glm::vec3 direction_;
    float distance = -1.234f;
};

#endif