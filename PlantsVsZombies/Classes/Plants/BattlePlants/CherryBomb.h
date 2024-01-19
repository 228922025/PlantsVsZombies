/**
 *Copyright (c) 2020 LZ.All Right Reserved
 *Author : LZ
 *Date: 2020.2.6
 *Email: 2117610943@qq.com
 */

#pragma once
#include "BattlePlants.h"

class Zombies;

class CherryBomb :public BattlePlants
{
public:
	static CherryBomb* create(Node* node = nullptr);
    Sprite* createPlantImage() override;
    void createPlantAnimation() override;
    void determineRelativePositionPlantsAndZombies() override;

CC_CONSTRUCTOR_ACCESS:
	CherryBomb(Node* node = nullptr);
	~CherryBomb();

protected:
    virtual void setEventListener();
    virtual void plantExplode() override;
    virtual bool getPlantIsReadyExplode() const;
    virtual void explodeHurtZombies();
    virtual void showExplodeAnimation();
    virtual bool getZombieIsInExplodeRange(Zombies* zombie) const;

protected:
    bool _isReadyExplode;          // 是否准备爆炸
    bool _isExplode;               // 是否爆炸
    Zombies* _zombie;              // 临时僵尸
};