#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<climits>
#include<ctime>
using namespace std;
//dawtaltuudiig hyalbarchilj baigaa baidal /macro/
#define fr(a, b) for (int i = int(a); i < int(b); i++)
#define wh(temp) while(temp != NULL)
// template eniig olon udaa bichih uchras hyalbarchilsan baidal 
#define _TEMP_ template <typename T>

//hewleh uildel
_TEMP_
void print(T var) 
{
	cout << var << endl;
}

//template using linear list
_TEMP_
struct List
{
	T value;
	List<T> *next = NULL;
};

//list hooson baigaa esehiig shalgaj baigaa baidal
_TEMP_
bool isNull(T *head)
{
	return head == NULL ? true : false;
}

//listed utga nemeh gej baigaa uildel
_TEMP_
List<T> *add(T value, List<T> *head) 
{
	List<T> *temp = head, *pre = head;
	if(!isNull(head))
	{

		wh(temp)
		{
			print(temp->value);
			pre = temp;
			temp = temp->next;
		}
		temp = new List<T>;
		temp->value = value;
		pre->next = temp;
		temp->next = NULL;
	}
	else 
	{
		temp = new List<T>;
		temp->value = value;
		temp->next = NULL;
	}
	return temp;
}
//listed utga hasaj baigaa uildel
_TEMP_
List<T> *remove(T value, List<T> *head)
{
	List<T> *temp = head, *pre = head;
	if(!isNull(head))
	{
		bool del = false;
		wh(temp)
		{
			if(temp->value == value)
			{
				del = true;
				if(temp == head) 
				{
					delete head;
					head = NULL;
					break;
				}
				List<T> *rr = temp->next;
				pre->next = rr;
				delete temp;
				break;
			}
			pre = temp;
			temp = temp->next;
		}
		if(!del)
		{
			print("List enehuu element alga bna");
		}
		else
		{
			print(to_string(value)+" elementiig ustgalaa");
		}
	}
	else
	{
		print("List empty!!");
	}
	return head;
}
_TEMP_
void printAll(List<T> *head) 
{
	List<T> *temp = head;

	if(!isNull(head))
	{
		wh(temp) 
		{
			print(temp->value);
			temp = temp->next;
		}
	}
	else
	{
		print("List empty!!");
	}
}
