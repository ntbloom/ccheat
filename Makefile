# gcc flags
FLAGS  = -std=c99
CFLAGS += -g


# targets
ccheat: ccheat.out
	clear
	@printf "Run on " && uname -srm && printf "\n"
	@./ccheat.out

clean:
	rm -rf *.out

ccheat.out: ccheat.c
	@cc $(CFLAGS) ccheat.c -o ccheat.out
