#include <iostream>
using namespace std;
class Cube
{
public:
	void SetCube()
	{
		int len, hei, wid;
		cout << "Please input the cube's length:";
		cin >> len;
		cout << "Please input the cube's height:";
		cin >> hei;
		cout << "Please input the cube's width:";
		cin >> wid;
		m_len = len;
		m_hei = hei;
		m_wid = wid;
	}
	void CalCubeVol()
	{
		m_vol = m_len * m_hei * m_wid;
	}
	void GetCubeVol()
	{
		cout << "The volume of the Cube is:" << m_vol << endl;
	}
private:
	int m_len;
	int m_hei;
	int m_wid;
	int m_vol;
};

int main()
{
	Cube c1, c2, c3;
	c1.SetCube();
	c1.CalCubeVol();
	c1.GetCubeVol();
	c2.SetCube();
	c2.CalCubeVol();
	c2.GetCubeVol();
	c3.SetCube();
	c3.CalCubeVol();
	c3.GetCubeVol();
	return 0;
}