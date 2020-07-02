#include "Point.h"
#include "ImageConstants.h"

Point::Point(int sizeX, int sizeY, int windowSizeX, int windowSizeY) {
    /**
     * @brief Initialize the points to zero and setup images
     * 
     */

    // Set size member variables
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->windowSizeX = windowSizeX;
    this->windowSizeY = windowSizeY;

    // Initialize point graphics
    this->initializePoints();
    this->initializeTextures();
}

void Point::initializeTextures() {
    /**
     * @brief Load textures from image and initalize sprites
     * 
     */
    // Load Images
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::ZERO_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::ONE_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::TWO_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::THREE_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::FOUR_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::FIVE_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::SIX_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::SEVEN_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::EIGHT_POINTS);
    this->numGraphics[0].loadFromFile(ImageConstants::FILENAME, ImageConstants::NINE_POINTS);

    // Initialize Graphics
    for(int i = 0; i < 10; i++) {
        this->numSprites[i].setTexture(this->numGraphics[i]);
        this->numSprites[i].setScale(2, 2);
    }
}

void Point::initializePoints() {
    /**
     * @brief Initialize all points values to 0
     * 
     */
    this->points = 0;

    // Initialize Digits
    this->onesPlace = 0;
    this->tensPlace = 0;
}

void Point::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    
}

int Point::getPoints() {
    return this->points;
}

void Point::setPoints(int points) {
    this->points = points;
}

void Point::incrementPoints() {
    this->points += 1;
}

void Point::calculateDigits() {
    /**
     * @brief Calculate digits to display
     * 
     */
    if(int tens = (this->points / 10)) {
        this->tensPlace = tens;
    }

    this->onesPlace = this->points % 10;
}