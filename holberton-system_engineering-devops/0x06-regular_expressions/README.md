# Regular Expresions

### **What is this?**

_A regular expression is a sequence of characters that specifies a search pattern. Usually such patterns are used by string-searching algorithms for "find" or "find and replace" operations on strings, or for input validation. It is a technique developed in theoretical computer science and formal language theor._

### **Basic matches**:

| Character | Usage                                     |
| :-------: | ----------------------------------------- |
|    `.`    | Any character, except new line            |
|   `\d`    | Any digits. (0-9)                         |
|   `\D`    | It's not a digite (0-9)                   |
|   `\w`    | Character (A-Z, A-Z, 0-9, \ \_)           |
|   `\W`    | It is not a word character.               |
|   `\s`    | Spaces of any kind.(space, tab, new line) |
|   `\S`    | It is not a space, tab or new line.       |

### **Limits**:

| Character | Usage                  |
| :-------: | ---------------------- |
|   `\b`    | Limit of word          |
|   `\B`    | It is not a word limit |
|   `^ `    | Start of a text string |
|   `$ `    | End of a text string   |

### **Quantifiers**:

| Character | Usage                                   |
| :-------: | --------------------------------------- |
|    `*`    | 0 o More                                |
|    `+`    | 1 o More                                |
|    `?`    | 0 o One                                 |
|   `{3}`   | Exact number                            |
|  `{3,4}`  | Range of numbers (`minimum`, `maximum`) |

### **Conjuntos de Caracteres**

| Character | Usage                                       |
| :-------: | ------------------------------------------- |
|   `[]`    | Characters inside the brackets              |
|  `[^ ]`   | Characters that are not inside the brackets |

### **Groups**

| Character | Usage |
| :-------: | ----- |
|   `( )`   | Group |

### **Files**

| File                                                             | Content of the file                              |
| ---------------------------------------------------------------- | ------------------------------------------------ |
| [0-simply_match_holberton.rb](./0-simply_match_holberton.rb)     | The regular expression must match `/Holberton/`. |
| [1-repetition_token_0.rb](./1-repetition_token_0.rb)             | The regular expression must match `/hbt{2,5}n/`. |
| [2-repetition_token_1.rb](./2-repetition_token_1.rb)             | The regular expression must match `/hb?tn/`.     |
| [3-repetition_token_2.rb](./3-repetition_token_2.rb)             | The regular expression must match `/hbt+n/`.     |
| [4-repetition_token_3.rb](./4-repetition_token_3.rb)             | The regular expression must match `/hbt*n/`.     |
| [5-beginning_and_end.rb](./5-beginning_and_end.rb)               | The regular expression must match `/h.n/`.       |
| [6-phone_number.rb](./6-phone_number.rb)                         | The regular expression must match `/^\d{10}/`.   |
| [7-OMG_WHY_ARE_YOU_SHOUTING.rb](./7-OMG_WHY_ARE_YOU_SHOUTING.rb) | The regular expression must match `/[A-Z]/`.     |

### **Usage**:

```code
./<filename>
```
