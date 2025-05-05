#include <iostream>
#include <vector>
#include <ctime>

// sort integers smallest to greatest
class SortVector{
    public:
        std::vector<int> sortVectorFunc(std::vector<int> vectorMain){
            std::vector<int> sortedVector = vectorMain;
            int cachedValue;
            int j;
            
            for (int n = 0; n < sortedVector.size(); n++){
                j = 0;
                for (int i = 0; i < sortedVector.size() - 1; i++){
                    if (sortedVector[i] > sortedVector[i + 1]){
                        j++; // <-- swap counter
                        cachedValue = sortedVector[i];
                        sortedVector[i] = sortedVector[i + 1];
                        sortedVector[i + 1] = cachedValue;
                    }
                }
                if (j == 0){
                    break;
                }
            }
        
            return sortedVector;
        }
};

int main(){
    srand(time(NULL));
    
    std::vector<int> vectorMain(10000);
    SortVector SortVectorObj;
    
    for (int i = 0; i < vectorMain.size(); i++){
        vectorMain[i] = (rand() % 100);
    }
    
    std::cout << "Original vector:\n";
    for (int i = 0; i < vectorMain.size(); i++){
        std::cout << vectorMain[i] << ' ';
    }
    std::cout << "\n\n\n\n";
    
    std::vector<int> sortedVector = SortVectorObj.sortVectorFunc(vectorMain);
    
    std::cout << "Sorted vector:\n";
    for (int i = 0; i < sortedVector.size(); i++){
        std::cout << sortedVector[i] << ' ';
    }
    
    return 0;
}
