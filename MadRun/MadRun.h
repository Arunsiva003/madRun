#pragma once

#include <vector>
#include <any>
#include <variant>
#include <string>

namespace dataframe{
    class DataFrame{
        public:
        std::vector<std::vector<std::any>> dataTable;

        DataFrame(){};

        DataFrame(std::vector<std::any> row){
            this->dataTable.push_back(row);
        }


        DataFrame read(){
            DataFrame d;
        }
    };


    dataframe::DataFrame read(std::string filename){
        //read 
        //vector - pushData
        std::vector<std::any> push;
        dataframe::DataFrame newData(push);
        return newData;
    }
}


int main(){
    dataframe::DataFrame df = dataframe::read("madhan the great");



}