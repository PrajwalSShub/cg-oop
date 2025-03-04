/*
Title: -Write a program in C++ to use map associative container. The keys will be the names of states
and the values will be the populations of the states. When the program runs, the user is prompted to
type the name of a state. The program then looks in the map, using the state name as an index and
returns the population of the state.
.
Roll No:-
Class:-SE Computer
Sub:-OOPL & CGL
Date:-
****************************************************************************/
#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
	typedef map<string, int> mapType;
	mapType populationMap;
	populationMap.insert(pair<string, int>("China", 1339));
	populationMap.insert(pair<string, int>("India", 1187));
	populationMap.insert(mapType::value_type("US", 310));
	populationMap.insert(mapType::value_type("Indonesia", 234));
	populationMap.insert(make_pair("Brasil", 193));
	populationMap.insert(make_pair("Pakistan", 170));
// Erase the end element using the erase function
// Because it's ordered map (by key),
// map elements are not in the order of the entry
// In this map it's US since it's ordered alphabetically.
	mapType::iterator iter = --populationMap.end();
	populationMap.erase(iter);
	// output the size of the map
	cout << "Size of populationMap: " << populationMap.size() << '\n';
		for (iter = populationMap.begin(); iter != populationMap.end(); ++iter) {
			cout << iter->first <<": "<< iter->second << " million\n";
	}
// find will return an iterator to the matching element if it is found
// or to the end of the map if the key is not found
		string country("Indonesia");
		iter = populationMap.find(country);
		if( iter != populationMap.end() )
			cout << country <<"'s populations is "<< iter->second << " million\n";
		else
			cout << "Key is not in populationMap" << '\n';
// clear the entries in the map
	populationMap.clear();
}
