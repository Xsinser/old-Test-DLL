#include "stdafx.h"
#include "question.h"


Question::Question(int AnswersCount)
	: _answersCount(AnswersCount),
	_countCorrectlyAnswers(0)
{

	_answers.resize(AnswersCount);
}



//Answer& Question::operator[](int number) const
//{

	/*if (this->_answers != nullptr)
	{
	if (this->_answersCount >= number)
	return this->_answers[number];
	else
	throw "Out of range.";
	}
	else
	throw "Null Pointer";*/
//	return;
//}



Question::~Question()
{
	delete[] _question;

}
