#include "user_intent.hxx"

/* GeneraL DataBase */

multimap<string, int> general_DB = {

    {"what", 10},
    {"get", 10},
    {"obtain", 10},
    {"acquire", 10},
    {"procure", 10},
    {"tell", 10},
    {"why", 10},
    {"where", 10},
    {"will", 10},
    {"fetch", 10},
    {"weather", 30},
    {"sunny", 30},
    {"raining", 30},
    {"rain", 30},
    {"rainy", 30},
    {"snowing", 30},
    {"temperature", 40},
    {"hot", 40},
    {"cold", 40},
    {"paris", 70},
    {"tokiyo", 70},
    {"berlin", 70},
    {"delhi", 70},
    {"newyork", 70},
    {"mumbai", 70},
    {"fact", 50},
    {"truth", 50},
    {"data", 50},
    {"information", 50},
    {"train", 55},
    {"bus", 55},
    {"metro", 55},
    {"time", 60},
    {"when", 60},
    {"name", 80},
	};

/* intent DataBase */

	map<string, int> intent_DB = {

    {"Get",10},
    {"City", 70},
    {"Weather", 30},
    {"Temperature", 40},
    {"Fact", 50},
    {"Public-transport", 55},
    {"Time", 60},
    {"Name", 80},
	};
