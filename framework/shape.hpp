#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <math.h>
#include <glm/vec3.hpp>
#include "color.hpp"



/*
 * x - width
 * y - heigth
 * z - depth
 */

class Shape {
    public:
    virtual float area() const = 0;
    virtual float volume() const = 0;
    virtual std::ostream& print(std::ostream& os) const;

    Shape();

    Shape(std::string const& name, Color const& color);
        
    protected:
    std::string name_;
    Color color_;
    
};

std::ostream& operator<<(std::ostream os, Shape const& s);

#endif