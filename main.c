#include <stdio.h>

int main(void)
{
    int input_number;
    long sum = 0;

    scanf("%d", &input_number);

    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }
        // 入力値までの数字を順番に調べる
    for (int current_number = 1; ; current_number++)
    {
        // 入力値を超えたら繰り返しを終了する
        if (current_number > input_number)
        {
            break;
        }

        // 3または5の倍数は合計に加えない
        if (current_number % 3 == 0 || current_number % 5 == 0)
        {
            continue;
        }

        sum += current_number;
    }

    printf("%ld", sum);
    return 0;
}
