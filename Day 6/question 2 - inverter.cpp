#include<iostream>
using namespace std;
class Power{
	private:
		int pRating;
	public:
		int voltage;
		int current;
	
			int getCurrent(int current){	//to get current voltage//
				this->current = current;
				return current;
			}
			int getOperatingVoltage(int voltage){ 	
				this->voltage = voltage;
				return voltage;
			}
			int getPowerRating(){	//to get powerRating//
				return voltage*current;
			}
};
//battery status and info
class Battery{
	private:
		int capacity;
		int type;
		int bStatus;
	public:
		void getCapacity(int c){
			capacity = c;
		}
		void getType(int t){
			type = t;
		}
		int getStatus(){
			return bStatus;
		}
		
};
//inverter
class Inverter{
	protected:
		string buildNumber;
		string name;
		string type;
		string category;
		bool status;
		int powerRating;
		int batteryStatus;
		Power p; 
		Battery b;
		Inverter(){
			powerRating = p.getPowerRating();
			batteryStatus = b.getStatus();
		}	
};
class SolarPlate{			//solar plate
	string buildNumber;
	string name;
	string category;
};
class Solar : protected Inverter{ 		//solar inveter
	protected:
		SolarPlate solarPlate;
};
class Grid : protected Solar{		//Grid on system  
	protected:
	int energyBackUp;
};
class GTI : protected Grid{			//GTI inverter
	public:
	GTI(){
	}
};
class Regalia : protected Grid{		//Regalia inverter
	public:
	Regalia(){
	}
};
class PCU : protected Solar{		//PCU inverter
	public:
	PCU(){
	}
};
class Zelio : protected Inverter{		//Zelio inverter
	public:
	Zelio(){
	}
};
class ICruze  : protected Inverter{		//iCruze inverter
	public:
	ICruze(){
	}
};
class Company{
	Inverter inverter;
};
int main(){
	
}
