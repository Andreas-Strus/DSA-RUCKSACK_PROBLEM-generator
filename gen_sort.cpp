//instances generator for sorting algorithms
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <fstream>
#include <math.h>
using namespace std;
int main() 
{
	int number, b, nmin, nmax, nstep, nnum, a, MIN_N, N, Mass;
	unsigned int Max_Weight, d;
	std::string p;
	std::cout<<"podaj nazwê pliku"<<std::endl;
	std::cin>>p;
	std::fstream plik;
	plik.open( p.c_str(), std::ios::app );
	srand(time(NULL));
	std::cout<<"Podaj co ma byæ sta³e w instancji"<<std::endl<<"1 . ladownosc statku."<<std::endl<<"2 . liczba kontenerow"<<std::endl;
	std::cin>>a;
	std::cout<<"Podaj wielkoœæ najkrótszej instancji"<<std::endl;
	std::cin>>nmin;	
	std::cout<<"Podaj wzrost wielkosci intancji"<<std::endl;
	std::cin>>nstep;
	std::cout<<"Podaj liczbê przyrostów wieloœci instancji"<<std::endl;
	std::cin>>nnum;
	std::cout<<"podaj liczbê minimalna liczbê kontenerów mieszczacych siê na statku"<<std::endl;
	std::cin>>MIN_N;
	std::cout<<"podaj liczbê podobnych instancji"<<std::endl;
	std::cin>>number;
	switch (a)
	{
		case 1:	
			std::cout<<"Podaj ³adownoœæ statku:"<<std::endl;
			std::cin>>Mass;
		break;
		case 2:
			std::cout<<"Podaj liczbê kontenerów"<<std::endl;
			std::cin>>N;
		break; 
	}
	for (int k=0; k<nnum; k++)
	{
		switch(a)
		{
			case 1:
				N = nmin +k*nstep;
			break;
			case 2:
				Mass = nmin + k*nstep;
			break;
		}
		Max_Weight = Mass/MIN_N;
		for (int j=0; j<number; j++)
		{			
			plik<<Mass<<" "<<N<<" "<<a<<std::endl;
			b=std::rand();
			for(int i=0; i<N; i++)
			{
				b = std::rand() % Max_Weight + 1;
				plik<<b;
				plik<<" ";
				b = std::rand();
				plik<<b;
				plik<<std::endl;
			}
			plik<<std::endl;
		}
		plik<<std::endl;
		
	}
	void close(void);
	return 0;
}
