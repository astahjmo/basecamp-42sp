clear
echo '\n Realizando teste da norminette -R\n'
norminette -R CheckForbiddenSourceHeader
echo '\nTeste da norminette concluido\n'
echo '\nRealizando teste de GCC\n'
mkdir test
gcc -Wall -Werror -Wextra correcao/ex00.c ex00/ft_putchar.c -o test/ex00.out
gcc -Wall -Werror -Wextra correcao/ex01.c ex01/ft_print_alphabet.c -o test/ex01.out
gcc -Wall -Werror -Wextra correcao/ex02.c ex02/ft_print_reverse_alphabet.c -o test/ex02.out
gcc -Wall -Werror -Wextra correcao/ex03.c ex03/ft_print_numbers.c -o test/ex03.out
gcc -Wall -Werror -Wextra correcao/ex04.c ex04/ft_is_negative.c -o test/ex04.out
gcc -Wall -Werror -Wextra correcao/ex05.c ex05/ft_print_comb.c -o test/ex05.out
gcc -Wall -Werror -Wextra correcao/ex06.c ex06/ft_print_comb2.c -o test/ex06.out
gcc -Wall -Werror -Wextra correcao/ex07.c ex07/ft_putnbr.c -o test/ex07.out
gcc -Wall -Werror -Wextra correcao/ex08.c ex08/ft_print_combn.c -o test/ex08.out
echo '\n Teste de GCC concluido\n'
echo '\n Realizando teste de resultado'
echo '\n Exercicio 00'
./test/ex00.out 
echo '\n \n Exercicio 01'
./test/ex01.out 
echo '\n \n Exercicio 02'
./test/ex02.out 
echo '\n \n Exercicio 03'
./test/ex03.out 
echo '\n \n Exercicio 04'
./test/ex04.out 
echo '\n \n Exercicio 05'
./test/ex05.out 
echo '\n \n Exercicio 06'
./test/ex06.out 
echo '\n \n Exercicio 07'
./test/ex07.out 
echo '\n \n Exercicio 08'
./test/ex08.out 
echo '\nTodos os testes foram concluidos.\n'
rm -r test