#ifndef _QUESTION_HPP
#define _QUESTION_HPP

#include <string>
#include <iostream>
using namespace std;

class QuestionBase
{
public:
	void Display();
	void SetQuestionText(const string& text);

protected:
	string m_questionText;
};

class TrueFalseQuestion : public QuestionBase
{
public:
	void Display();
	bool CheckAnswer(const string& userAnswer);
	void SetCorrectAnswer(const string& correctAnswer);

private:
	string m_correctAnswer;
};

class MultipleChoiceQuestion : public QuestionBase
{
public:
	void Display();
	bool CheckAnswer(int userAnswer);
	void SetCorrectAnswer(int correctAnswer);
	void SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3);

private:
	int m_correctAnswer;
	string m_answers[4];
};

#endif
