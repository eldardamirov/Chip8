//
//  cpu.cpp
//  Chip8
//
//  Created by Эльдар Дамиров on 27.06.2019.
//  Copyright © 2019 Эльдар Дамиров. All rights reserved.
//

#include <array>

using tiny = char;

class Cpu
    {
    public:
        Cpu(): registerI ( 200 ), stackCounter ( 0 ), memoryOffsetCounter ( 200 ), delayTimer ( 0 ), soundTimer ( 0 ){}
        
    private:
        std::array <tiny, 4096> ram{};
        std::array <int, 16> stack{}; 
        std::array <tiny, 16> registers{};
        
        int registerI{};
        tiny stackCounter{};
        tiny memoryOffsetCounter{};
        
        int delayTimer{};
        int soundTimer{};
        
        
    
    };
