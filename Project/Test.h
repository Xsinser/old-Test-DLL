#pragma once

#include "dll.h"
#include "question.h"
#include "encript.h"
#include <string>
#include <vector>

class TTRCNLIB_API Test
{
public:
//	Test(char* IndexForSearchAFile);// � ����������� ��� ������������� ���������� "������" �� �������� ������ ����

	enum TYPE { PICTURE, TEXT };

	

	void GettingDataFromAFile();// ���������� ������ � �����������, � ��� �� ������� � ������ � ����������� ������� ������� ��������

	std::list<char*> ReturnTextAllAnswers();////������ � ������ question �������� ������ � ��������� ����������. ������ ������ �������, ����� ������� ���� 
	char* getQuestionText();//                 �������� ������ �� ������ question 
	int8_t GetQuesionId();
	int8_t GetAnswersCount();
	TYPE GetQuestionType();

	void AnswerCheck(std::list<char*> TextSelectedAnswers, int8_t CountSelectedAnswer);// ��������� �������� ������ 
	float GlobalAnswerCheck();// ��������� ��� �������. ���������� % ���������� �������

	void NextQuestion(); //� ������, ���� ����� ���������� ��� ��������� � _currentQuestion ����������� � _questions �������.
	void PreviousQuestion(); //�� �� ��� � ����, �� ���������� ������.

	char* GetTestName();

	virtual ~Test();
private:
	std::vector<Question> _questions;
	Question* _currentQuestion;
	std::string ThePathToTheFile;
	/// ����� ���� ���������� � �����. � �������� ���� ����� ������� � � ��������� ���������/������. �� �����.
	std::string TestName;
};
