#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RectangleShape walls;
    walls.setSize({500, 300});
    walls.setPosition({150, 450});
    walls.setFillColor(sf::Color(0x4D, 0x2E, 0x0B));

    sf::RectangleShape door;
    door.setSize({80, 150});
    door.setPosition({200, 600});
    door.setFillColor(sf::Color(0, 0, 0));

    sf::ConvexShape trapeze;
    trapeze.setFillColor(sf::Color(0x5D, 0x1E, 0x17));
    trapeze.setPosition({75, 450});
    trapeze.setPointCount(4);
    trapeze.setPoint(0, {0, 0});
    trapeze.setPoint(1, {+650, 0});
    trapeze.setPoint(2, {+450, -150});
    trapeze.setPoint(3, {+175, -150});

    sf::RectangleShape chimney;
    chimney.setSize({60, 100});
    chimney.setPosition({450, 250});
    chimney.setFillColor(sf::Color(0x3B, 0x38, 0x38));

    sf::CircleShape circle1(25);
    circle1.setPosition({450, 200});
    circle1.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));

    sf::CircleShape circle2(30);
    circle2.setPosition({460, 165});
    circle2.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));

    sf::CircleShape circle3(37);
    circle3.setPosition({485, 130});
    circle3.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));

    sf::CircleShape circle4(39);
    circle4.setPosition({485, 80});
    circle4.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));

    sf::RenderWindow window(sf::VideoMode({900, 900}), "Convex Shapes");
    window.clear();
    window.draw(walls);
    window.draw(door);
    window.draw(trapeze);
    window.draw(chimney);
    window.draw(circle1);
    window.draw(circle2);
    window.draw(circle3);
    window.draw(circle4);
    window.display();

    sf::sleep(sf::seconds(7));
}