# # Step 1 | recipe
# main.out : main.c arithmetic.c user_interface.c
# 	gcc  $^ -I../include -o $@
# # ---

# # Step 2
# main.out : main.c arithmetic.c user_interface.c
# 	gcc  $^ -I../include -o ../bin/$@
# # ---

# # Step 3
# SRCS=main.c arithmetic.c user_interface.c
# HEADER_DIR=../include

# main.out : $(SRCS)
# 	gcc  $^ -I$(HEADER_DIR) -o ../bin/$@
# # # ---