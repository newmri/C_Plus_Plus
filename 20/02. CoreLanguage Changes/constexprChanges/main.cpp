//constexpr int Square(int x) {
//	try {
//		return x * x ;
//	}catch(...) {
//		return 0 ;
//	}
//}
struct A {
	virtual int Get()const {
		return 1 ;
	}
};
struct B : A {

	constexpr int Get() const override {
		return 2 ;
	}
};
struct C : B {

	int Get() const override {
		return 3 ;
	}
};

constexpr int Invoke(A *a) {
	return a->Get() ;
}
int main() {
	//auto result = Square(5) ;
	A a ;
	B b ;
	C c ;
	static_assert(Invoke(&a) == 2) ;
	
}