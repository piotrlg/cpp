#include <iostream>
#include <vector>
#include <string>

//wyswietl zawartosc vectora z opisem czego dotyczy

template<typename T>  void print_vec(std::vector<T>& vec, const std::string& desc)
{
    std::cout<<desc<<": ";
    
    auto vec_size=vec.size();
    std::cout<< "size: "<< vec_size <<std::endl;
    
    std::cout<<"vector's data: ";
    
    
    for(auto i : vec)
        std::cout<< i << ", ";
    std::cout<<std::endl<<std::endl;
    
}

int main(int argc, char **argv) {
        
    std::cout<<"argc: "<< argc<<std::endl;
    
    //skopiuj argumenty wywolania programu do vectora
    std::vector<std::string> args;
    for(int i=0; i<argc; i++){
        args.push_back(argv[i]);   
    }
    print_vec(args,"args");

        
    std::vector<int> v={1,2,3,4,5,6};
    print_vec(v,"v");
               

    print_vec(args,"vs args");
        
    v.pop_back();
    print_vec(v,"v");
    
    
    return 0;
}
