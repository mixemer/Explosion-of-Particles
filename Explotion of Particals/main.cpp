

#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.hpp"
#include <stdlib.h>
#include <time.h>
#include "Swarm.hpp"

using namespace std;
using namespace MX;

//#ifdef __IPHONEOS__
//#    include <SDL2/SDL_opengles.h> // we want to use OpenGL ES
//#else
//#    include <SDL2/SDL_opengl.h> // otherwise we want to use OpenGL
//#endif


int main () {
    
    srand(time(NULL));
    
    Screen screen;
    
    if(screen.init() == false){
        cout << "Error initilising SDL." << endl;
    }
    
    Swarm swarm;
    
    while (true) {
        // Update particals
        // Draw particals
        
        int elapsed = SDL_GetTicks();
        
        //screen.clear();
        swarm.update(elapsed);
        
        unsigned char green = (1 + cos(elapsed * 0.0001)) * 110;
        unsigned char red = (1 + sin(elapsed * 0.0002)) * 110;
        unsigned char blue = (1 + sin(elapsed * 0.0003)) * 110;
        
        const Particle * const pParticles = swarm.getParticles();
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];
            
            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;
            
            screen.setPixel(x, y, red, green, blue);
        }
        
        screen.boxBlur();
        
        
        // Draw the screen
        screen.update();
        
        
        // Check for massages/events
        if (!screen.processEvents()) {
            break;
        }
    }
    

    screen.close();
    return 0;
}














