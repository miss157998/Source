#include <iostream>
#include "DEFname.h"
using namespace std;
/*

1 ¿ú      Money
2 ¤ì§÷  Wood
3 ¥Û§÷   Rock
4 ­¹ª«   Food

*/

class MineM{
private: 
	int unit;
	int drop;
	char PCI;
public:
	MineM(){
		unit = 300;
		drop = Rock;
		PCI = 'M';
	}
	MineM(int xunit){
		unit=xunit;
		drop = Rock;
		PCI = 'M';
	}
	MineM(int xunit,int newdrop ){
		unit=xunit;
		drop = newdrop; 
		PCI = 'M';
	}
	void setPCI(char newPCI){
		PCI= newPCI;
	}
	char getPCI(){
		return PCI;
	}
	void setUnit(int U){
		unit=U;
	}
	int getUnit(){
		return unit;
	}
	void setDrop(int newdrop){
		drop=newdrop;
	}
	int getDrop(){
		return drop;
	}
	int Craft(int xUnitPerSec){
		int x;
		if(unit>=xUnitPerSec){
			unit-=xUnitPerSec;
			return xUnitPerSec;
		}
		else {
			x=unit;
			unit=0;
			return x;
		}
	}
	int isEmpty(){
		if(unit<=0)
			return 1;
		else 
			return 0;
	}
};

class MineG{
private: 
	int unit;
	int drop;
	char PCI;
public:
	MineG(){
		unit = 600;
		drop = Money;
		PCI = 'G';
	}
	MineG(int xunit){
		unit=xunit;
		drop = Money;
		PCI = 'G';
	}
	MineG(int xunit,int newdrop ){
		unit=xunit;
		drop = newdrop;
		PCI = 'G';
	}
	void setPCI(char newPCI){
		PCI= newPCI;
	}
	char getPCI(){
		return PCI;
	}
	void setUnit(int U){
		unit=U;
	}
	int getUnit(){
		return unit;
	}
	void setDrop(int newdrop){
		drop=newdrop;
	}
	int getDrop(){
		return drop;
	}
	int Craft(int xUnitPerSec){
		int x;
		if(unit>=xUnitPerSec){
			unit-=xUnitPerSec;
			return xUnitPerSec;
		}
		else {
			x=unit;
			unit=0;
			return x;
		}
	}
	int isEmpty(){
		if(unit<=0)
			return 1;
		else 
			return 0;
	}

};
class Tree{
private: 
	int unit;
	int drop;
	char PCI;
public:
	Tree(){
		unit = 200;
		drop = Wood;
		PCI = 'T';
	}
	Tree(int xunit){
		unit=xunit;
		drop = Wood;
		PCI = 'T';
	}
	Tree(int xunit,int newdrop ){
		unit=xunit;
		drop = newdrop;
		PCI = 'T';
	}
	void setPCI(char newPCI){
		PCI= newPCI;
	}
	char getPCI(){
		return PCI;
	}
	void setUnit(int U){
		unit=U;
	}
	int getUnit(){
		return unit;
	}
	void setDrop(int newdrop){
		drop=newdrop;
	}
	int getDrop(){
		return drop;
	}
	int Craft(int xUnitPerSec){
		int x;
		if(unit>=xUnitPerSec){
			unit-=xUnitPerSec;
			return xUnitPerSec;
		}
		else {
			x=unit;
			unit=0;
			return x;
		}
	}
	int isEmpty(){
		if(unit<=0)
			return 1;
		else 
			return 0;
	}

};
class AppleTree{
private: 
	int unit;
	int drop;
	char PCI;
public:
	AppleTree(){
		unit = 200;
		drop = Food;
		PCI = 'A';
	}
	AppleTree(int xunit){
		unit=xunit;
		drop = Food;
		PCI = 'A';
	}
	AppleTree(int xunit,int newdrop ){
		unit=xunit;
		drop = newdrop;
		PCI = 'M';
	}
	void setPCI(char newPCI){
		PCI= newPCI;
	}
	char getPCI(){
		return PCI;
	}
	void setUnit(int U){
		unit=U;
	}
	int getUnit(){
		return unit;
	}
	void setDrop(int newdrop){
		drop=newdrop;
	}
	int getDrop(){
		return drop;
	}
	int Craft(int xUnitPerSec){
		int x;
		if(unit>=xUnitPerSec){
			unit-=xUnitPerSec;
			return xUnitPerSec;
		}
		else {
			x=unit;
			unit=0;
			return x;
		}
	}
	int isEmpty(){
		if(unit<=0)
			return 1;
		else 
			return 0;
	}

};
