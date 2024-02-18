#include <iostream>

int main()
{
	std::cout << "数当てゲーム。\nてきとうに数字入れてみてね。 ヒントは: 0 ~ " << 300 << "だよ。\n\n";

	srand((unsigned int)time(NULL));
	int correct_answer = rand() % 301; // 乱数生成。 これが正解。

	while (true)
	{
		int answer;
		std::cin >> answer;

		if (correct_answer > answer)
			std::cout << "入力した数が小さい。\n";
		else if (correct_answer < answer)
			std::cout << "入力した数が大きい。\n";
		else {
			std::cout << "正解。終了。 なにかｷｰを押して終了。\n";
			break;
		}
	}
}