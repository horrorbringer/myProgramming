#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My First Game");

    // Set up a basic shape
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);

    // Game loop
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update game state
        // (e.g., move objects, check for collisions)

        // Clear the screen
        window.clear();

        // Draw your shape
        window.draw(shape);

        // Display what has been drawn
        window.display();
    }

    return 0;
}
