def remove_character(input_string, char_to_remove):
    result = ""
    for char in input_string:
        if char != char_to_remove:
            result += char
    return result

input_string = input("Enter the input string: ")
char_to_remove = input("Enter the character to remove: ")

output_string = remove_character(input_string, char_to_remove)
print("Output:", output_string)
