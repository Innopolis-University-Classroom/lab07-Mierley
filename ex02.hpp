//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template <class NUM>
public class Calculator {
private:
    NUM num1, num2;

public:
    Calculator(NUM n1, NUM n2) {
        num1 = n1;
        num2 = n2;
    }

    NUM add() { return num1 + num2; }
    NUM subtract() { return num1 - num2; }
    NUM multiply() { return num1 * num2; }
    NUM divide() { return num1 / num2; }
};















