#include <iostream>
#include <vector>
#include <ctime>

// sort integers smallest to greatest
class SortVector{
    public:
        std::vector<int> sortVectorFunc(std::vector<int> vectorMain){
            std::vector<int> sortedVector = vectorMain;
            int cachedValue;
            
            for (int n = 0; n < sortedVector.size(); n++){
                for (int i = 0; i < sortedVector.size() - 1; i++){
                    if (sortedVector[i] > sortedVector[i + 1]){
                        cachedValue = sortedVector[i];
                        sortedVector[i] = sortedVector[i + 1];
                        sortedVector[i + 1] = cachedValue;
                    }
                }
            }
        
            return sortedVector;
        }
};

int main(){
    srand(time(NULL));
    
    std::vector<int> vectorMain(10000);
    SortVector SortVectorObj;
    
    for (int i = 0; i < 10000; i++){
        vectorMain[i] = (rand() % 100);
    }
    
    std::vector<int> sortedVector = SortVectorObj.sortVectorFunc(vectorMain);
    
    for (int i = 0; i < sortedVector.size(); i++){
        std::cout << sortedVector[i] << ' ';
    }
    
    return 0;
}
