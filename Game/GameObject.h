#pragma once
#include <SFML/Graphics.hpp>

class GameObject : public sf::Drawable {
public:
    virtual void update(sf::Time deltaTime) = 0;
    virtual sf::FloatRect getBounds() const = 0;
};

