#include<iostream>
#include<string>
#include<ctime>
using namespace std;
#define day 7
#define teacherCount 3
#define stuCount 5

struct student
{
	string stu_name;
	double score;
};

struct teacher
{
	string teacher_name;
	struct student sArray[stuCount];
};
//函数1：给老师和学生赋值；
//函数2：打印老师与学生的信息；
void allocateSpace(struct teacher tArray[3])
{
	int i = 0;
	int j = 0;
	string nameSeed = "ABCDE";
	for (i = 0; i < teacherCount; i++)
	{
		tArray[i].teacher_name = "Teacher_";
		tArray[i].teacher_name += nameSeed[i];
		for (j = 0; j < stuCount; j++)
		{
			tArray[i].sArray[j].stu_name = "Student_";
			tArray[i].sArray[j].stu_name += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;

		}
	}
}

void printInfo(struct teacher tArray[], int len)
{
	
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		cout << "teacher's name:" << tArray[i].teacher_name<<"\t"<<endl;
		for (j = 0; j < stuCount; j++)
		{
			cout << "\t"<<"students' name:" << tArray[i].sArray[j].stu_name << "students' score:" << tArray[i].sArray[j].score << endl;
		}
	}
}

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero hArray[], int len)
{
	int i = 0;
	int j = 0;
	struct Hero temp;
	for (i = 0; i < len - 1; i++)
	{	
		for (j = 0; j < len - i - 1; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				temp = hArray[j+1];
				hArray[j+1] = hArray[j];
				hArray[j] = temp;
			}
		}
	}
}

void printHero(struct Hero hArray[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << hArray[i].name <<"\t"<< hArray[i].age << "\t" << hArray[i].sex << endl;
	}
}
int main()
{
	/*
	int a = 10;
int b = 20;
swap_w(&a, &b);
cout << a << "\t" << b << endl;

int arr[] = {1,3,2,5,4,6,7,9,8};
int length = sizeof(arr) / sizeof(arr[0]);
print_arr(arr, length);
bubble(arr,length);
print_arr(arr, length);
*/
/*
struct student arr[] = { {"张三",18, 100},{"李四",18, 200},{"王五",20,300} };
cout << arr[0].name << endl;
*/
/*
struct student stu1 = {"zhangsan",18,200};
print_struct2(stu1);
print_struct1(&stu1);
*/
/*/
srand((unsigned int)time(NULL));
struct teacher tArray[3];
//struct student sArray[5];
//int teacherCount = sizeof(tArray) / sizeof(tArray[0]);
//int stuCount = sizeof(sArray) / sizeof(sArray[0]);
allocateSpace(tArray);
printInfo(tArray, teacherCount);
*/
	int i = 0;
	struct Hero hArray[] =
	{ 
		{ "liubei",23,"nan" }, { "guanyu",22,"nan" }, { "zhangfei", 20, "nan" }, { "zhaoyun", 21, "nan" }, { "diaochan", 19, "nv" }
	};
	int len = sizeof(hArray) / sizeof(hArray[0]);
	printHero(hArray, len);
	bubbleSort(hArray, len);
	cout << "---------------" << endl;
	printHero(hArray, len);
	system("pause");
	return 0;
}


	
