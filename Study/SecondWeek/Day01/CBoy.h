#pragma once

class CGirl;

class CBoy
{
public:
	CBoy();
	CBoy(int w, int h);
	~CBoy();
private:
	int m_weight;
	int m_height;

	//friend class CGirl;
	//friend void CGirl::ShowHisInfo(CBoy* boy);
};

