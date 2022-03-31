//
// Created by danie on 2/1/2022.
//
#ifndef CS8_BOUNCING_BALL_BOUNCINGBALL_CPP
#define CS8_BOUNCING_BALL_BOUNCINGBALL_CPP
#include "BouncingBall.h"
template<class T>
BouncingBall<T>::BouncingBall() : ball()
{
    ball.setRadius(25.f);
    ball.setPosition(0,0);
    ball.setFillColor(sf::Color::Red);


}
template<class T>
void BouncingBall<T>::bounce(sf::Vector2u windowSize, sf::Vector2f& velocity) {
// save variables
//we do not have to use T all the time, we can use int
//    sf::FloatRect bounds = ball.getGlobalBounds();
//    bounds.top = ballDiameter + windowSize.x;
//    //if your balls pos

    if (ball.getPosition().x <= 0 || ball.getPosition().x + ball.getGlobalBounds().width >= windowSize.x){
       velocity.x *= -1;
    }else if (ball.getPosition().y <= 0 || ball.getPosition().y + ball.getGlobalBounds().height >= windowSize.y) {
        velocity.y *= -1;
    }
    ball.move(velocity.x, velocity.y);
}
template<class T>
void BouncingBall<T>::draw(sf::RenderTarget& window, sf::RenderStates states) const {
window.draw(ball);
}

template<class T>
void BouncingBall<T>::moveBall(sf::Vector2f velocity) {

   ball.move(velocity);
}

//template<class T>
//sf::Vector2f BouncingBall<T>::getVelocity() {
//    return velocity;
//}


#endif