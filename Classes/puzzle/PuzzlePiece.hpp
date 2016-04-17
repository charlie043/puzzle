//
//  PuzzlePiece.hpp
//  Puzzle
//
//  Created by charlie on 4/18/16.
//
//

#ifndef PuzzlePiece_hpp
#define PuzzlePiece_hpp

#include "cocos2d.h"

USING_NS_CC;

enum PieceColor {
    COLOR_RED = 0,
    COLOR_BLUE = 1,
    COLOR_YELLOW = 2,
    COLOR_GREEN = 3,
    COLOR_PINK = 4,
    COLOR_BLACK = 5
};

class PuzzlePiece: public Node
{
    int _x, _y;
    Sprite *_piece;
    
public:
    static Node *createPiece(int x, int y);
    static Node *createPiece(PieceColor, int x, int y);
    static void setGridSize(Size gridSize);
    static Size gridSize;
    static Size gridHalfSize;
    
    virtual bool init();
    
    void setGrid(int x, int y);
    void setPieceColor(PieceColor);
    
    CREATE_FUNC(PuzzlePiece);
};



#endif /* PuzzlePiece_hpp */
