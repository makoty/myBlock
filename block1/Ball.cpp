#include "Const.h"
#include "Ball.h"


Ball::Ball()
{
    _radius = 7;    // 半径
    _vecX   = 0;    // X方向速度
    _vecY   = 5;    // Y方向速度
}

Ball::~Ball()
{
}

short Ball::getRadius() { return _radius; }

void Ball::move() {
    _posX += _vecX;
    _posY += _vecY;
}