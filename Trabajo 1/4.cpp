//diseño de patrones
#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename Container>
class CContainer {
private:
    Container container;  //vector o lista

public:
    // insertar
    void Insert(typename Container::value_type elem) {
        container.push_back(elem);  
    }

    // imprimir
    void Write(ostream& os) const {
        typename Container::const_iterator iter = container.begin();
        for (; iter != container.end(); ++iter) {
            os << *iter << " "; 
        }
        os << endl;
    }
};

int main() {
    // container para una lista 
    CContainer<list<float>> myListContainer;
    for (int i = 0; i < 10; ++i) {
        myListContainer.Insert(i * 1.1f);
    }
    myListContainer.Write(cout);  

    // container para un vector 
    CContainer<vector<float>> myVectorContainer;
    for (int i = 0; i < 10; ++i) {
        myVectorContainer.Insert(i*50) ;
    }
    myVectorContainer.Write(cout);  

    return 0;
}

