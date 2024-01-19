/**
 *Copyright (c) 2020 LZ.All Right Reserved
 *Author : LZ
 *Date: 2020.2.6
 *Email: 2117610943@qq.com
 */

#pragma once
#include "BattlePlants.h"

class Spikeweed :public BattlePlants
{
public:
	static Spikeweed* create(Node* node = nullptr);
	Sprite* createPlantImage() override;
	void createPlantAnimation() override;
	void determineRelativePositionPlantsAndZombies() override;

CC_CONSTRUCTOR_ACCESS:
	Spikeweed(Node* node = nullptr);
	~Spikeweed();

private:
	void plantAttack() override;
	void plantAnimationChange(Zombies* zombie);
	void plantAnimationRecovery();

private:
	bool _isHaveZombies;         // 是否有僵尸
	bool _isAttack = true;         // 是否攻击
	bool _isChanged;
};