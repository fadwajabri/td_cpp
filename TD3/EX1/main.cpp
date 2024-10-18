#include<iostream>
#include<vector>
#include<map>

using namespace std;
bool isInVect(const vector<int>& vect,int value){
        for(int i=0;i<vect.size();i++){
            if(value==vect[i]){ return 1;}
        }
        return 0;
}

void countFrequencyBruteForce(const vector<int>& numbers){
    vector<int> visited = {};
    for(int i = 0; i< numbers.size(); i++){
        if(!isInVect(visited, numbers[i])){    
            int count = 0;
            for (int j = 0; j< numbers.size();j++){
                if (numbers[i] == numbers[j]){
                    count++;
                }
                visited.push_back(numbers[i]);
            }
            cout << numbers[i] << " : " << count << " times" << endl;
        }
    }
}
map<int, int> countFrequencyOptimal(const vector<int>& numbers) {
    map<int, int> frequencyMap;
    for (int num : numbers) {
        frequencyMap[num]++;
    }
    return frequencyMap;
}
int main(){
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};
    cout << "Frequency (Brute Force): " << endl;
    countFrequencyBruteForce(numbers);
    cout << "\nFrequency (Optimal): " << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for (const auto& entry : frequencyMapOptimal) {
        cout << entry.first << " : " << entry.second << " times" << endl;
    }

    return 0;
}