#include "box.hpp"

Box::Box()
    :min_{0.0f,0.0f,0.0f}, max_{0.0f,0.0f,0.0f}
    {std::cout << "Box was created by the Box-Constructor" << std::endl;}

Box::Box(glm::vec3 min, glm::vec3 max)
    :min_(min), max_(max)
    {std::cout << "Box was created by the Box-Constructor" << std::endl;}

Box::Box(glm::vec3 min, glm::vec3 max, Color const& col, std::string const& name)
    :Shape(name, col), min_(min), max_(max)
    {std::cout << "Box was created by the Box-Constructor" << std::endl;}

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

std::ostream& Box::print(std::ostream& os) const
{
 Shape::print(os);
 os <<  " ; {" << min_.x << "," << min_.y << "," << min_.z << "} ; {"
<< max_.x << "," << max_.y << "," << max_.z << "} \n";

return os;
}

