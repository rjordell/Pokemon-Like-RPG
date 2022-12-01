#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <vector>
#include <iostream>

using namespace std;

TEST(PokemonTests, testGetPokemonName) {
    Pokemon *aPokemon = new Pokemon();
    aPokemon->assign("Eddy", Pokemon::type::Fire, 100, 100, 1, 0, 3);
    EXPECT_EQ (aPokemon->getPokemonName(), "Eddy");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}