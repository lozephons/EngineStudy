#pragma once
#include<d3d9.h>
#include<d3dx9.h>

#include"LGDIWrapper.h"

class LGDIDirectX9 : public LGDIWrapper
{
public:
	LGDIDirectX9(HWND hWnd, LGDI_Type type);
	bool render();
	~LGDIDirectX9();

private:
	bool initDevice();
	bool initVB();
	void setupMatrices();

	LPDIRECT3D9	m_pD3D;
	LPDIRECT3DDEVICE9 m_pD3DDevice;

	struct VERTEX1
	{
		FLOAT x, y, z;
		DWORD color;
	};

#define D3DFVF_VERTEX1 (D3DFVF_XYZ | D3DFVF_DIFFUSE)

	IDirect3DVertexBuffer9* m_pVB;
};