#include<iostream>
#include "BattleShip.h"

template<typename T>
BattleShip<T>::BattleShip()
{
	speed = 0;
	tools = 0;
	abilityOfHyperJump = 0; 
	size = 0;
}
template<typename T>
BattleShip<T>::BattleShip(const BattleShip& others)
{
	speed = others.speed;
	tools = others.tools;
	abilityOfHyperJump = others.abilityOfHyperJump;
	size = others.size;
	pilot = others.pilot;
}

template<typename T>
BattleShip<T>::BattleShip(int Speed, int Tools, bool AbilityOfHyperJump, int Size, T Pilot) 
{
	speed = Speed;
	tools = Tools;
	abilityOfHyperJump = AbilityOfHyperJump;
	size = Size;
	pilot = Pilot;
}

template<typename T>
BattleShip<T>& BattleShip<T>::operator=(const BattleShip& others)
{
	if (this != others) {
		speed = others.speed;
		tools = others.tools;
		abilityOfHyperJump = others.abilityOfHyperJump;
		size = others.size;
		pilot = others.pilot;
    }
	return *this;
}

template<typename T>
void BattleShip<T>::setSpeed(int Speed) {
	speed=Speed;
}
template<typename T>
void BattleShip<T>::setTools(int Tools) {
	tools = Tools;
}
template<typename T>
void BattleShip<T>::setAbilityOfHyperJump(bool AbilityOfHyperJump) {
	abilityOfHyperJump = AbilityOfHyperJump;
}
template<typename T>
void BattleShip<T>::setSize(int Size) {
	size = Size;
}
template<typename T>
void BattleShip<T>::setPilot(T Pilot) {
	pilot = Pilot;
}

template<typename T>
int BattleShip<T>::getSpeed() const {
	return speed;
}
template<typename T>
int BattleShip<T>::getTools() const {
	return tools;
}
template<typename T>
bool BattleShip<T>::getAbilityOfHyperJump() const {
	return abilityOfHyperJump;
}
template<typename T>
int BattleShip<T>::getSize() const {
	return size;
}
template<typename T>
T BattleShip<T>::getPilot() const {
	return pilot;
}