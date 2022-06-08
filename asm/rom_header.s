/*
 * Super Mario 64 ROM header
 * Only the first 0x18 bytes matter to the console.
 */

.byte  0x80, 0x37, 0x12, 0x40   /* PI BSD Domain 1 register */
.word  0x0000000F               /* Clockrate setting*/
.word  entry_point              /* Entrypoint */
.word  0x00000000               /* Revision */
.word  0x00000000               /* Checksum 1 */
.word  0x00000000               /* Checksum 2 */
.word  0x00000000               /* Unknown */
.word  0x00000000               /* Unknown */
.word  0x00000000               /* Internal ROM name */
.word  0x00000000
.word  0x00000000
.word  0x00000000
.word  0x00000000
.word  0x00000000               /* Unknown */
.word  0x00000000               /* Cartridge */
.word  0x00000000               /* Cartridge ID and Version */
