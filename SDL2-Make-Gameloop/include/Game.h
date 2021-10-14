#include <SDL2\SDL.h>
#include <iostream>
#include <string>
#include <SDL2\SDL_image.h>
#include <SDL2\SDL_ttf.h>
#include <vector>
#include "brick.h"
class Game
{
public:

    Game();
    ~Game();
    void run();
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

private:

SDL_Window* gWindow;
SDL_Surface* gScreenSurface;


SDL_Surface* gXOut ;
void processEvents();
void update();
void render();
void close();
void cleanUp();
void showBricks();
void activeArea(float x,float y);
bool m_gameIsRunning;
void printTotals();
void updateTotals();

   
std::vector<brick*> m_bricks;
 
TTF_Font* m_gameFont;
SDL_Renderer* m_renderer;

SDL_Texture* m_totalsText;
SDL_Rect m_totalsRect;
};