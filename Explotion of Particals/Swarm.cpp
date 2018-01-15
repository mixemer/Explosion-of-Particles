//
//  Swarm.cpp
//  FirstSDL
//
//  Created by Mehmet Sahin on 1/12/18.
//  Copyright © 2018 Mehmet Sahin. All rights reserved.
//

#include "Swarm.hpp"

namespace MX {

Swarm::Swarm(): lastTime(0){
    
    m_pParticles = new Particle[NPARTICLES];
    
}
    
Swarm::~Swarm() {
    delete [] m_pParticles;
}
    
void Swarm::update(int elapsed) {
    
    int interval = elapsed - lastTime;
    
    for (int i = 0; i < Swarm::NPARTICLES; i++) {
        m_pParticles[i].update(interval);
    }
    
    lastTime = elapsed;
    
}
    
}
    
    
    

