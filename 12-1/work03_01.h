class Dept {
    int size;
    int* scores;
public:
    Dept(int size);
    Dept(Dept& dept);
    ~Dept();
    int getSize();
    void read();
    bool isOver60(int index);
};

int countPass(Dept dept);