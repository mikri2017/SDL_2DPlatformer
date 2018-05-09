#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED

#include "DebugParams.h"
#include <SDL2/SDL.h>
#include <iostream>

class GameObject
{
protected:
    SDL_Rect g_obj_zone;
    std::string errorText; 
public:
    virtual ~GameObject() {};
    virtual std::string getErrorText();
    virtual SDL_Rect getGameObjectZone();
    virtual bool init(SDL_Renderer *renderer) = 0;
    virtual void draw(SDL_Renderer *renderer) = 0;
    virtual bool checkCollisionWithGameObject(GameObject *g_obj) = 0;
};

#endif // GAMEOBJECT_H_INCLUDED