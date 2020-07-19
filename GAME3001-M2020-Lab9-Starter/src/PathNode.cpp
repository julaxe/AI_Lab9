#include "PathNode.h"

PathNode::PathNode()
{
	m_bLOS = false;
	setWidth(40);
	setHeight(40);
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
