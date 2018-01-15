//
//  Particle.hpp
//  FirstSDL
//
//  Created by Mehmet Sahin on 1/12/18.
//  Copyright © 2018 Mehmet Sahin. All rights reserved.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdlib.h>

namespace MX {

struct Particle {
    double m_x;
    double m_y;
    
private:
    double m_speed;
    double m_direction;
    
    void init();
    
public:
    Particle();
    virtual ~Particle();
    void update(int interval);
};
    
}

#endif /* Particle_hpp */










