full_game: Characters.cpp Move.cpp Light_attack.cpp Heavy_attack.cpp Defend.cpp Special_attack.cpp main.cpp
	clear
	clang++ Characters.cpp Move.cpp Light_attack.cpp Heavy_attack.cpp Defend.cpp Special_attack.cpp main.cpp -o full_game
	./full_game

Characters_test: Characters.cpp Characters_driver.cpp
	clang++ Characters.cpp Characters_driver.cpp -o Characters_test
	./Characters_test

Move_test: Move.cpp Move_driver.cpp
	clang++ Move.cpp Move_driver.cpp -o Move_test
	./Move_test

Light_attack_test: Light_attack.cpp Light_attack_driver.cpp
	clang++ Light_attack.cpp Light_attack_driver.cpp -o Light_attack_test
	./Light_attack_test

Heavy_attack_test: Heavy_attack.cpp Heavy_attack_driver.cpp
	clang++ Heavy_attack.cpp Heavy_attack_driver.cpp -o Heavy_attack_test
	./Heavy_attack_test

Defend_test: Defend.cpp Defend_driver.cpp
	clang++ Defend.cpp Defend_driver.cpp -o Defend_test
	./Defend_test

Special_attack_test: Special_attack.cpp Special_attack_driver.cpp
	clang++ Special_attack.cpp Special_attack_driver.cpp -o Special_attack_test
	./Special_attack_test

check_intro: main.cpp select_character.cpp Character.cpp
	clang++ main.cpp select_character.cpp Character.cpp -o check_intro
	./check_intro
	
	