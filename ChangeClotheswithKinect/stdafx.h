// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <time.h>

#include <Kinect.h>
#include <opencv.hpp>

using namespace std;


// TODO:  在此处引用程序需要的其他头文件

typedef enum _ClothesType ClothesType;

enum _ClothesType
{
	ClothesType_Hat = 0,
	ClothesType_Coat = 1
};
