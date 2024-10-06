#include <stdio.h>
#include "MLP.h"
CMLP MultiLayer;

int main(void)
{
	/*
	int numofHiddenLayer = 1;
	int HiddenNodes[1] = { 2 };
	MultiLayer.Create(2, HiddenNodes, 1, numofHiddenLayer);

	MultiLayer.m_Weight[0][0][1] = -7.3061;
	MultiLayer.m_Weight[0][1][1] = 4.7621;
	MultiLayer.m_Weight[0][2][1] = 4.7618;

	MultiLayer.m_Weight[0][0][2] = -2.8441;
	MultiLayer.m_Weight[0][1][2] = 6.3917;
	MultiLayer.m_Weight[0][2][2] = 6.3917;

	MultiLayer.m_Weight[1][0][1] = -4.5589;
	MultiLayer.m_Weight[1][1][1] = -10.3788;
	MultiLayer.m_Weight[1][2][1] = 9.7691;


	double x[4][2] = { {0,0},{0,1},{1,0},{1,1} };

	for (int n = 0; n < 4; n++)
	{
		//MultiLayer.pInVlaue[0] = 1;  // ���̾
		MultiLayer.pInValue[1] = x[n][0];	// �Է�����
		MultiLayer.pInValue[2] = x[n][1];

		MultiLayer.Forward();

		printf("%lf %lf=%lf\n", MultiLayer.pInValue[1], MultiLayer.pInValue[2], MultiLayer.pOutValue[1]);
	}
	printf("\n");
	*/
	int numofHiddenLayer = 1;
	int HiddenNodes[2] = { 2 };
	MultiLayer.Create(2, HiddenNodes, 1, numofHiddenLayer);

	MultiLayer.m_Weight[0][0][1] = -0.8;
	MultiLayer.m_Weight[0][1][1] = 0.5;
	MultiLayer.m_Weight[0][2][1] = 0.4;

	MultiLayer.m_Weight[0][0][2] = 0.1;
	MultiLayer.m_Weight[0][1][2] = 0.9;
	MultiLayer.m_Weight[0][2][2] = 1.0;

	MultiLayer.m_Weight[1][0][1] = -0.3;
	MultiLayer.m_Weight[1][1][1] = -1.2;
	MultiLayer.m_Weight[1][2][1] = 1.1;

	MultiLayer.pInValue[1] = 1;
	MultiLayer.pInValue[2] = 1;

	MultiLayer.pCorrectOutValue[1] = 0;

	MultiLayer.Forward();
	MultiLayer.BackPropagationLearning();

	printf("%lf %lf=%lf\n", MultiLayer.pInValue[1], MultiLayer.pInValue[2], MultiLayer.pOutValue[1]);

	return 0;
}