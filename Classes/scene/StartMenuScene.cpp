#include "StartMenuScene.h"
#include "../puzzle/PuzzleBoard.hpp"

USING_NS_CC;

Scene* StartMenu::createScene()
{
    auto scene = Scene::create();
    auto layer = StartMenu::create();

    scene->addChild(layer);

    return scene;
}

bool StartMenu::init()
{
    if ( !LayerColor::initWithColor(Color4B::WHITE) )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto board = PuzzleBoard::createBoard();
    board->setPosition(Vec2(origin.x+10, origin.y+(visibleSize.height-board->getContentSize().height)/2));
    this->addChild(board);
    
    return true;
}
