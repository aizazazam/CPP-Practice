#include <iostream>  
using namespace std;
double calcTax(double costPrice, float standardRate){
	return (costPrice * standardRate) / 100;
}
double calcTax (double costPrice, double luxuryThreshold, float standardRate, float luxuryRate){
	return ((costPrice - luxuryThreshold) * luxuryRate) / 100 + (luxuryThreshold * standardRate) / 100;
}
int main(){
	double costPrice, luxuryThreshold = 10000;
	float standardRate = 1.5, luxuryRate = 3.5;
	cout<<"Enter  total Cost of Shopping: "; cin>>costPrice;
	if ( costPrice > luxuryThreshold){
		double k = calcTax(costPrice, luxuryThreshold, standardRate, luxuryRate);
		cout<<"GST: "<<k<<endl;
		cout<<"Total Payable Amount: "<<costPrice + k<<endl;
	}
	else{
		double m = calcTax(costPrice, standardRate);
		cout<<"GST: "<<m<<endl;
		cout<<"Total Payable Amount: "<< costPrice + m<<endl;
	}	
}
