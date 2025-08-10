// take the two matrix in the form of an 2d array do the following operation
// sum,minus,scaller multiplication,vector multiplication
#include<iostream>
#include<string>
#include<sstream>
#include<stdexcept>
#include"../../log/log_program.hpp"
// function for the create the matrix
int** createMatrix(int row,int col){
    std::cout << "Creating matrix:";
    LOG_INFO("Creating matrix : ");
    int** mat = new int*[row];
    for (int i = 0; i < row; i++)
    {
        mat[i] = new int[col];
    }
    std::cout << "Created Matrix."<< std::endl;
    return mat;
}
// function for input of the matrix
void insertMatrixInput(int** mat,int row,int col){
    std::cout << "Insertion of the matrix : " << std::endl;
    LOG_INFO("Insertion of the matrix : ");
    if ((row <=0 ) && (col <=0))
    {
        // check for the wrong row and col for the matrix
        LOG_ERROR("Matrix row and col for the insertion of the data is wrong !!");
        throw std::runtime_error("wrong insertion for the row and col matrix input can't be taken!!");
    }else{
        // taking input from the user
        std::cout << "enter the matrix input:" << std::endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cout << "enter the input of mat["<<i<<"]["<<j<<"]";
                if (!(std::cin>>mat[i][j]))
                {
                    LOG_ERROR("input insertion is wrong somewhere please check the operation ....");
                    throw std::runtime_error("input insertion is wrong!!");
                }
                
            }
            
        }
        
    }
    std::cout << "Matrix insertion completed..."<<std::endl;
    LOG_INFO("Matrix insertion complete...");
}
// function for the printing the matrix in the terminal
void printMatrix(int** mat,int row,int col){
    std::cout << "printing the matrix in the terminal" << std::endl;
    LOG_INFO("Printing the matrix :");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std :: cout << mat[i][j];
            LOG_INFO(std::to_string(mat[i][j]));
        }
        std::cout << "\n";
    }
    
}
// function for the addition for the matrix
int** additionMatrix(int** mat1,int** mat2,int row,int col){
    std::cout << "Adding the matrix  :" << std :: endl;
    LOG_INFO("Addition of the matrix :");
    int** mat3 = createMatrix(row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    std::cout << "Addition operation complete.."<<std::endl;
    LOG_INFO("Addition of matrix operation complete..");
    return mat3;
}
// function for the substraction of the matrix
int** substractionMatrix(int** mat1,int** mat2,int row,int col){
    int** mat3 = createMatrix(row,col);
    std::cout << "Creating the substraction operation :"<<std::endl;
    LOG_INFO("Substraction operation:");
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        mat3[i][j] = mat1[i][j] - mat2[i][j];
      }
      
    }
    std::cout << "Substraction operation complete.."<<std::endl;
    LOG_INFO("Substraction operation complete..");
    return mat3;
}
// function for free space of the memory of the operation
void freeSpace(int** mat,int row,int col){
    std::cout<< "deleting the memory of the matrix space.."<< std::endl;
    LOG_INFO("Deleting the memory of the matrix..");
    for (int i = 0; i < row; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    std::cout<< "delete memory operation complete...";
    LOG_INFO("Memory delete operation complete ..");
}
int main(int argc,char* argv[]){
    int row,col;
    int choice;
    LOG_INFO("Program started...");
    std::cout << "enter the number of rows and column for the matrix : " << std::endl;
    if(!(std::cin>>row>>col)){
        LOG_ERROR("Row and column for the matrix is not inserted!!");
        throw std::runtime_error("Row and Column is not inserted!!");
    }else{
       int** mat1 = createMatrix(row,col);
       insertMatrixInput(mat1,row,col);
       printMatrix(mat1,row,col);
       int** mat2 = createMatrix(row,col);
       insertMatrixInput(mat2,row,col);
       printMatrix(mat2,row,col);
       
    //    here i give the user different operation choice for use
       do
       {
        std::cout << "1: for addition " << std::endl;
        std::cout << "2: for substraction " << std::endl;
        std::cout << "0: for exit" << std::endl;
        std::cout << "enter your choice : " << std::endl;
        if (!(std::cin >> choice))
        {
            LOG_ERROR("User did't put any choice for performing the operation...");
            throw std::runtime_error("User didn't put any choice operation ..");
        }else{
            if (choice == 1)
            {
                int** mat3 =  additionMatrix(mat1,mat2,row,col);
                printMatrix(mat3,row,col);
                freeSpace(mat3,row,col);
            }else if (choice == 2)
            {
                int **mat3 =  substractionMatrix(mat1,mat2,row,col);
                printMatrix(mat3,row,col);
                freeSpace(mat3,row,col);
            }
            
            
        }
        
       } while (choice!=0);
       freeSpace(mat1, row, col);
       freeSpace(mat2, row, col);
    }
    LOG_INFO("Program ended.....");
    return 0;
}