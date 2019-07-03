//
//  keyboard.cpp
//  Chip8
//
//  Created by Эльдар Дамиров on 03.07.2019.
//  Copyright © 2019 Эльдар Дамиров. All rights reserved.
//

#pragma once




/*

**********************
**********************
// 1 \\ 2 // 3 \\ C //
// 4 \\ 5 // 6 \\ D //
// 7 \\ 8 // 9 \\ E //
// A \\ 0 // B \\ F //
**********************
**********************


*/


class Keyboard
    {
    public:
        Keyboard()
            {
            
            }
        
    
    private:
        std::array <bool, 16> buttonsMap{}; 
        
        
        
        
    
    };
