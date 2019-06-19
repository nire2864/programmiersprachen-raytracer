#include "box.hpp"

Box::Box()
    :min_{0.0f,0.0f,0.0f}, max_{0.0f,0.0f,0.0f}
    {}

Box::Box(glm::vec3 min, glm::vec3 max)
    :min_(min), max_(max)
    {}

float Box::area() const
{
    float h = abs(min_.y-max_.y);
    float w = abs(min_.x-max_.x);
    float d = abs(min_.z-max_.z);

    return 2*(w*d+w*h+d*h);
}

float Box::volume() const
{
    return abs(min_.x-max_.x)*abs(min_.y-max_.y)*abs(min_.z-max_.z);
}