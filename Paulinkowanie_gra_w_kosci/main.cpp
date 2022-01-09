#include <iostream>
#include <random>
size_t play(size_t number_of_dices)
{
	size_t sum = 0;
	for (size_t id = 0; id < number_of_dices; ++id)
	{
		int dice_rand = rand() % 6 + 1;
		sum = sum + dice_rand;
	}
	return sum;
}
int main()
{
	std::srand(time(nullptr));
	size_t number_of_dices;
	std::cout << "podaj ilosc kosci:\n";
	std::cin >> number_of_dices;
	size_t player_sum = play(number_of_dices);
	size_t comp_sum = play(number_of_dices);
	std::cout << "Player 1: " << player_sum << "\n";
	std::cout << "Computer: " << comp_sum << "\n";
	if (player_sum > comp_sum)
	{
		std::cout << "Player 1 win!";
	}
	else if (player_sum < comp_sum)
	{
		std::cout << "Computer win!";
	}
	else
	{
		std::cout << "Remis";
	}
	return 0;
}