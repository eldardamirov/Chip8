//
//  cpu.cpp
//  Chip8
//
//  Created by Эльдар Дамиров on 27.06.2019.
//  Copyright © 2019 Эльдар Дамиров. All rights reserved.
//

#include <array>

#include "resources.cpp"
#include "display.cpp"

using tiny = unsigned char;

#define elementsQuantity(x) (sizeof(x) / sizeof(x[0]))

class Cpu
    {
    public:
        Cpu(): programCounter ( 0x200 ), stackPointer ( 0 ), memoryOffsetCounter ( 0x200 ), delayTimer ( 0 ), soundTimer ( 0 ), presavedTime ( time ( NULL ) ),
               currentTime ( time ( NULL ) )
            {
            init();
            }
        
    private:
        std::array <tiny, 4096> ram{};
        std::array <int, 16> stack{}; 
        std::array <tiny, 16> registers{};
        
        
        int programCounter{};
        tiny stackPointer{};
        tiny memoryOffsetCounter{};
        
        int delayTimer{};
        int soundTimer{};
        size_t presavedTime{}; 
        size_t currentTime{}; // has to be updated each iteration;
        
        Display display;
        
        void init()
            {
            std::copy ( std::begin ( fontset ), ( std::begin ( fontset ) + elementsQuantity ( fontset ) ), ram.begin() );
            }
            
        void timersController()
            {
            currentTime = time ( NULL );
            
            if ( ( currentTime - presavedTime ) >= 1 )
                {
                if ( delayTimer > 0 ) { delayTimer--; }
                if ( soundTimer > 0 ) { soundTimer--; } 
                }
            }
            
        void interpret ( int instruction )
            {
            switch ( instruction )
                {
                case 0x00E0:
                    {
                    display.clear();
                    }
//                case 0x00EE:
//                    {
//                    programCounter
//                    stackPointer--;
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
//                case:
//                    {
//                    
//                    }
                    
                    
                default:
                    {
                    
                    }
                    
                }
            
            
            }
        
        
    
    };
