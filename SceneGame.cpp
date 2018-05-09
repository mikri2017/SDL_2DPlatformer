#include "MainConstants.h"
#include "SceneGame.h"
#include <iostream>

SceneGame::SceneGame()
{
    lives = 3; // Выставляем количество жизней
    hero = new MainHero();

    delay_time = 5;
}

SceneGame::~SceneGame()
{
    delete hero;
#ifdef DEBUG_MESSAGES_SHOW
    std::cout << "SceneGame end\n";
#endif // DEBUG_MESSAGES_SHOW
}

void SceneGame::render(SDL_Renderer *renderer)
{
    if(!b_paused)
    {
        if(b_first_render)
        {
            setFirstRenderState(false);

            SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );
            SDL_RenderClear( renderer );
            SDL_SetRenderDrawColor( renderer, 255, 0, 0, 255 );

            if(!hero->init(renderer))
                std::cout << "Error: " << hero->getErrorText() << std::endl;
        }

        hero->draw(renderer);

        SDL_RenderPresent(renderer);

        SDL_Delay(delay_time);
    }
}

void SceneGame::render_clean(SDL_Renderer *renderer)
{
    // Стираем текущие объекты сцены
}

gameReaction SceneGame::process_mouse_motion(Sint32 x, Sint32 y)
{
    if(!b_paused)
    {
    }

    return gameReaction::gr_ignore;
}

gameReaction SceneGame::process_mouse_button_event(SDL_MouseButtonEvent m_btn_event)
{
    return gameReaction::gr_ignore;
}

gameReaction SceneGame::process_keyboard_keydown(SDL_Keycode keycode)
{
    if(!b_paused)
    {
    }

    return gameReaction::gr_ignore;
}
