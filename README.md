# C++ Module 01

42 project

## Topics

- メモリ割り当て
- メンバーへのポインタ
- 参照
- switch文

## Exercises
### Exercise 00: BraiiiiiiinnnzzzZ

Zombieクラス（heapとstackの違い）

### Exercise 01: Moar brainz!

zombieHorde関数（一括で複数のオブジェクトを作成）

### Exercise 02: HI THIS IS BRAIN

ポインタと参照の違い

### Exercise 03: Unnecessary violence

Weaponクラスを持つHumanA/HumanBクラス

### Exercise 04: Sed is for losers

テキストファイルの文字列置換を行うプログラム

### Exercise 05: Harl 2.0

Harl クラスを作成し、4つのログレベルでメッセージを出力
メンバー関数へのポインタを活用。冗長な if/else 文を避ける

### Exercise 06: Harl filter

Harl のログをフィルタリングするプログラム
コマンドライン引数と、switch文


sakitaha@c5r4s4 ~/g/C/C/ex01 (main) [2]> make
c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o
main.cpp:31:28: error: no member named 'numeric_limits' in namespace 'std'
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                      ~~~~~^
main.cpp:31:58: error: expected '(' for function-style cast or type construction
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                          ~~~~~~~~~~~~~~~^
main.cpp:31:61: error: no member named 'max' in the global namespace
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                                          ~~^
main.cpp:49:28: error: no member named 'numeric_limits' in namespace 'std'
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                      ~~~~~^
main.cpp:49:58: error: expected '(' for function-style cast or type construction
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                          ~~~~~~~~~~~~~~~^
main.cpp:49:61: error: no member named 'max' in the global namespace
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                                          ~~^
main.cpp:57:26: error: no member named 'numeric_limits' in namespace 'std'
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    ~~~~~^
main.cpp:57:56: error: expected '(' for function-style cast or type construction
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                        ~~~~~~~~~~~~~~~^
main.cpp:57:59: error: no member named 'max' in the global namespace
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                                        ~~^
9 errors generated.
make: *** [Makefile:26: main.o] Error 1
sakitaha@c5r4s4 ~/g/C/C/ex01 (main) [2]>
sakitaha@c5r4s4 ~/g/C/C/ex01 (main) [2]>
sakitaha@c5r4s4 ~/g/C/C/ex01 (main) [2]>
