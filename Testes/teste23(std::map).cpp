#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

struct CityRecord
{
	std::string Name;
	uint64_t Population;
	double Latitude, Longitude;

	CityRecord() {}
	CityRecord(std::string Name_, uint64_t P, double LA, double LO)
	{
		Name = Name_;
		Population = P;
		Latitude = LA;
		Longitude = LO;
	}
};

int main()
{
	std::vector<CityRecord> cities;

	cities.emplace_back("Porto", 1200000, 2.4, 9.4);
	cities.emplace_back("Lisboa", 1200001, 1.4, 9.4);
	cities.emplace_back("Coimbra", 1200002, 2.4, 8.4);
	cities.emplace_back("Viseu", 1200003, 0.4, 9.4);
	cities.emplace_back("Braga", 1200004, 2.4, 5.4);

	for (std::vector<CityRecord>::iterator it = cities.begin(); it != cities.end(); it++)
	{
		if (it.base()->Name == "Coimbra")
		{
			std::cout << it->Population << std::endl;
			break;
		}
	}

	std::map<std::string, CityRecord> cityMap;

	cityMap["Porto"] = CityRecord { "Porto", 1200000, 2.4, 9.4 };
	cityMap["Lisboa"] = CityRecord { "Lisboa", 1200001, 1.4, 9.4 };
	cityMap["Coimbra"] = CityRecord { "Coimbra", 1200002, 2.4, 8.4 };
	cityMap["Viseu"] = CityRecord { "Viseu", 1200003, 0.4, 9.4 };
	cityMap["Braga"] = CityRecord { "Braga", 1200004, 2.4, 5.4 };

	std::cout << cityMap["Coimbra"].Population << std::endl;

	return (0);
}
