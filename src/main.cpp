#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, ""));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, ""));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, ""));

    return 0;
}