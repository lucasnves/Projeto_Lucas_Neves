class A {
    private:
        int A1;
        float A2;
    public:
        void setA1(int A1);
        int getA1();
        void setA2(float A2);
        float getA2();
        void MA1();
        void MA2();
};

void A::setA1 (int A1){
    A1= A2;
}

int A::getA1 (){
    return A1;
}

void A::setA2 (float A2){
    A2= A2;
}

float A::getA2 (){
    return A2;
}

void A::MA1 (){
    cout << "MA1" <<endl;
}

void A::MA2 (){
    cout << "MA2" <<endl;
}
