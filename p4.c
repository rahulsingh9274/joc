
#include<stdio.h>

#include<string.h>


struct details
	{
		int age;
		float sal;
		char name[50];
	};
	typedef struct details dtls;

int main ()
{
	/*typedef struct details
	{
		int age;
		float sal;
		char name[50];
	};
	struct details sd;
	*/
	dtls sd;
	
	sd.age=12;
	//sd.name=”Napeir”;
	strcpy((sd.name),"Napeir");
	sd.sal=34.5;
}
