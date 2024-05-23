## Simple Calculator Steps

### Step 1: Input Handling
1. **Read Input:**
   - Read the entire expression as a string.

### Step 2: Tokenization
1. **Initialize a vector or list for tokens.**
2. **Loop through the input string:**
   - **Identify Numbers:**
     - When encountering a digit, continue reading until a non-digit or non-decimal point is found.
     - Convert this substring to a number and store it as a token.
   - **Identify Operators and Parentheses:**
     - If the character is an operator (`+`, `-`, `*`, `/`) or a parenthesis (`(`, `)`), store it as a token.
   - **Store Tokens:**
     - Collect all tokens in a list or vector.

### Step 3: Parsing (Shunting Yard Algorithm)
1. **Initialize an empty stack for operators** and an empty list for the output (postfix notation).
2. **Loop through the tokens:**
   - **If the token is a number,** add it to the output list.
   - **If the token is an operator,** do the following:
     - While there is an operator at the top of the stack with greater or equal precedence, pop operators from the stack to the output list.
     - Push the current operator onto the stack.
   - **If the token is a left parenthesis,** push it onto the stack.
   - **If the token is a right parenthesis,** do the following:
     - Pop operators from the stack to the output list until a left parenthesis is encountered.
     - Discard the left parenthesis.
3. **After processing all tokens,** pop all remaining operators from the stack to the output list.

### Step 4: Evaluation of Postfix Expression
1. **Initialize an empty stack for evaluation.**
2. **Loop through each token in the postfix expression:**
   - **If the token is a number,** push it onto the stack.
   - **If the token is an operator,** pop the necessary number of operands from the stack:
     - For binary operators (`+`, `-`, `*`, `/`), pop two operands.
     - Apply the operator to the operands.
     - Push the result back onto the stack.
3. **The final result** will be the only value left in the stack after processing all tokens.

### Step 5: Error Handling
1. **Syntax Errors:**
   - Check for mismatched parentheses.
   - Ensure the correct sequence of tokens (e.g., no two operators in a row).
2. **Division by Zero:**
   - Handle division by zero by checking before performing the division operation.
3. **Invalid Characters:**
   - Validate the input to ensure no invalid characters are processed.