#include<iostream>
float a,b,c;
int main(int argv,char** argc){
	std::cout<<"entrez les cotes de votre triangle"<<std::endl;
	std::cin>>a>>b>>c;
	if(a==b==c){
		std::cout<<"le triangle est equilateral"<<std::endl;
	}else if(a==b || a==c || b==c){
		std::cout<<"ce triangle est isocele"<<std::endl;		
	}else if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
		std::cout<<"ce triangle est rectangle"<<std::endl;
	}else{
	std::cout<<"ce triangle est quelconque"<<std::endl;		
	}
	return 0;
}
