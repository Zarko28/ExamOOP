#include "stdafx.h"
#include <string>
#include <stdlib.h>
#include "Company.h"
#include "iostream"

using namespace std;

int main()
{
	setlocale(0, ""); /* научите включать украинскую кириллицу :) */
	
	string TechnologyList[6] = {"Technology #1", "Technology #2","Technology #3","Technology #4"};
	Company *p[2];   /* массив указателей */
	Company object1("Apple", "06/01/1969 - 23/08/2018", 345);   /* объекты */
	Company object2("Google", "03/03/1989 - 17/09/2018", 950);
	Company object3("Microsoft", "28/01/2000 - 02/11/2018", 240);
	p[0] = &object1;   /* запись указателей в массив */
	p[1] = &object2;
	p[2] = &object3;
	for (int i=0;i<3;i++){   /* вызов методов */
		cout << "__________________________________" << endl;
		p[i]->calculation(TechnologyList);
		cout << endl;
	}
	system("pause");
	return 0;
}