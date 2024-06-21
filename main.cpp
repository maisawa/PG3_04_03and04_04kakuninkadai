#include <stdio.h>

class oya
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class KodomoA : public oya
{
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class KodomoB : public oya
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	oya* animal[2] = { new KodomoA,new KodomoB };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
