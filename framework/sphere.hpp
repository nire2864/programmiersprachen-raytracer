#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <glm/vec3.hpp>
#include "shape.hpp"

class Sphere: public Shape {
    public:
    Sphere();
    Sphere(float radius, glm::vec3 const& centre);
    
    virtual float area() const override;
    virtual float volume() const override;

    private:
        float radius_ = 0.0f;
        glm::vec3 centre_{0.0f,0.0f,0.0f};
};

#endif