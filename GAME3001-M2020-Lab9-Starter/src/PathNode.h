#pragma once
#include "GameObject.h"

class PathNode : public GameObject {
public:
	PathNode() : m_bLOS(false) {}
	~PathNode() {}

	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	void setLOS(bool LOS);
	bool getLOS();
private:
	bool m_bLOS;

};