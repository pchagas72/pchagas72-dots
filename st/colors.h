const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#08090C", /* black   */
  [1] = "#48546E", /* red     */
  [2] = "#596274", /* green   */
  [3] = "#5B6783", /* yellow  */
  [4] = "#6D758A", /* blue    */
  [5] = "#7C8490", /* magenta */
  [6] = "#888F98", /* cyan    */
  [7] = "#c3c6ca", /* white   */

  /* 8 bright colors */
  [8]  = "#888a8d",  /* black   */
  [9]  = "#48546E",  /* red     */
  [10] = "#596274", /* green   */
  [11] = "#5B6783", /* yellow  */
  [12] = "#6D758A", /* blue    */
  [13] = "#7C8490", /* magenta */
  [14] = "#888F98", /* cyan    */
  [15] = "#c3c6ca", /* white   */

  /* special colors */
  [256] = "#08090C", /* background */
  [257] = "#c3c6ca", /* foreground */
  [258] = "#c3c6ca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
