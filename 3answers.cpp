#include <iostream>

using namespace std;
class Question
{
private:
    string question, answer[3];
    int answerGiven, answerCorrect;
    static int count;
public:
    Question(string q, string a1, string a2, string a3, int cor) : question(q),
        answerCorrect(cor), answerGiven(0)
    {
        answer[0] = (a1);
        answer[1] = (a2);
        answer[2] = (a3);
        count++;
    }
    static int get_count()
    {
        return count;
    }
    void set_answer(int ans)
    {
        answerGiven = ans;
    }
    friend ostream& operator<<(ostream&, const Question&);
    

};
 ostream& operator<<(ostream& out, const Question& q)
{
    out << q.question << "? | ";
    for (int i = 0; i < 3; i++)
        out << i + 1 << " " << q.answer[i] << " | ";
    out << "your answer: ";
    return out;


}
int Question::count = 0;

int main(void)
{
    int answer;
    Question q1("capital of France ?", "Amsterdam", "Rom", "Paris", 3);
    Question* q2 = new Question("capital of Germany ?", "Berlin", "Bonn", "Vienna", 1);
    cout << q1;
    cin >> answer;
    q1.set_answer(answer);
    cout << *q2;
    cin >> answer;
    q2->set_answer(answer);
    cout << "answers given: " << Question::get_count();


    return 0;
}