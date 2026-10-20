// maybe something here...
#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    // methods...

    BasicTransform(const sf::Vector2f& scale = {1.f, 1.f}, const sf::Vector2f& translation = {0.f, 0.f})
        : scale(scale), translation(translation){}

    sf::Vector2f applyPoint(const sf::Vector2f& p) const
    {
        return p*scale + translation;
    }

    sf::Vector2f applyVector(const sf::Vector2f& p) const
    {
        return p*scale;
    }

    bool operator==(const BasicTransform& other) const
    {
        return other.scale == scale && other.translation == translation;
    }

    sf::Vector2f scale;
    sf::Vector2f translation;

};
