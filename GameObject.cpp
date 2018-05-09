#include "GameObject.h"

std::string GameObject::getErrorText()
{
    return errorText;
}

SDL_Rect GameObject::getGameObjectZone()
{
    return g_obj_zone;
}