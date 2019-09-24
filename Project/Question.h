#pragma once
#include <stdint.h>
#include "answer.h"
#include <vector>
#include <list>
class Question
{
public:


	Question(int AnswerCount);
	Question(const Question &obj);//конструктор копирования

	enum TYPE { PICTURE, TEXT };

	

	
	///////////////////////////////////////////////////////////////////////

	/// огроменный метод заменен на несколько маленьких

	void FillQuestionWrite(char* _questionWrite);

	void FillType(TYPE _type);

	void FillId(int8_t Id);

	void FillIsCorrectlyAnsweredWrite(bool _isCorrectlyAnsweredWrite);

	void FillCorrectAnswersWrite(std::string _correctAnswersWrite);

	void FillAnswersCountWrite(int8_t _answersCountWrite);

	void FillCountCorrectlyAnswersWrite(int8_t _countCorrectlyAnswersWrite);

	/////////////////////////////////////////////////////////////////////////////////////


	std::vector<std::string> ReturnTextAllAnswers();
	char* getQuestionText();
	TYPE ReturnQuestionType();
	int8_t ReturnId();
	int8_t ReturnAnswersCount();

	virtual ~Question();
private:
	char* _question;
	int8_t IdQuestion;
	TYPE _type;
	std::vector<Answer> _answers;// это массив классов ответов
	bool _isCorrectlyAnswered;
	int8_t _answersCount;
	std::string _correctAnswers;// хранится не номер ответа, а его текст. Даже если их несколько, то они будут храниться через разделитель
	int8_t _countCorrectlyAnswers;
};