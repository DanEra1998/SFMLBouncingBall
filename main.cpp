#include <iostream>
#include <SFML/Graphics.hpp>
#include "BouncingBall.h"
int main() {
    BouncingBall<sf::CircleShape> ball;
    sf::RenderWindow window(sf::VideoMode(720, 420, 32), "Test");
    window.setFramerateLimit(60);

    sf::Vector2f velocity;
    velocity.x = 1.0;
    velocity.y = 1.0;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }

        }
        ball.moveBall(velocity);
       ball.bounce(window.getSize(),velocity);
        window.clear(sf::Color::Black);
       window.draw(ball);
        window.display();
    }
    return 0;
}
