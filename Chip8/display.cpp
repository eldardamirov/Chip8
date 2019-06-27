//
//  display.cpp
//  Chip8
//
//  Created by Эльдар Дамиров on 27.06.2019.
//  Copyright © 2019 Эльдар Дамиров. All rights reserved.
//

#pragma once


#include <stdio.h>
#include <iterator>
#include <algorithm>


class Display
    {
    public:
        Display ( size_t sizeXT = 64, size_t sizeYT = 32, char fillCharacterT = '*' )
            {
            sizeX = sizeXT;
            sizeY = sizeYT;
            
            displayBuffer = new bool* [ sizeY ];
            for ( size_t current { 0 }; current < sizeY; current++ )
                {
                displayBuffer [ current ] = new bool [ sizeX ];
                }
            }
            
        void update()
            {
            clear();
            representBuffer();
            }
            
        void clear()
            {
            for ( size_t currentY { 0 }; currentY < sizeY; currentY++ )
                {
                std::transform( displayBuffer [ currentY ], ( displayBuffer [ currentY ] + sizeX ), displayBuffer [ currentY ], []( ... ) { return 0; } );
                }
            }
            
        void setFillCharacter ( char fillCharacterT = '*' )
            {
            fillCharacter = fillCharacterT;
            }
    
    private:
        size_t sizeX, sizeY;
        char fillCharacter{};
        
        bool** displayBuffer{};
        
        void representBuffer()
            {
            for ( size_t currentY { 0 }; currentY < sizeY; currentY++ )
                {
                std::for_each ( displayBuffer [ currentY ], ( displayBuffer [ currentY ] + sizeX ), []( bool pixel ) { printf ( "%d", pixel ); } );
                printf ( "\n" );
                }
            }
        
        
        
        
        
    };
