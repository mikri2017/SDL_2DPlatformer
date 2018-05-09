#ifndef MAINHERO_H_INCLUDED
#define MAINHERO_H_INCLUDED

#include "GameObject.h"
#include <SDL2/SDL.h>
#include <iostream>

class TextureMgr;

class MainHero : public GameObject
{
private:
    std::string spriteFilePath;
    SDL_Texture *hero_texture;
    SDL_Rect hero_sourceRect;
    SDL_Rect hero_destRect;
    int curFrame;
    TextureMgr *textureMgr;
    std::string textureName;
public:
    MainHero();
    ~MainHero();
    bool init(SDL_Renderer *renderer);
    void draw(SDL_Renderer *renderer);
    bool checkCollisionWithGameObject(GameObject *g_obj);
};

#endif // MAINHERO_H_INCLUDED