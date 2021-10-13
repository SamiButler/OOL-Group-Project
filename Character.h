#ifndef CHARACTER_H__
#define CHARACTER_H__

class Character
{
public:
        character();
        string name;
        int hitpoints;
        static int stun_counter;
        choose_character();
        set_character_ID();
                character_ID = floor(rand)*5 + 1;
        find_matchup();
        {
                Next_opponent.character_ID == 1 // This definitely is not the right code at this 
        // stage, but it gets the idea across.
}


Private:
        int character_ID;
        int* ID_array[4];
        Int used_IDs[4];
        Int ID_counter;
};

#endif
