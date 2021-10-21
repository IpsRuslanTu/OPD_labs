#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1000, 600}), "Traffic lights");
    window.clear();

    sf::RectangleShape shape11;
    shape11.setSize({200, 40});
    shape11.setPosition({40, 40});
    shape11.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({40, 320});
    shape12.setPosition({120, 40});
    shape12.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape12);

    sf::CircleShape shape21(80);
    shape21.setPosition({300, 40});
    shape21.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape21);

    sf::RectangleShape shape22;
    shape22.setSize({40, 320});
    shape22.setPosition({300, 40});
    shape22.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape22);

    sf::RectangleShape shape23;
    shape23.setSize({210, 40});
    shape23.setRotation(45);
    shape23.setPosition({335, 180});
    shape23.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape23);

    sf::CircleShape shape31(80);
    shape31.setPosition({520, 40});
    shape31.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape31);

    sf::RectangleShape shape32;
    shape32.setSize({40, 320});
    shape32.setPosition({520, 40});
    shape32.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape32);

    sf::RectangleShape shape33;
    shape33.setSize({210, 40});
    shape33.setRotation(45);
    shape33.setPosition({555, 180});
    shape33.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape33);

    window.display();

    sf::sleep(sf::seconds(5));
}