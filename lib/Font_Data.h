/**
 * @file Font_Data.h
 * 
 * @brief 
 *    Font data used for displaying the time
 */

#pragma once

#include <MD_MAX72xx.h>

MD_MAX72XX::fontType_t numeric7Seg[] PROGMEM = 
{
  0,    // 0
  0,    // 1
  0,    // 2
  0,    // 3
  0,    // 4
  0,    // 5
  0,    // 6
  0,    // 7
  0,    // 8
  0,    // 9
  0,    // 10
  0,    // 11
  0,    // 12
  0,    // 13
  0,    // 14
  0,    // 15
  0,    // 16
  0,    // 17
  0,    // 18
  0,    // 19
  0,    // 20
  0,    // 21
  0,    // 22
  0,    // 23
  0,    // 24
  0,    // 25
  0,    // 26
  0,    // 27
  0,    // 28
  0,    // 29
  0,    // 30
  0,    // 31
  1, 0,   // 32 - 'Space'
  0,    // 33 - '!'
  0,    // 34 - '"'
  0,    // 35 - '#'
  0,    // 36 - '$'
  0,    // 37 - '%'
  0,    // 38 - '&'
  0,    // 39 - '''
  0,    // 40 - '('
  0,    // 41 - ')'
  0,    // 42 - '*'
  0,    // 43 - '+'
  0,    // 44 - ','
  0,    // 45 - '-'
  1, 64,    // 46 - '.'
  0,    // 47 - '/'
  3, 62, 34, 62,  // 48 - '0'
  3, 36, 62, 32,      // 49 - '1'
  3, 58, 42, 46,    // 50 - '2'
  3, 42, 42, 62,    // 51 - '3'
  3, 14, 8, 62,    // 52 - '4'
  3, 46, 42, 58,    // 53 - '5'
  3, 62, 42, 58,  // 54 - '6'
  3, 6, 2, 62,    // 55 - '7'
  3, 62, 42, 62,  // 56 - '8'
  3, 46, 42, 62,  // 57 - '9'
  1, 20,    // 58 - ':'
  0,    // 59 - ';'
  0,    // 60 - '<'
  0,    // 61 - '='
  0,    // 62 - '>'
  0,    // 63 - '?'
  0,    // 64 - '@'
  5, 127, 9, 9, 9, 127,   // 65 - 'A'
  5, 127, 73, 73, 73, 54,   // 66 - 'B'
  5, 127, 65, 65, 65, 65,   // 67 - 'C'
  5, 127, 65, 65, 65, 62,   // 68 - 'D'
  5, 127, 73, 73, 73, 73,   // 69 - 'E'
  5, 127, 9, 9, 9, 9,     // 70 - 'F'
  0,    // 71 - 'G'
  0,    // 72 - 'H'
  0,    // 73 - 'I'
  0,    // 74 - 'J'
  0,    // 75 - 'K'
  0,    // 76 - 'L'
  0,    // 77 - 'M'
  0,    // 78 - 'N'
  0,    // 79 - 'O'
  0,    // 80 - 'P'
  0,    // 81 - 'Q'
  0,    // 82 - 'R'
  0,    // 83 - 'S'
  0,    // 84 - 'T'
  0,    // 85 - 'U'
  0,    // 86 - 'V'
  0,    // 87 - 'W'
  0,    // 88 - 'X'
  0,    // 89 - 'Y'
  0,    // 90 - 'Z'
  0,    // 91 - '['
  0,    // 92 - '\'
  0,    // 93 - ']'
  0,    // 94 - '^'
  0,    // 95 - '_'
  0,    // 96 - '`'
  5, 127, 9, 9, 9, 127,   // 97 - 'a'
  5, 127, 73, 73, 73, 54,   // 98 - 'b'
  5, 127, 65, 65, 65, 65,   // 99 - 'c'
  5, 127, 65, 65, 65, 62,   // 100 - 'd'
  5, 127, 73, 73, 73, 73,   // 101 - 'e'
  5, 127, 9, 9, 9, 9,     // 102 - 'f'
  0,    // 103 - 'g'
  0,    // 104 - 'h'
  0,    // 105 - 'i'
  0,    // 106 - 'j'
  0,    // 107 - 'k'
  0,    // 108 - 'l'
  0,    // 109 - 'm'
  0,    // 110 - 'n'
  0,    // 111 - 'o'
  0,    // 112 - 'p'
  0,    // 113 - 'q'
  0,    // 114 - 'r'
  0,    // 115 - 's'
  0,    // 116 - 't'
  0,    // 117 - 'u'
  0,    // 118 - 'v'
  0,    // 119 - 'w'
  0,    // 120 - 'x'
  0,    // 121 - 'y'
  0,    // 122 - 'z'
  0,    // 123 - '{'
  1, 127,   // 124 - '|'
  0,    // 125
  0,    // 126
  0,    // 127
  0,    // 128
  0,    // 129
  0,    // 130
  0,    // 131
  0,    // 132
  0,    // 133
  0,    // 134
  0,    // 135
  0,    // 136
  0,    // 137
  0,    // 138
  0,    // 139
  0,    // 140
  0,    // 141
  0,    // 142
  0,    // 143
  0,    // 144
  0,    // 145
  0,    // 146
  0,    // 147
  0,    // 148
  0,    // 149
  0,    // 150
  0,    // 151
  0,    // 152
  0,    // 153
  0,    // 154
  0,    // 155
  0,    // 156
  0,    // 157
  0,    // 158
  0,    // 159
  0,    // 160
  0,    // 161
  0,    // 162
  0,    // 163
  0,    // 164
  0,    // 165
  0,    // 166
  0,    // 167
  0,    // 168
  0,    // 169
  0,    // 170
  0,    // 171
  0,    // 172
  0,    // 173
  0,    // 174
  0,    // 175
  0,    // 176
  0,    // 177
  0,    // 178
  0,    // 179
  0,    // 180
  0,    // 181
  0,    // 182
  0,    // 183
  0,    // 184
  0,    // 185
  0,    // 186
  0,    // 187
  0,    // 188
  0,    // 189
  0,    // 190
  0,    // 191
  0,    // 192
  0,    // 193
  0,    // 194
  0,    // 195
  0,    // 196
  0,    // 197
  0,    // 198
  0,    // 199
  0,    // 200
  0,    // 201
  0,    // 202
  0,    // 203
  0,    // 204
  0,    // 205
  0,    // 206
  0,    // 207
  0,    // 208
  0,    // 209
  0,    // 210
  0,    // 211
  0,    // 212
  0,    // 213
  0,    // 214
  0,    // 215
  0,    // 216
  0,    // 217
  0,    // 218
  0,    // 219
  0,    // 220
  0,    // 221
  0,    // 222
  0,    // 223
  0,    // 224
  0,    // 225
  0,    // 226
  0,    // 227
  0,    // 228
  0,    // 229
  0,    // 230
  0,    // 231
  0,    // 232
  0,    // 233
  0,    // 234
  0,    // 235
  0,    // 236
  0,    // 237
  0,    // 238
  0,    // 239
  0,    // 240
  0,    // 241
  0,    // 242
  0,    // 243
  0,    // 244
  0,    // 245
  0,    // 246
  0,    // 247
  0,    // 248
  0,    // 249
  0,    // 250
  0,    // 251
  0,    // 252
  0,    // 253
  0,    // 254
  0,    // 255
};

MD_MAX72XX::fontType_t numeric7Se[] PROGMEM = 
{
  0,    // 0
  0,    // 1
  0,    // 2
  0,    // 3
  0,    // 4
  0,    // 5
  0,    // 6
  0,    // 7
  0,    // 8
  0,    // 9
  0,    // 10
  0,    // 11
  0,    // 12
  0,    // 13
  0,    // 14
  0,    // 15
  0,    // 16
  0,    // 17
  0,    // 18
  0,    // 19
  0,    // 20
  0,    // 21
  0,    // 22
  0,    // 23
  0,    // 24
  0,    // 25
  0,    // 26
  0,    // 27
  0,    // 28
  0,    // 29
  0,    // 30
  0,    // 31
  1, 0,   // 32 - 'Space'
  0,    // 33 - '!'
  0,    // 34 - '"'
  0,    // 35 - '#'
  0,    // 36 - '$'
  0,    // 37 - '%'
  0,    // 38 - '&'
  0,    // 39 - '''
  0,    // 40 - '('
  0,    // 41 - ')'
  0,    // 42 - '*'
  0,    // 43 - '+'
  0,    // 44 - ','
  0,    // 45 - '-'
  1, 64,    // 46 - '.'
  0,    // 47 - '/'
  4, 127, 65, 65, 127,  // 48 - '0'
  4, 0, 66, 127, 64,     // 49 - '1'
  4, 121, 73, 73, 79,   // 50 - '2'
  4, 99, 73, 73, 119,   // 51 - '3'
  4, 15, 8, 8, 127,    // 52 - '4'
  4, 79, 73, 73, 121,   // 53 - '5'
  4, 127, 73, 73, 121,  // 54 - '6'
  4, 3, 1, 125, 3,     // 55 - '7'
  4, 119, 73, 73, 119,  // 56 - '8'
  4, 79, 73, 73, 127,   // 57 - '9'
  1, 20,    // 58 - ':'
  0,    // 59 - ';'
  0,    // 60 - '<'
  0,    // 61 - '='
  0,    // 62 - '>'
  0,    // 63 - '?'
  0,    // 64 - '@'
  5, 127, 9, 9, 9, 127,   // 65 - 'A'
  5, 127, 73, 73, 73, 54,   // 66 - 'B'
  5, 127, 65, 65, 65, 65,   // 67 - 'C'
  5, 127, 65, 65, 65, 62,   // 68 - 'D'
  5, 127, 73, 73, 73, 73,   // 69 - 'E'
  5, 127, 9, 9, 9, 9,     // 70 - 'F'
  0,    // 71 - 'G'
  0,    // 72 - 'H'
  0,    // 73 - 'I'
  0,    // 74 - 'J'
  0,    // 75 - 'K'
  0,    // 76 - 'L'
  0,    // 77 - 'M'
  0,    // 78 - 'N'
  0,    // 79 - 'O'
  0,    // 80 - 'P'
  0,    // 81 - 'Q'
  0,    // 82 - 'R'
  0,    // 83 - 'S'
  0,    // 84 - 'T'
  0,    // 85 - 'U'
  0,    // 86 - 'V'
  0,    // 87 - 'W'
  0,    // 88 - 'X'
  0,    // 89 - 'Y'
  0,    // 90 - 'Z'
  0,    // 91 - '['
  0,    // 92 - '\'
  0,    // 93 - ']'
  0,    // 94 - '^'
  0,    // 95 - '_'
  0,    // 96 - '`'
  5, 127, 9, 9, 9, 127,   // 97 - 'a'
  5, 127, 73, 73, 73, 54,   // 98 - 'b'
  5, 127, 65, 65, 65, 65,   // 99 - 'c'
  5, 127, 65, 65, 65, 62,   // 100 - 'd'
  5, 127, 73, 73, 73, 73,   // 101 - 'e'
  5, 127, 9, 9, 9, 9,     // 102 - 'f'
  0,    // 103 - 'g'
  0,    // 104 - 'h'
  0,    // 105 - 'i'
  0,    // 106 - 'j'
  0,    // 107 - 'k'
  0,    // 108 - 'l'
  0,    // 109 - 'm'
  0,    // 110 - 'n'
  0,    // 111 - 'o'
  0,    // 112 - 'p'
  0,    // 113 - 'q'
  0,    // 114 - 'r'
  0,    // 115 - 's'
  0,    // 116 - 't'
  0,    // 117 - 'u'
  0,    // 118 - 'v'
  0,    // 119 - 'w'
  0,    // 120 - 'x'
  0,    // 121 - 'y'
  0,    // 122 - 'z'
  0,    // 123 - '{'
  1, 127,   // 124 - '|'
  0,    // 125
  0,    // 126
  0,    // 127
  0,    // 128
  0,    // 129
  0,    // 130
  0,    // 131
  0,    // 132
  0,    // 133
  0,    // 134
  0,    // 135
  0,    // 136
  0,    // 137
  0,    // 138
  0,    // 139
  0,    // 140
  0,    // 141
  0,    // 142
  0,    // 143
  0,    // 144
  0,    // 145
  0,    // 146
  0,    // 147
  0,    // 148
  0,    // 149
  0,    // 150
  0,    // 151
  0,    // 152
  0,    // 153
  0,    // 154
  0,    // 155
  0,    // 156
  0,    // 157
  0,    // 158
  0,    // 159
  0,    // 160
  0,    // 161
  0,    // 162
  0,    // 163
  0,    // 164
  0,    // 165
  0,    // 166
  0,    // 167
  0,    // 168
  0,    // 169
  0,    // 170
  0,    // 171
  0,    // 172
  0,    // 173
  0,    // 174
  0,    // 175
  0,    // 176
  0,    // 177
  0,    // 178
  0,    // 179
  0,    // 180
  0,    // 181
  0,    // 182
  0,    // 183
  0,    // 184
  0,    // 185
  0,    // 186
  0,    // 187
  0,    // 188
  0,    // 189
  0,    // 190
  0,    // 191
  0,    // 192
  0,    // 193
  0,    // 194
  0,    // 195
  0,    // 196
  0,    // 197
  0,    // 198
  0,    // 199
  0,    // 200
  0,    // 201
  0,    // 202
  0,    // 203
  0,    // 204
  0,    // 205
  0,    // 206
  0,    // 207
  0,    // 208
  0,    // 209
  0,    // 210
  0,    // 211
  0,    // 212
  0,    // 213
  0,    // 214
  0,    // 215
  0,    // 216
  0,    // 217
  0,    // 218
  0,    // 219
  0,    // 220
  0,    // 221
  0,    // 222
  0,    // 223
  0,    // 224
  0,    // 225
  0,    // 226
  0,    // 227
  0,    // 228
  0,    // 229
  0,    // 230
  0,    // 231
  0,    // 232
  0,    // 233
  0,    // 234
  0,    // 235
  0,    // 236
  0,    // 237
  0,    // 238
  0,    // 239
  0,    // 240
  0,    // 241
  0,    // 242
  0,    // 243
  0,    // 244
  0,    // 245
  0,    // 246
  0,    // 247
  0,    // 248
  0,    // 249
  0,    // 250
  0,    // 251
  0,    // 252
  0,    // 253
  0,    // 254
  0,    // 255
};
