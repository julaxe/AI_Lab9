#include "PathNode.h"
#include "CollisionManager.h"

PathNode::PathNode()
{
	m_bLOS = false;
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);
	setType(PATH_NODE);
}

void PathNode::draw()
{
}

void PathNode::update()
{
}

void PathNode::clean()
{
}

void PathNode::setLOS(bool LOS)
{
	m_bLOS = LOS;
}

bool PathNode::getLOS()
{
	return m_bLOS;
}
