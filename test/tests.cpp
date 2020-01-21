#include "gtest/gtest.h"
#include "automata.h"

TEST (automata,test1_create){
    Automata* automata = new Automata();
	EXPECT_FALSE(automata == nullptr);
	EXPECT_EQ(OFF, automata->state);
	EXPECT_FALSE( _cook_.empty());
	EXPECT_FALSE( _off_.empty());
	EXPECT_FALSE( _add_coin_message_.empty());
	EXPECT_FALSE( _menu_names_.size() != _menu_prices_.size());
	EXPECT_FALSE( _menu_names_.size() > 0);
	EXPECT_FALSE( _cancel_.empty());
	EXPECT_FALSE( _choice_.empty());
	EXPECT_FALSE( _not_enough_money_.empty());
	EXPECT_FALSE( _error_choice_.empty());
	EXPECT_FALSE( _return_money_.empty());
}

TEST(automata, test1_on_off) {
	Automata* automata = new Automata();
	automata->on();
	automata->coin(123);
	automata->off();
}


