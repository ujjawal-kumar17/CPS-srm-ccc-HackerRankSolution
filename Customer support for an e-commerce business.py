def matchingBraces(braces):
    result = []
    for string in braces:
        stack = []
        for brace in string:
            if brace in ['(', '[', '{']:
                stack.append(brace)
            elif brace in [')', ']', '}']:
                if not stack:
                    result.append('NO')
                    break
                elif brace == ')' and stack[-1] == '(':
                    stack.pop()
                elif brace == ']' and stack[-1] == '[':
                    stack.pop()
                elif brace == '}' and stack[-1] == '{':
                    stack.pop()
                else:
                    result.append('NO')
                    break
        else:
            if not stack:
                result.append('YES')
            else:
                result.append('NO')
    return result
