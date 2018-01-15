//
//  Swarm.hpp
//  FirstSDL
//
//  Created by Mehmet Sahin on 1/12/18.
//  Copyright © 2018 Mehmet Sahin. All rights reserved.
//

#ifndef Swarm_hpp
#define Swarm_hpp

#include "Particle.hpp"

namespace MX {

class Swarm{
public:
    const static int NPARTICLES = 20000;
private:
    Particle *m_pParticles;
    int lastTime;
    
public:
    Swarm();
    virtual ~Swarm();
    void update(int elapsed);
    
    const Particle * const getParticles() {
        return m_pParticles;
    };
    
};
    
}

#endif /* Swarm_hpp */
