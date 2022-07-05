class B {
    private:
        int B1;
        float B2;
    public:
        void setB1(int B1);
        int getB1();
        void setB2(float B2);
        float getB2();
        void MB1();
        void MB2();
        void MB3();
};

void B::setB1 (int B1){
    B1= B1;
}

int B::getB1 (){
    return B1;
}

void B::setB2 (float B2){
    B2= B2;
}

float B::getB2 (){
    return B2;
}

void B::MB1 (){
    cout << "MB1" <<endl;
}

void B::MB2 (){
    cout << "MB2" <<endl;
}

void B::MB3 (){
	cout << "MB3" <<endl;
}
