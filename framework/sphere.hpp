#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"

class Sphere: public Shape {
    public:
    Sphere();
    Sphere(float radius, glm::vec3 const& centre);
    Sphere(float radius, glm::vec3 const& centre, Color const& col, std::string const& name);
    
    float area() const override;
    float volume() const override;
    std::ostream& print(std::ostream& os) const override;

    private:
        float radius_;
        glm::vec3 centre_{};
};

#endif