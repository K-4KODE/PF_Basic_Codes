#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void drawBar(void)
{
	cout << "\n-------------------------------\n";
}



class Character
{
private:
	string name;
	int level;
	int strength;
	int defense;
	int attackPower;
	int health;
	int experience;
public:
	void setName(string playerName);
	string showName(void);
	void setAttackPower(void);
	int getAttackPower(void);
	void setStrength(void);
	int getStrength(void);
	void setDefense(void);
	int getDefense(void);
	void setHealth(void);
	int getHealth(void);
	void setLevel(int playerLevel);
	int getLevel(void);
	void setExperience(int playerExp);
	int getExperience(void);
	void showStats(void);
	void gainLevel(void);
	void gainExperience(int exp);
};

void Character::setName(string playerName)
{
	//complete
	name = playerName;
}

void Character::setLevel(int playerLevel)
{
	//complete
	level = playerLevel;
}

void Character::setExperience(int playerExp)
{
	//complete
	experience = playerExp;
}

void Character::gainExperience(int exp)
{
	//complete
	experience = experience + exp;
}

string Character::showName(void)
{
	//complete
	return name;
}

void Character::setAttackPower(void)
{
	//complete
	attackPower = strength + level;
}

int Character::getAttackPower(void)
{
	//complete
	return attackPower;
}

void Character::setStrength(void)
{
	//complete
	strength = (level * 4) - (level * 2);
}

int Character::getStrength(void)
{
	//complete
	return strength;
}

void Character::setDefense(void)
{
	//complete
	defense = (level * 4) - (level * 3);
}

int Character::getDefense(void)
{
	//complete
	return defense;
}

void Character::setHealth(void)
{
	//complete
	health = level * 5;
}

int Character::getHealth(void)
{
	//complete
	return health;
}

int Character::getLevel(void)
{
	//complete
	return level;
}

int Character::getExperience(void)
{
	//complete
	return experience;
}

void Character::showStats(void)
{
	drawBar();
	cout << "Name: " << name << endl;
	cout << "Level: " << level << endl;
	cout << "Experience: " << experience << endl;
	cout << "Health: " << health << endl;
	cout << "Strength: " << strength << endl;
	cout << "Defense: " << defense << endl;
	drawBar();
}

void Character::gainLevel(void)
{
	//complete
	++level;
}

int main()
{	
	string inPlayerName;
	string enemyName = "Enemy";
	int initialLevel = 1;
	int initialExp = 0;
	string playAgain = "yes";
	int gainExp;
	
	//create a new object
	Character player;
	Character enemy;
	
	enemy.setName(enemyName);
	enemy.setLevel(initialLevel);
	enemy.setExperience(initialExp);
	enemy.setHealth();
	enemy.setStrength();
	enemy.setDefense();
	player.setLevel(initialLevel);	
	player.setExperience(initialExp);
	player.setHealth();
	player.setStrength();
	player.setDefense();
	
	cout << "Welcome to George's game!\n\n";
	
	cout << "What is your character's name? ";
	cin >> inPlayerName;
	player.setName(inPlayerName);
	
	player.showStats();
	enemy.showStats();
	
	player.gainLevel();
	player.setHealth();
	player.setStrength();
	player.setDefense();

	
	player.showStats();
	
	system("pause");
	return 0;
}

