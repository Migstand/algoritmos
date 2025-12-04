#include <iostream>

class vector{
    private:
        int data[1000]; // Capacidade fixa de 1000 elementos
        unsigned int size_;
        unsigned int capacity_;
    public:
        vector(){
            this->size_ = 0;
            this->capacity_ = 1000;
        }

        void push_back(int value){
        if (this->size() == this->capacity())
            /* ERRO!!!!! */;
            this->data[this->size_] = value;
            this->size_ = this->size_ + 1;
        }
        int get_at(int index) {
            if (index < 0 or index >= size()){
                return -1;
            }
            return this->data[index];
        }
        unsigned int size() {
            return this->size_;
        }
        unsigned int capacity() {
            return this->capacity_;
        }
};

int main(){
    int n, b;
    std::cin >> n;
    vector a;
    for (int i = 0; i<n; ++i){
        std::cin >> b;
        a.push_back(b);
    }
    for (int i = 0; i<n; ++i){
        std::cout << a.get_at(i)<< std::endl;
    }
    return 0;
}