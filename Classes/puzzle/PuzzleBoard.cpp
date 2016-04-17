//
//  PuzzleBoard.cpp
//  Puzzle
//
//  Created by charlie on 4/18/16.
//
//

#include "PuzzleBoard.hpp"
#include "PuzzlePiece.hpp"

USING_NS_CC;

Node *PuzzleBoard::createBoard()
{

    auto board = PuzzleBoard::create();

    return board;
}

bool PuzzleBoard::init()
{
    
    if (!Node::init())
    {
        return false;
    }
    
    Size vs = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto bs = vs.width - 20;
    this->setContentSize(Size(bs, bs));
    auto ps = bs / 9;
    PuzzlePiece::setGridSize(Size(ps, ps));
    
    
    for(int i = 0 ; i < 9 ; i++) {
        for(int j = 0 ; j < 9 ; j++) {
            auto type = (int)((j+i)%6) + 1;
            auto piece = PuzzlePiece::createPiece((PieceColor)type, i, j);
            this->addChild(piece);
        }
    }

    return true;
}
