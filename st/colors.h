const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0B0312", /* black   */
  [1] = "#272D70", /* red     */
  [2] = "#214379", /* green   */
  [3] = "#25358C", /* yellow  */
  [4] = "#2A55A2", /* blue    */
  [5] = "#386FCB", /* magenta */
  [6] = "#3497E5", /* cyan    */
  [7] = "#9ccbed", /* white   */

  /* 8 bright colors */
  [8]  = "#6d8ea5",  /* black   */
  [9]  = "#272D70",  /* red     */
  [10] = "#214379", /* green   */
  [11] = "#25358C", /* yellow  */
  [12] = "#2A55A2", /* blue    */
  [13] = "#386FCB", /* magenta */
  [14] = "#3497E5", /* cyan    */
  [15] = "#9ccbed", /* white   */

  /* special colors */
  [256] = "#0B0312", /* background */
  [257] = "#9ccbed", /* foreground */
  [258] = "#9ccbed",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
