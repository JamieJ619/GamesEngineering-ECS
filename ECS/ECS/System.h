#pragma once
#include "Entity.h"
#include "Component.h"
#include <iostream>

class AISystem
{
public:
	AISystem() {}
	~AISystem() {}

	void addEntity(Entity e)
	{ 
		m_entities.emplace_back(new Entity(e));
	}
	void removeEntity(Entity e) 
	{ 
	}

	void update()
	{
		std::cout << std::endl;
		std::cout << "************************** \n" << std::endl;
		std::cout << "    AISystem Update   \n" << std::endl;

		for (size_t i = 0; i < m_entities.size(); i++)
		{
			std::string name = m_entities[i]->getID();

			HealthComponent* hc = static_cast<HealthComponent*>(m_entities.at(i)->getComponent(0));
			if (hc != NULL) {
				std::cout << name.c_str() << ": Updating Health" << std::endl;
			}

			PositionComponent* pc = static_cast<PositionComponent*>(m_entities.at(i)->getComponent(1));
			if (pc != NULL) {
				std::cout << name.c_str() << ": Updating Position" << std::endl;
			}
		}
	}
private:
	std::vector<Entity*> m_entities;
};

class RenderSystem
{
public:
	RenderSystem() {}

	~RenderSystem() {}

	void addEntity(Entity e) 
	{ 
		m_entities.emplace_back(new Entity(e));
	}
	void removeEntity(Entity e) 
	{ 
	}

	void update()
	{
		std::cout << std::endl;
		std::cout << "************************** \n" << std::endl;
		std::cout << "    RenderSystem Update \n" << std::endl;
		for (size_t i = 0; i < m_entities.size(); i++)
		{
			std::string name = m_entities[i]->getID();

			PositionComponent* pc = static_cast<PositionComponent*>(m_entities.at(i)->getComponent(1));
			if (pc != NULL) 
			{
				std::cout << name.c_str() << ": Rendering " << std::endl;
			}
		}
	}
private:
	std::vector<Entity*> m_entities;
};
class ControlSystem
{
public:
	ControlSystem() {}
	~ControlSystem() {}

	void addEntity(Entity e) 
	{ 
		m_entities.emplace_back(new Entity(e)); 
	}
	void removeEntity(Entity e)
	{ 
	}

	void update()
	{
		std::cout << std::endl;
		std::cout << "************************** \n" << std::endl;
		std::cout << "    ControlSystem Update \n" << std::endl;

		for (size_t i = 0; i < m_entities.size(); i++)
		{
			std::string name = m_entities[i]->getID();

			ControlComponent* cc = static_cast<ControlComponent*>(m_entities.at(i)->getComponent(0));
			if (cc != NULL) 
			{
				std::cout << name.c_str() << ": Updating Control" << std::endl;
			}

			PositionComponent* pc = static_cast<PositionComponent*>(m_entities.at(i)->getComponent(1));
			if (pc != NULL) 
			{
				std::cout << name.c_str() << ": Updating Position" << std::endl;
			}
		}
	}
private:
	std::vector<Entity*> m_entities;
};
