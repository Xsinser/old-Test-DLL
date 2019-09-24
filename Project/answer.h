#include <stdint.h>
#include "dll.h"
#include <string>

class  Answer
{
public:
	enum TYPE { PICTURE, TEXT };



	
	virtual ~Answer();
	/// огроменный метод заменен на несколько маленьких
	void FillCorrectAnswer(bool _isCorrectAnswer);
	void FillType(TYPE _type);
	void FillAnswer(char* _answer);
	void FillId(int8_t _id);

	std::string ReturnTextAnswer();
	TYPE ReturnType();
	int8_t ReturnId();
	bool CorrectAnser();
private:
	bool _isCorrectAnswer;
	TYPE _type;
	char* _answer;
	int8_t _id;
};