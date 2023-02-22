const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0c17", /* black   */
  [1] = "#5C4D69", /* red     */
  [2] = "#4D4D72", /* green   */
  [3] = "#8D5973", /* yellow  */
  [4] = "#69628D", /* blue    */
  [5] = "#8B76A1", /* magenta */
  [6] = "#9A84AE", /* cyan    */
  [7] = "#cdbcd2", /* white   */

  /* 8 bright colors */
  [8]  = "#8f8393",  /* black   */
  [9]  = "#5C4D69",  /* red     */
  [10] = "#4D4D72", /* green   */
  [11] = "#8D5973", /* yellow  */
  [12] = "#69628D", /* blue    */
  [13] = "#8B76A1", /* magenta */
  [14] = "#9A84AE", /* cyan    */
  [15] = "#cdbcd2", /* white   */

  /* special colors */
  [256] = "#0d0c17", /* background */
  [257] = "#cdbcd2", /* foreground */
  [258] = "#cdbcd2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
 unsigned int background = 258;
