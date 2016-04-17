//
//  PuzzleBoard.hpp
//  Puzzle
//
//  Created by charlie on 4/18/16.
//
//

#ifndef PuzzleBoard_hpp
#define PuzzleBoard_hpp

#include "cocos2d.h"

class PuzzleBoard : public cocos2d::Node
{
public:
    static cocos2d::Node *createBoard();
    virtual bool init();
    CREATE_FUNC(PuzzleBoard);
};



#endif /* PuzzleBoard_hpp */
