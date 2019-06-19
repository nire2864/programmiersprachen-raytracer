#ifndef BOX_HPP
#define BOX_HPP

#include <math.h>
#include <glm/vec3.hpp>
#include "shape.hpp"


class Box: public Shape {
    public:
    Box();
    Box(glm::vec3 min, glm::vec3 max);

    virtual float area() const override;
    virtual float volume() const override;

    private:
    glm::vec3 min_{0.0f,0.0f,0.0f};
    glm::vec3 max_{0.0f,0.0f,0.0f};



};

#endif