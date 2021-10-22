run_game: main.cpp select_character.cpp Character.cpp generate_random_array.cpp check_input.cpp opponent_array.cpp ready.cpp next_round.cpp Move.cpp move_functions.cpp
	clear
	g++ main.cpp select_character.cpp check_input.cpp Character.cpp generate_random_array.cpp opponent_array.cpp ready.cpp next_round.cpp Move.cpp move_functions.cpp -o run_game
	./run_game
	
test_random_opponents_array: test_random_opponents_array.cpp generate_random_array.cpp opponent_array.cpp Character.cpp
	g++ test_random_opponents_array.cpp generate_random_array.cpp opponent_array.cpp Character.cpp -o test_random_opponents_array
	./test_random_opponents_array

test_light_attack: test_light_attack.cpp Character.cpp Move.cpp move_functions.cpp
	g++ test_light_attack.cpp Character.cpp Move.cpp move_functions.cpp -o test_light_attack
	./test_light_attack

test_defend: test_defend.cpp Character.cpp Move.cpp move_functions.cpp
	g++ test_defend.cpp Character.cpp Move.cpp move_functions.cpp -o test_defend
	./test_defend

test_heavy_attack: test_heavy_attack.cpp Character.cpp Move.cpp move_functions.cpp
	g++ test_heavy_attack.cpp Character.cpp Move.cpp move_functions.cpp -o test_heavy_attack
	./test_heavy_attack

test_check_input: check_input.cpp test_check_input.cpp
	g++ check_input.cpp test_check_input.cpp -o test_check_input
	./test_check_input
	