


class shape
{




public:
	shape();

	virtual double  calcPerimeter()=0;
	virtual double  calcArea()=0;
	virtual ~shape();

};

class triangle :public shape

{

	double side_a;
	double side_b;
	double side_c;

public:

	void setside_a(double);
	void setside_b(double);
	void setside_c(double);
	triangle();
	double calcPerimeter();
	double calcArea();
	~triangle();

};

