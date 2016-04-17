//
//  PuzzlePiece.cpp
//  Puzzle
//
//  Created by charlie on 4/18/16.
//
//

#include "PuzzlePiece.hpp"

USING_NS_CC;

Size PuzzlePiece::gridSize = Size(0, 0);
Size PuzzlePiece::gridHalfSize = Size(0, 0);


Node *PuzzlePiece::createPiece(PieceColor color, int x, int y)
{
    auto piece = PuzzlePiece::create();
    piece->setGrid(x, y);
    piece->setPieceColor(color);
    return piece;   
}

Node *PuzzlePiece::createPiece(int x, int y)
{
    auto piece = PuzzlePiece::create();
    return piece;
}

void PuzzlePiece::setGridSize(Size size)
{
    PuzzlePiece::gridSize = size;
    PuzzlePiece::gridHalfSize = size/2;
}

bool PuzzlePiece::init()
{
    if (!Node::init())
    {
        return false;
    }
    
    this->setContentSize(PuzzlePiece::gridSize);
    this->_piece = Sprite::create();
    this->addChild(this->_piece);
    
    return true;
}

void PuzzlePiece::setGrid(int x, int y)
{
    this->_x = x;
    this->_y = y;
    auto gs = PuzzlePiece::gridSize.width;
    auto ghs = PuzzlePiece::gridHalfSize.width;
    this->setPosition(x * gs + ghs, y * gs + ghs);
}

void PuzzlePiece::setPieceColor(PieceColor color)
{
    std::stringstream name;
    name << "piece-0" << color << ".png";
    this->_piece->setTexture(name.str());
    this->_piece->setScale(PuzzlePiece::gridSize.width/this->_piece->getContentSize().width);
}