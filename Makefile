run_game: main.cpp select_character.cpp Character.cpp generate_random_array.cpp check_input.cpp opponent_array.cpp ready.cpp next_round.cpp Move.cpp move_functions.cpp
	clear
	g++ main.cpp select_character.cpp check_input.cpp Character.cpp generate_random_array.cpp opponent_array.cpp ready.cpp next_round.cpp Move.cpp move_functions.cpp -o run_game
	./run_game
	
test_random_opponents_array: test_random_opponents_array.cpp generate_random_array.cpp opponent_array.cpp Character.cpp
	g++ test_random_opponents_array.cpp generate_random_array.cpp opponent_array.cpp Character.cpp -o test_random_opponents_array
	./test_random_opponents_array

	