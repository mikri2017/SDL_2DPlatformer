# SDL_2DPlatformer
Небольшой 2D платформер на C++ и SDL2

### Требования к системе
1. Общие требования:

Следующие библиотеки SDL2:
* SDL2
* SLD2_image
* SDL2_mixer
* SDL2_ttf

2. Windows:
* Компилятор MinGW-w64 (C:\MinGW\i686-8.1.0-posix-dwarf-rt_v6-rev0)

  https://sourceforge.net/projects/mingw-w64/
* SDL2 (C:\SDL\SDL2-2.0.8)

  https://github.com/libsdl-org/SDL/releases
* SLD2_image (C:\SDL\SDL2_image-2.0.3)

  https://github.com/libsdl-org/SDL_image/releases
* SDL2_mixer (C:\SDL\SDL2_mixer-2.0.2)
  
  https://github.com/libsdl-org/SDL_mixer/releases
* SDL2_ttf (C:\SDL\SDL2_ttf-2.0.14)
  
  https://github.com/libsdl-org/SDL_ttf/releases

3. Linux:
Требуется компилятор g++.

Для установки библиотек SDL2, например, в Debian достаточно выполнить команду:

```
sudo apt-get install libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev
```

### Компиляция и использование
Проект кроссплатформенный (Windows/Linux), собирать, либо через общий Makefile, либо, открыв папку с проектом в Visual Studio Code, зажимаем Ctrl + Shift + B и выбираем желаемый сценарий сборки.

### Разработчики

* **Михаил Рыжков** - <2007mik007@mail.ru>

При поддержке еще одного стеснительного товарища ;)
