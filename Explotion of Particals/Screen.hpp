//
//  Screen.hpp
//  FirstSDL
//
//  Created by Mehmet Sahin on 1/12/18.
//  Copyright © 2018 Mehmet Sahin. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <SDL2/SDL.h>

namespace MX {

class Screen {
public:
    const static int SCREEN_WIDTH = 1100;
    const static int SCREEN_HEIGHT = 800;
private:
    //m_ = member
    
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer1;
    Uint32 *m_buffer2;
    
public:
    Screen();
    bool init(); // success?
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    bool processEvents();
    void close(); // quit
    void clear();
    void boxBlur();
};
    

}

#endif /* Screen_hpp */
