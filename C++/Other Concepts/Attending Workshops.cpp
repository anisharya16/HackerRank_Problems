#include<bits/stdc++.h>

using namespace std;


//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int starttime;
    int duration;
    int endtime;
};

struct Available_Workshops {
    int n;
    vector<Workshop> workshops;
};

bool workshop_sorter(Workshop & lhs, Workshop & rhs) {
	return lhs.endtime <= rhs.endtime;
}


Available_Workshops * initialize(int *starttime, int *duration, int n) {
	Available_Workshops *aval = new Available_Workshops();
	aval->n = n;
	for (int i = 0; i<n; i++) {
		Workshop shop;
		shop.starttime = *(starttime + i);
		shop.duration = *(duration + i);
		shop.endtime = *(starttime + i) + *(duration + i);
		aval->workshops.push_back(shop);
	}
	return aval;
}

int CalculateMaxWorkshops(Available_Workshops * aval) {
	int max = 1;
	vector<Workshop> wrks = aval->workshops;

	std::sort(wrks.begin(), wrks.end(), [](Workshop& ws1, Workshop& ws2) {return ws1.endtime < ws2.endtime; });     // With Lambda solves the problem. 
    
    // std::sort(wrks.begin(), wrks.end(), &workshop_sorter);  // This with regular function gives me an error. 

	vector<Workshop>::iterator it = wrks.begin();
	vector<int> jobs;
	int x = 0;
	jobs.push_back(x);
	int end_time = it->endtime;
	do {
		it++;
		if (it != wrks.end()) {
			if (end_time <= (it)->starttime) {
				jobs.push_back(++x);
				end_time = it->endtime;
			}
		}
	} while (it != wrks.end());

	return jobs.size();
}




int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
