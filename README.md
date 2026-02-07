
## Training Setup

`w` The Weight it's how much the input will affect the output. (if it's 2 the AI will think the answer double every time)
`b` The Bias is the starting point. If the input is 0 the answer might not be 0.

`train` is all the data

`learning_rate` is the step size. If it's too big the AI will give a too big number, if it too small the AI will take so much time.

`epochs` is how much time the AI will try to get the more precise number. More is higer like `5000` more it will be precise

`n` is just the number of training data (here, in the array).

## Partice loop

`prediction` is the AI current guess

`error` is how much the AI is the diff b/w the guess and the real name.

`total_cost` is the "Average Mistake", or the total of squared error divided by `n`. If the cost is high then the AI is really bad, if it near 0 the AI is genius.
It's the square 'cause if one guess if +5 off and another is -5 off, adding them would give 0 (perfect) but it's a "lie", squaring make them both positive (25 + 25) so the AI know it's 50 point away from the "truth"

## Brain

`total_gradient_w` & `total_gradient_b` is the direction, those variable tell the AI if he is "too high", "too low" or "how fast".

## Input

`input_val` is just the user input
