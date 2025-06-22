#ifndef n_exp_hpp
#define n_exp_hpp
template <typename thing1,typename thing2>
auto n_exp(thing1 b,thing2 a){
	for(auto f=1.0;f<b;f++){
	    a*=a;
		}
		auto result=a;
	return result;
	}
#endif