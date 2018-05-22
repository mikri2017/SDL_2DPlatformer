#include "Camera.h"

Camera::Camera()
{
    // Задаем зону камеры
    area.x = 0;
    area.y = 0;
    area.w = 0;
    area.h = 0;

    // Задаем позицию игрового объекта
    // в кадре камеры
    g_obj_mgr_pos.x = 0;
    g_obj_mgr_pos.y = 0;

    watch_g_obj_mgr = false;
}

int Camera::getPositionBeginX()
{
    return area.x;
}

int Camera::getPositionBeginY()
{
    return area.y;
}

void Camera::setPosition(int x, int y)
{
    if(!watch_g_obj_mgr)
    {
        // Не следим за игровым объектом
        if(x < 0)
            x = 0;
        if(y < 0)
            y = 0;
        
        area.x = x;
        area.y = y;
    }
}

void Camera::setWidthHeight(int w, int h)
{
    area.w = w;
    area.h = h;
}

void Camera::updatePosition()
{
    if(watch_g_obj_mgr)
    {
        // Меняем данные, если следим за
        // объектом - подстраиваемся под него
        SDL_Point cur_g_obj_pos = g_obj_mgr->getPosition();
        
        area.x = cur_g_obj_pos.x - g_obj_mgr_pos.x;
        area.y = cur_g_obj_pos.y - g_obj_mgr_pos.y;

        // Проверяем выход за границы сцены
        if(area.x < 0)
            area.x = 0;
        if(area.y < 0)
            area.y = 0;
    }
}

void Camera::setGameObjectRelativePos(int x, int y)
{
    if(x < 0)
        x = 0;
    g_obj_mgr_pos.x = x;

    if(y < 0)
        y = 0;
    g_obj_mgr_pos.y = y;
}

void Camera::setGameObjectWatchingMode(bool watch)
{
    watch_g_obj_mgr = watch;
}

void Camera::setGameObjectForWatch(GameObjectMgr *g_obj)
{
    g_obj_mgr = g_obj;
}

SDL_Rect Camera::getGameObjectAreaInCam(GameObjectMgr *g_obj)
{
    SDL_Rect g_obj_in_cam_area = g_obj->getGameObjectZone();
    if(g_obj_in_cam_area.x + g_obj_in_cam_area.w > area.x + area.w)
        g_obj_in_cam_area.w -= area.x + area.w;
    if(g_obj_in_cam_area.y + g_obj_in_cam_area.h > area.y + area.h)
        g_obj_in_cam_area.h -= area.y + area.h; 
    g_obj_in_cam_area.x -= area.x;
    g_obj_in_cam_area.y -= area.y;
    return g_obj_in_cam_area;
}