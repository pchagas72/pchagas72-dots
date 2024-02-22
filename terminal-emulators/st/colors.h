const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#08050C", /* black   */
  [1] = "#4C616F", /* red     */
  [2] = "#98807B", /* green   */
  [3] = "#325188", /* yellow  */
  [4] = "#396490", /* blue    */
  [5] = "#4F6A97", /* magenta */
  [6] = "#4C67B2", /* cyan    */
  [7] = "#aabccc", /* white   */

  /* 8 bright colors */
  [8]  = "#76838e",  /* black   */
  [9]  = "#4C616F",  /* red     */
  [10] = "#98807B", /* green   */
  [11] = "#325188", /* yellow  */
  [12] = "#396490", /* blue    */
  [13] = "#4F6A97", /* magenta */
  [14] = "#4C67B2", /* cyan    */
  [15] = "#aabccc", /* white   */

  /* special colors */
  [256] = "#08050C", /* background */
  [257] = "#aabccc", /* foreground */
  [258] = "#aabccc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
