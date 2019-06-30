#include "sphere.hpp"


Sphere::Sphere()
    :Shape{}, radius_{0.0f}, centre_{0.0f,0.0f,0.0f}
    {}

Sphere::Sphere(float radius, glm::vec3 const& centre)
    :Shape{}, radius_(radius), centre_(centre)
    {}

Sphere::Sphere(float radius, glm::vec3 const& centre, Color const& col, std::string const& name)
    :Shape(name, col), radius_(radius), centre_(centre)
    {}

float Sphere::area() const
{
    return 4*M_PI*radius_*radius_; 
}

float Sphere::volume() const 
{
    return (4.0f/3.0f)*M_PI*radius_*radius_*radius_;
}

std::ostream& Sphere::print(std::ostream& os) const
{
 Shape::print(os);
 os << " ; {" << radius_<< "} ; {" << centre_.x << "," << centre_.y << "," << centre_.z << "} \n";
 return os;
}

bool Sphere::intersect(Ray const& ray, Hitpoint &p)
{
    Ray ray_to_normalize{ray};
    float d;
    bool hit = glm::intersectRaySphere(ray_to_normalize.origin, glm::normalize(ray_to_normalize.direction), centre_, radius_*radius_, d);
    
    if(hit == true)
    {
        p.color_ = color_;
        p.direction_ = ray_to_normalize.direction;
        p.distance = d;
        p.hit_ = hit;
        p.name_ = name_;
    }
}