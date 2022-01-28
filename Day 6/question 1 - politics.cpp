#include<iostream>
using namespace std;
class Vehicle{
	protected:
		string build;
};
class Driver{
	string name;
};
class CarDriver : Driver{
	
};
class AirCraftDriver : Driver{
	
};
class Car : Vehicle{
	public:
	CarDriver driver;
};
class Aircraft : Vehicle{
	public:
	AirCraftDriver driver;
};
class MP{
	protected:
	string name;

	int spend;
	int spendLimit;
	Car car;
	public:
	string role;
		string getConstituency(){
			return "Noida";
		}
		setDetails(string name,string role, int spend,int spendLimit){
			this-> name= name;
			this->role = role;
			this->spend = spend;
			this->spendLimit = spendLimit;
		}
		getDriver(){
			car.driver;	
		}
		bool exceedsSpendingLimit(){
			if(spend<=spendLimit)
				return true;
			return false;
		}
		string details(){
			string temp=role;
			temp+=" ";
			temp+=name;
			return temp;
			
		}
};
class PM : protected MP{
	Aircraft aircraft;
	public:
	bool permission(MP mp){
		if(mp.exceedsSpendingLimit())
			return true;
		return false;
	}
};
class Minister : protected MP{
	
};
class Comissioner{
	public:
		string canArrest(MP mp, PM pm){
//			if(mp.details() == pm.details() && mp.exceedsSpendingLimit())
//				return mp.details()+" arrested";
			if(mp.role == "MP" && !mp.exceedsSpendingLimit())
			return mp.details()+" arrested";
			
			if(pm.permission(mp) && mp.exceedsSpendingLimit())
			return "spend is within limit";
			else{
				return mp.details()+" arrested";
			}
		}
};

int main(){

	MP mp;
	mp.setDetails("shiva","MP",600000,500000);
	cout<<mp.details();
	PM pm;
	Comissioner comm;
	cout<<endl<<comm.canArrest(mp,pm);
}
