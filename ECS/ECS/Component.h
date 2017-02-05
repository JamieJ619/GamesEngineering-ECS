#pragma once
#include <vector>
#include "Vector2.h"

class Component
{
public:
	Component(int id)
		: m_id(id)
	{
	};
	~Component() {};

	int getId() 
	{
		return m_id; 
	}
private:
	int m_id;
};

class HealthComponent : public Component
{
public:
	HealthComponent(int id)
		: Component(id)
		, m_health(10) {}
	~HealthComponent() {};

	int getHealth() 
	{ 
		return m_health; 
	}
	void setHealth(int health) 
	{
		m_health = health;
	}

private:
	int m_health;
};

class PositionComponent : public Component
{
public:
	PositionComponent(int id)
		: Component(id)
		, m_position({ 0, 0 }) {}
	~PositionComponent() {};

	Vector2 getPosition() 
	{ 
		return m_position;
	}
	void setPosition(Vector2 position) 
	{
		m_position = position;
	}

private:
	Vector2 m_position;
};

class ControlComponent : public Component
{
public:
	ControlComponent(int id)
		: Component(id)
		, m_direction(0) {}
	~ControlComponent() {};

	int getPosition() 
	{ 
		return m_direction;
	}
	void setPosition(int dir) 
	{
		m_direction = dir;
	}

private:
	int m_direction;
};
