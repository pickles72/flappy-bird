#ifndef POINT_H
#define POINT_H

#include <SFML/Graphics.hpp>

class Point : public sf::Drawable
{
private:
    int points;
    sf::Texture numGraphics[10];
    sf::Sprite numSprites[10];

    int sizeX;
    int sizeY;
    int windowSizeX;
    int windowSizeY;

    int onesPlace;
    int tensPlace;
    
public:
    Point(int sizeX, int sizeY, int windowSizeX, int windowSizeY);
    ~Point();

    // Initializers
    void initializeTextures();
    void initializePoints();

    void calculateDigits();

    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    // Accessors
    int getPoints();
    void setPoints(int points);
    void incrementPoints();
};

#endif
