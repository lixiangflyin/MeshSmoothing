//
//  main.cpp
//  MeshSmoothing
//
//  Created by apple on 14-5-8.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#include <iostream>
#include "Smooth.h"
#include "PlyManager.h"

void Test1()
{
	Mesh m;
	PlyManager::ReadFile(m,"/Users/apple/Desktop/buns1.ply");
	Smoothing sm(&m);
	sm.ScaleDependentLaplacian(3);
	PlyManager::Output(m,"/Users/apple/Desktop/result1.ply");
}
void Test2()
{
	Mesh m;
	PlyManager::ReadFile(m,"/Users/apple/Desktop/buns1.ply");
	Smoothing sm(&m);
	sm.CotWeightedLaplacian(3);
	PlyManager::Output(m,"/Users/apple/Desktop/result2.ply");
}
void Test3()
{
	Mesh m;
	PlyManager::ReadFile(m,"/Users/apple/Desktop/buns1.ply");
	Smoothing sm(&m);
	sm.Taubin(5,0.5f,-0.5f);
	PlyManager::Output(m,"/Users/apple/Desktop/result3.ply");
}
void Test4()
{
	Mesh m;
	PlyManager::ReadFile(m,"/Users/apple/Desktop/buns1.ply");
	Smoothing sm(&m);
	sm.HCLaplacian(3,0.2f,0.2f);
	PlyManager::Output(m,"/Users/apple/Desktop/result4.ply");
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    Test1();
	//Test2();
	//Test3();
	//Test4();
    
    return 0;
}

