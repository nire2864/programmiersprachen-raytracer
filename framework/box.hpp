#ifndef BOX_HPP
#define BOX_HPP

#include "shape.hpp"


class Box: public Shape {
    public:
    Box();
    Box(glm::vec3 min, glm::vec3 max);
    Box(glm::vec3 min, glm::vec3 max, Color const& col, std::string const& name);


    float area() const override;
    float volume() const override;
    std::ostream& print(std::ostream& os) const override;

    private:
    glm::vec3 min_{};
    glm::vec3 max_{};



};

#endif