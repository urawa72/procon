create:
	@for i in a b c d; do \
		url="https://atcoder.jp/contests/${ARG}/tasks"; \
		mkdir -p ${ARG}/$$i; \
		cd ${ARG}/$$i; \
		touch main.cpp; \
		echo $$url"_"$$i; \
		cd - > /dev/null; \
	done;

download:
	@for i in a b c d; do \
		url="https://atcoder.jp/contests/${ARG}/tasks"; \
		cd ${ARG}/$$i; \
		oj d $$url/${ARG}_$$i; \
		cd - > /dev/null; \
	done;

.PHONY: create
