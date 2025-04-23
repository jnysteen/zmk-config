/**
 * This file includes custom keycodes for the danish input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/

// Aliases
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │   │   │   │   │   │   │   │   │   │   │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ æ │ ø │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
#define DK_HALF GRAVE  // ½
#define DK_1    N1     // 1
#define DK_2    N2     // 2
#define DK_3    N3     // 3
#define DK_4    N4     // 4
#define DK_5    N5     // 5
#define DK_6    N6     // 6
#define DK_7    N7     // 7
#define DK_8    N8     // 8
#define DK_9    N9     // 9
#define DK_0    N0     // 0
#define DK_PLUS MINUS  // +
#define DK_ACUT EQUAL  // ´ (dead)
#define DK_Q    Q      // Q
#define DK_W    W      // W
#define DK_E    E      // E
#define DK_R    R      // R
#define DK_T    T      // T
#define DK_Y    Y      // Y
#define DK_U    U      // U
#define DK_I    I      // I
#define DK_O    O      // O
#define DK_P    P      // P
#define DK_AA   LBKT   // Å
#define DK_DIAE SLASH  // ¨ (dead)
#define DK_A    A      // A
#define DK_S    S      // S
#define DK_D    D      // D
#define DK_F    F      // F
#define DK_G    G      // G
#define DK_H    H      // H
#define DK_J    J      // J
#define DK_K    K      // K
#define DK_L    L      // L
#define DK_AE   SEMI   // Æ
#define DK_OE   APOS   // Ø
#define DK_QUOT NUHS   // '
#define DK_LABK NUBS   // <
#define DK_Z    Z      // Z
#define DK_X    X      // X
#define DK_C    C      // C
#define DK_V    V      // V
#define DK_B    B      // B
#define DK_N    N      // N
#define DK_M    M      // M
#define DK_COMM COMMA  // ,
#define DK_DOT  DOT    // .
#define DK_MINS SLASH  // -

 /* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ Å │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ Æ │ Ø │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
#define DK_SECT LS(DK_HALF) // §
#define DK_EXLM LS(DK_1)    // !
#define DK_DQUO LS(DK_2)    // "
#define DK_HASH LS(DK_3)    // #
#define DK_CURR LS(DK_4)    // ¤
#define DK_PERC LS(DK_5)    // %
#define DK_AMPR LS(DK_6)    // &
#define DK_SLSH LS(DK_7)    // /
#define DK_LPRN LS(DK_8)    // (
#define DK_RPRN LS(DK_9)    // )
#define DK_EQL  LS(DK_0)    // =
#define DK_QUES LS(DK_PLUS) // ?
#define DK_GRV  LS(DK_ACUT) // ` (dead)
#define DK_CIRC LS(DK_DIAE) // ^ (dead)
#define DK_ASTR LS(DK_QUOT) // *
#define DK_RABK LS(DK_LABK) // >
#define DK_SCLN LS(DK_COMM) // ;
#define DK_COLN LS(DK_DOT)  // :
#define DK_UNDS LS(DK_MINS) // _

 /* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │   │   │ { │ [ │ ] │ } │   │ | │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DK_AT   RA(DK_2)    // @
#define DK_PND  RA(DK_3)    // £
#define DK_DLR  RA(DK_4)    // $
#define DK_EURO RA(DK_5)    // €
#define DK_LCBR RA(DK_7)    // {
#define DK_LBRC RA(DK_8)    // [
#define DK_RBRC RA(DK_9)    // ]
#define DK_RCBR RA(DK_0)    // }
#define DK_PIPE RA(DK_ACUT) // |
#define DK_TILD RA(DK_DIAE) // ~ (dead)
#define DK_BSLS RA(DK_LABK) // (backslash)
#define DK_MICR RA(DK_M)    // µ





/* Alternative defintion - modifiy to match ZMK codes
#define DK_AE    SEMICOLON           // Æ
#define DK_OE    SINGLE_QUOTE        // Ø
#define DK_AA    LEFT_BRACKET        // Å
#define DK_QUOT  DOUBLE_QUOTES       // "
#define DK_PLUS  EQUALS              // +
#define DK_MINS  MINUS               // -
#define DK_SCLN  ALTGR(COMMA)        // ; on AltGr + ,
#define DK_COLN  ALTGR(PERIOD)       // : on AltGr + .
#define DK_UNDS  UNDERSCORE          // _
#define DK_COMM  COMMA               // ,
#define DK_DOT   PERIOD              // .
#define DK_LPRN  LEFT_PAREN          // (
#define DK_RPRN  RIGHT_PAREN         // )
#define DK_LCBR  ALTGR(DIGIT7)       // { on AltGr + 7
#define DK_RCBR  ALTGR(DIGIT0)       // } on AltGr + 0
#define DK_PIPE  ALTGR(DIGIT1)       // | on AltGr + 1
#define DK_AMPR  AMPERSAND           // &
#define DK_HASH  ALTGR(RIGHT_BRACE)  // # on AltGr + '
#define DK_AT    ALTGR(DIGIT2)       // @ on AltGr + 2
#define DK_DLR   ALTGR(DIGIT4)       // $ on AltGr + 4
#define DK_EURO  ALTGR(DIGIT5)       // € on AltGr + 5
#define DK_LBKT  ALTGR(DIGIT8)       // [ on AltGr + 8
#define DK_RBKT  ALTGR(DIGIT9)       // ] on AltGr + 9
#define DK_BSLS  ALTGR(MINUS)        // \ on AltGr + -
#define DK_LESS  SHIFT(COMMA)        // < on Shift + ,
#define DK_GRTR  SHIFT(PERIOD)       // > on Shift + .
#define DK_QUES  SHIFT(MINUS)        // ? on Shift + -
#define DK_EXLM  SHIFT(DIGIT1)       // ! on Shift + 1
#define DK_DQUO  SHIFT(DIGIT2)       // " on Shift + 2
*/

