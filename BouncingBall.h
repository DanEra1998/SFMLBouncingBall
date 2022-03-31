//
// Created by danie on 2/1/2022.
//

#ifndef CS8_BOUNCING_BALL_BOUNCINGBALL_H
#define CS8_BOUNCING_BALL_BOUNCINGBALL_H
#include <iostream>
#include <SFML/Graphics.hpp>
template <class T>
class BouncingBall : public sf::Drawable {
private:

    sf::CircleShape ball;

public:
    //default constructor
    BouncingBall();
    void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void bounce(sf::Vector2u windowSize, sf::Vector2f& velocity);
    void moveBall(sf::Vector2f velocity);
   // sf::Vector2f getVelocity();


};
#include "BouncingBall.cpp"

#endif //CS8_BOUNCING_BALL_BOUNCINGBALL_H
