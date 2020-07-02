#include <SFML/Graphics.hpp>
#include <string>

namespace ImageConstants {

// Image Filename
static const std::string FILENAME = "images/FlappyBird.png";

// Points
static const sf::IntRect ZERO_POINTS = sf::IntRect(496, 60, 12, 18);
static const sf::IntRect ONE_POINTS = sf::IntRect(136, 455, 8, 18);
static const sf::IntRect TWO_POINTS = sf::IntRect(292, 160, 12, 18);
static const sf::IntRect THREE_POINTS = sf::IntRect(306, 160, 12, 18);
static const sf::IntRect FOUR_POINTS = sf::IntRect(320, 160, 12, 18);
static const sf::IntRect FIVE_POINTS = sf::IntRect(334, 160, 12, 18);
static const sf::IntRect SIX_POINTS = sf::IntRect(292, 184, 12, 18);
static const sf::IntRect SEVEN_POINTS = sf::IntRect(306, 184, 12, 18);
static const sf::IntRect EIGHT_POINTS = sf::IntRect(320, 184, 12, 18);
static const sf::IntRect NINE_POINTS = sf::IntRect(334, 184, 12, 18);

// Game Assets
static const sf::IntRect GAME_OVER = sf::IntRect(395, 59, 100, 21);
static const sf::IntRect SCOREBOARD = sf::IntRect(3, 259, 113, 57);
static const sf::IntRect BRONZE_MEDAL = sf::IntRect(112, 477, 22, 22);
static const sf::IntRect SILVER_MEDAL = sf::IntRect(112, 453, 22, 22);
static const sf::IntRect GOLD_MEDAL = sf::IntRect(121, 282, 22, 22);
static const sf::IntRect PLATINUM_MEDAL = sf::IntRect(121, 258, 22, 22);

// Pipes
static const sf::IntRect PIPE_TOP = sf::IntRect(84, 323, 26, 160);
static const sf::IntRect PIPE_BOTTOM = sf::IntRect(56, 323, 26, 160);

// Flappy
static const sf::IntRect FLAPPY = sf::IntRect(0, 490, 25, 25);

// Background
static const sf::IntRect BACKGROUND = sf::IntRect(146, 0, 144, 256);
static const sf::IntRect GRASS = sf::IntRect(292, 0, 168, 56);

}