#include "shape.hpp"

Shape::Shape()
    :name_{"unnamed"}, color_{1.0f,1.0f,1.0f}
    {}

Shape::Shape(std::string const& name, Color const& color)
    :name_(name), color_(color)
    {} 

std::ostream& Shape::print(std::ostream& os) const
{
    os << name_ << " ; {" << color_.r <<"," << color_.g << "," << color_.b << "}" ;
}

std::ostream& operator<<(std::ostream os, Shape const& s)
{
 return s.print(os);   
}