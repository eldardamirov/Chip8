//
//  cpu.cpp
//  Chip8
//
//  Created by Эльдар Дамиров on 27.06.2019.
//  Copyright © 2019 Эльдар Дамиров. All rights reserved.
//

#include <array>
#include "resources.cpp"

using tiny = unsigned char;

#define elementsQuantity(x) (sizeof(x) / sizeof(x[0]))

class Cpu
    {
    public:
        Cpu(): registerI ( 0x200 ), stackCounter ( 0 ), memoryOffsetCounter ( 0x200 ), delayTimer ( 0 ), soundTimer ( 0 )
            {
            init();
            }
        
    private:
        std::array <tiny, 4096> ram{};
        std::array <int, 16> stack{}; 
        std::array <tiny, 16> registers{};
        
        int registerI{};
        tiny stackCounter{};
        tiny memoryOffsetCounter{};
        
        int delayTimer{};
        int soundTimer{};
        
        
        void init()
            {
            std::copy ( std::begin ( fontset ), ( std::begin( fontset ) + elementsQuantity(fontset) ), ram.begin() );
            
            
            }
        
        
    
    };
