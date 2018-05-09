#include "MainHero.h"
#include <SDL2/SDL_image.h>
#include "TextureMgr.h"

MainHero::MainHero()
{
    // Задаем размеры главного героя
    g_obj_zone.x = 100;
    g_obj_zone.y = 100;
    g_obj_zone.w = 100;
    g_obj_zone.h = 100;

    textureName = "main_hero";

    // Указываем спрайтовый файл персонажа
    spriteFilePath = "assets/sprites/main_hero/Grue.png";

    textureMgr = new TextureMgr();
}

MainHero::~MainHero()
{
    delete textureMgr;
}

bool MainHero::init(SDL_Renderer *renderer)
{
    if(textureMgr->load(spriteFilePath, textureName, renderer))
        return true;
    else
    {
        errorText = SDL_GetError();
        return false;
    }
}

void MainHero::draw(SDL_Renderer *renderer)
{
    //textureMgr->draw(textureName, 0, 0, 56, 71, renderer);
}

bool MainHero::checkCollisionWithGameObject(GameObject *g_obj)
{
    return false;
}