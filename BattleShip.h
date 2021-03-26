#pragma once
#include<iostream>

template <typename T>
void print(const T& obj)
{
	std::cout << obj << std::endl;
}

template <typename T> 
class BattleShip
{
private:
	int speed;
	int tools;
	bool abilityOfHyperJump;
	int size;
	T pilot;
public:
	friend std::ostream& operator<<(std::ostream& out, const BattleShip& obj)
	{
		out << obj.getSpeed() << " " << obj.getTools() << " " << obj.getAbilityOfHyperJump() << " " << obj.getSize() << " " << obj.getPilot();
		return out;
	}

	BattleShip();
	BattleShip(const BattleShip&);
	BattleShip(int, int, bool, int, T);

	BattleShip& operator=(const BattleShip&);

	void setSpeed(int);
	void setTools(int);
	void setAbilityOfHyperJump(bool);
	void setSize(int);
	void setPilot(T);

	int getSpeed() const; 
	int getTools() const; 
	bool getAbilityOfHyperJump() const;
	int getSize() const;
	T getPilot() const; 
};

