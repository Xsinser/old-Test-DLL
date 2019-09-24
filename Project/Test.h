#pragma once

#include "dll.h"
#include "question.h"
#include "encript.h"
#include <string>
#include <vector>

class TTRCNLIB_API Test
{
public:
//	Test(char* IndexForSearchAFile);// в конструктор при инициализации передаетс€ "индекс" по которому ищетс€ файл

	enum TYPE { PICTURE, TEXT };

	

	void GettingDataFromAFile();// происходит чтение с дешифровкой, а так же записью в классы и опреедление размера массива вопросов

	std::list<char*> ReturnTextAllAnswers();////ћетоды в классе question получают доступ к приватным переменным. ƒанные методы сделаны, чтобы удобнее было 
	char* getQuestionText();//                 получать данные из класса question 
	int8_t GetQuesionId();
	int8_t GetAnswersCount();
	TYPE GetQuestionType();

	void AnswerCheck(std::list<char*> TextSelectedAnswers, int8_t CountSelectedAnswer);// провер€ет выбраные ответы 
	float GlobalAnswerCheck();// провер€ет все вопросы. ¬озвращает % правильных ответов

	void NextQuestion(); //в теории, этот метод вызываетс€ дл€ помещени€ в _currentQuestion следующиего в _questions вопроса.
	void PreviousQuestion(); //то же что и выше, но предыдущий вопрос.

	char* GetTestName();

	virtual ~Test();
private:
	std::vector<Question> _questions;
	Question* _currentQuestion;
	std::string ThePathToTheFile;
	/// ƒалее идет информаци€ о тесте. ¬ принципе иэто можно хранить и в отдельной структуре/классе. Ќо зачем.
	std::string TestName;
};
