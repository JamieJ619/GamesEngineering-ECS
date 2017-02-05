// ECS.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include "Component.h"
#include "Entity.h"
#include "System.h"


int main(int argc, char** argv)
{
	Entity alien(0);
	Entity cat(1);
	Entity dog(2);
	Entity player(3);

	HealthComponent hc(0);
	PositionComponent pc(1);
	ControlComponent cc(2);

	alien.addComponent(hc);
	alien.addComponent(pc);

	cat.addComponent(hc);
	cat.addComponent(pc);

	dog.addComponent(hc);
	dog.addComponent(pc);

	player.addComponent(hc);
	player.addComponent(pc);
	player.addComponent(cc);

	AISystem as;
	RenderSystem rs;
	ControlSystem cs;

	as.addEntity(alien);
	rs.addEntity(alien);

	as.addEntity(cat);
	rs.addEntity(cat);

	as.addEntity(dog);
	rs.addEntity(dog);

	rs.addEntity(player);
	cs.addEntity(player);

	cs.update();
	as.update();
	rs.update();

	system("pause");
	return 0;
}
