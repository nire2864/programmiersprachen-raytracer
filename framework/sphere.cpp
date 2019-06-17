#include "sphere.hpp"
#include <math.h>

Sphere::Sphere()
    :radius_{0.0f}, centre_{0.0f,0.0f,0.0f}
    {}

Sphere::Sphere(float radius, glm::vec3 const& centre)
    :radius_(radius), centre_(centre)
    {}

float Sphere::area() const
{
    return 4*M_PI*radius_*radius_; 
}

float Sphere::volume() const 
{
    return (4.0f/3.0f)*M_PI*radius_*radius_*radius_;
}