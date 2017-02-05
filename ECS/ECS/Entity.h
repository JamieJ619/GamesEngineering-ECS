#pragma once

#include <vector>
#include "Component.h"

class Entity
{
public:
	Entity(int id)
		: m_id(id)
	{
	}
	~Entity() {};

	std::string getID()
	{
		if (m_id == 0)
		{
			return std::string("Alien");
		}
		else if (m_id == 1)
		{
			return std::string("Cat");
		}
		else if (m_id == 2)
		{
			return std::string("Dog");
		}
		else if (m_id == 3)
		{
			return std::string("Player");
		}
		return "";
	}

	void addComponent(Component c) 
	{
		m_components.emplace_back(new Component(c)); 
	}
	void removeComponent(Component c) 
	{ 

	}
	Component* getComponent(int id)
	{
		for (int i = 0; i < m_components.size(); i++)
		{
			if (id == m_components[i]->getId())
			{
				return m_components[i];
			}
		}
		return NULL;
	}
	int m_id;

private:
	std::vector<Component*> m_components;
};
