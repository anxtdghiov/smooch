#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char palette[256 * 3] =  {
   0, 0, 0,       0, 0, 80,      0, 0, 160,     0, 0, 255,     0, 32, 0,
   0, 32, 80,     0, 32, 160,    0, 32, 255,    0, 71, 0,      0, 71, 80,
   0, 71, 160,    0, 71, 255,    0, 104, 0,     0, 104, 80,    0, 104, 160,
   0, 104, 255,   0, 143, 0,     0, 143, 80,    0, 143, 160,   0, 143, 255,
   0, 176, 0,     0, 176, 80,    0, 176, 160,   0, 176, 255,   0, 215, 0,
   0, 215, 80,    0, 215, 160,   0, 215, 255,   0, 255, 0,     0, 255, 80,
   0, 255, 160,   0, 255, 255,   32, 0, 0,      32, 0, 80,     32, 0, 160,
   32, 0, 255,    32, 32, 0,     32, 32, 80,    32, 32, 160,   32, 32, 255,
   32, 71, 0,     32, 71, 80,    32, 71, 160,   32, 71, 255,   32, 104, 0,
   32, 104, 80,   32, 104, 160,  32, 104, 255,  32, 143, 0,    32, 143, 80,
   32, 143, 160,  32, 143, 255,  32, 176, 0,    32, 176, 80,   32, 176, 160,
   32, 176, 255,  32, 215, 0,    32, 215, 80,   32, 215, 160,  32, 215, 255,
   32, 255, 0,    32, 255, 80,   32, 255, 160,  32, 255, 255,  64, 0, 0,
   64, 0, 80,     64, 0, 160,    64, 0, 255,    64, 32, 0,     64, 32, 80,
   64, 32, 160,   64, 32, 255,   64, 71, 0,     64, 71, 80,    64, 71, 160,
   64, 71, 255,   64, 104, 0,    64, 104, 80,   64, 104, 160,  64, 104, 255,
   64, 143, 0,    64, 143, 80,   64, 143, 160,  64, 143, 255,  64, 176, 0,
   64, 176, 80,   64, 176, 160,  64, 176, 255,  64, 215, 0,    64, 215, 80,
   64, 215, 160,  64, 215, 255,  64, 255, 0,    64, 255, 80,   64, 255, 160,
   64, 255, 255,  111, 0, 0,     111, 0, 80,    111, 0, 160,   111, 0, 255,
   111, 32, 0,    111, 32, 80,   111, 32, 160,  111, 32, 255,  111, 71, 0,
   111, 71, 80,   111, 71, 160,  111, 71, 255,  111, 104, 0,   111, 104, 80,
   111, 104, 160, 111, 104, 255, 111, 143, 0,   111, 143, 80,  111, 143, 160,
   111, 143, 255, 111, 176, 0,   111, 176, 80,  111, 176, 160, 111, 176, 255,
   111, 215, 0,   111, 215, 80,  111, 215, 160, 111, 215, 255, 111, 255, 0,
   111, 255, 80,  111, 255, 160, 111, 255, 255, 143, 0, 0,     143, 0, 80,
   143, 0, 160,   143, 0, 255,   143, 32, 0,    143, 32, 80,   143, 32, 160,
   143, 32, 255,  143, 71, 0,    143, 71, 80,   143, 71, 160,  143, 71, 255,
   143, 104, 0,   143, 104, 80,  143, 104, 160, 143, 104, 255, 143, 143, 0,
   143, 143, 80,  143, 143, 160, 143, 143, 255, 143, 176, 0,   143, 176, 80,
   143, 176, 160, 143, 176, 255, 143, 215, 0,   143, 215, 80,  143, 215, 160,
   143, 215, 255, 143, 255, 0,   143, 255, 80,  143, 255, 160, 143, 255, 255,
   176, 0, 0,     176, 0, 80,    176, 0, 160,   176, 0, 255,   176, 32, 0,
   176, 32, 80,   176, 32, 160,  176, 32, 255,  176, 71, 0,    176, 71, 80,
   176, 71, 160,  176, 71, 255,  176, 104, 0,   176, 104, 80,  176, 104, 160,
   176, 104, 255, 176, 143, 0,   176, 143, 80,  176, 143, 160, 176, 143, 255,
   176, 176, 0,   176, 176, 80,  176, 176, 160, 176, 176, 255, 176, 215, 0,
   176, 215, 80,  176, 215, 160, 176, 215, 255, 176, 255, 0,   176, 255, 80,
   176, 255, 160, 176, 255, 255, 208, 0, 0,     208, 0, 80,    208, 0, 160,
   208, 0, 255,   208, 32, 0,    208, 32, 80,   208, 32, 160,  208, 32, 255,
   208, 71, 0,    208, 71, 80,   208, 71, 160,  208, 71,  255, 208, 104, 0,
   208, 104, 80,  208, 104, 160, 208, 104, 255, 208, 143, 0,   208, 143, 80,
   208, 143, 160, 208, 143, 255, 208, 208, 0,   208, 208, 80,  208, 208, 160,
   208, 208, 255, 208, 215, 0,   208, 215, 80,  208, 215, 160, 208, 215, 255,
   208, 255, 0,   208, 255, 80,  208, 255, 160, 208, 255, 255, 255, 0, 0,
   255, 0, 80,    255, 0, 160,   255, 0, 255,   255, 32, 0,    255, 32, 80,
   255, 32, 160,  255, 32, 255,  255, 71, 0,    255, 71, 80,   255, 71, 160,
   255, 71, 255,  255, 104, 0,   255, 104, 80,  255, 104, 160, 255, 104, 255,
   255, 143, 0,   255, 143, 80,  255, 143, 160, 255, 143, 255, 255, 176, 0,
   255, 176, 80,  255, 176, 160, 255, 176, 255, 255, 215, 0,   255, 215, 80,
   255, 215, 160, 255, 215, 255, 255, 255, 0,   255, 255, 80,  255, 255, 160,
   255, 255, 255 };

static char transparent[14]; // the red, green, blue of the transparent color,
                     // as hex, with slashes between, prefaced by "rgb:"
                     // (for pnmtopng)
static int debug = 0;
static int output_offset = 0;

static int parse_uint16(const unsigned char *bytes) {
    return bytes[0] + 256 * bytes[1];
}

static int convert_cel(const char *celfile, const char *pnmfile) {
    FILE    *fpcel,
            *fppnm,
            *fppgm;
    unsigned char header[32],
             file_mark,
             bpp;
    int      height, width,
             offx, offy;// might need these later
    int      i, j;
    size_t   n_read;

    fpcel = fopen(celfile, "r");
    if (!fpcel) {
        perror(celfile);
        return -1;
    }

    n_read = fread(header, 4, 1, fpcel);
    if (n_read < 1) {
        fprintf(stderr, "Unable to read header.\n");
        return -1;
    }

    if (strncmp ((const char *) header, "KiSS", 4)) {
        // if the header does NOT start with KiSS
        if (debug) {
            fprintf(stderr, "Old style KiSS cell.\n");
        }
        bpp    = 4;
        width  = parse_uint16(header+0);
        height = parse_uint16(header+2);
        offx   = 0;
        offy   = 0;
    }
    else {
        n_read = fread(header, 28, 1, fpcel);
        if (n_read < 1) {
            fprintf(stderr, "Unable to read rest of header.\n");
            return -1;
        }

        file_mark = header[0];
        if (file_mark != 0x20 && file_mark != 0x21) {
            fprintf(stderr, "%s is not a CEL image file.\n", celfile);
            return -1;
        }

        bpp    = header[1];
        width  = parse_uint16(header+4);
        height = parse_uint16(header+6);
        offx   = parse_uint16(header+8);
        offy   = parse_uint16(header+10);
    }

    if (output_offset) {
        fprintf(stdout, "%d %d\n", offx, offy);
    }

    if (debug) {
        fprintf(stderr, "Width: %d, height: %d \n", width, height);
        fprintf(stderr, "Offx: %d, offy: %d \n", offx, offy);
        fprintf(stderr, "Bits-per-pixel: %d \n", bpp);
    }

    if (width < 0 || height < 0) {
        fprintf(stderr, "Invalid width or height.");
        return -1;
    }

    // open fppnm stream
    fppnm = fopen(pnmfile, "w+");
    if (!fppnm) {
        perror(pnmfile);
        return -1;
    }
    // write header
    fprintf(fppnm, "P3\n");
    fprintf(fppnm, "%d %d\n", width, height);
    fprintf(fppnm, "255\n");

    // if it's a Cherry KiSS file, create a grayscale PGM file for alpha transparency
    if (bpp == 32) {
        fppgm = fopen("out.pgm", "w+");
        if (!fppgm) {
            perror("out.pgm");
            return -1;
        }
        fprintf(fppgm, "P5\n");
        fprintf(fppgm, "%d %d\n", width, height);
        fprintf(fppgm, "255\n");
    }

    unsigned char line [width * 4];

    for (i = 0; i < height && !feof(fpcel); ++i) {
    // for each row in the picture

        switch (bpp) {
            case 4:
                for (j = 0; j < (width+1)/2; j++) {
                // for every two pixels in each row

                    // read one byte into the buffer
                    unsigned char buffer;
                    n_read = fread(&buffer, 1, 1, fpcel);
                    if (n_read < 1) {
                        fprintf(stderr,
                                "Error reading pixels at row %d, column %d\n", i, j);
                        return -1;
                    }

                    // split the byte into two numbers
                    int num1 = (buffer & 0xf0) >> 4;
                    int num2 = buffer & 0x0f;

                    // print the numbers if in debug mode
                    if (debug > 1) {
                        fprintf(stderr, "%d ", num1);
                        fprintf(stderr, "%d ", num2);
                    }

                    if ((width / 2 == 0) || j < (width/2)) {
                    // if the width is even, or it's not the end of a line
                        // lookup the R, G, and B values and print
                        // both pixels to the output file
                        fprintf(fppnm, "%u %u %u %u %u %u ",
                            (unsigned) palette[num1*3],
                            (unsigned) palette[num1*3+1],
                            (unsigned) palette[num1*3+2],
                            (unsigned) palette[num2*3],
                            (unsigned) palette[num2*3+1],
                            (unsigned) palette[num2*3+2]);
                    }
                    else {
                    // if this is the end of an uneven line
                        // print just the first pixel
                        fprintf(fppnm, "%u %u %u ",
                            (unsigned) palette[num1*3],
                            (unsigned) palette[num1*3+1],
                            (unsigned) palette[num1*3+2]);
                    }
                }

                break;
            case 8:
                for (j = 0; j < width; j++) {
                // for each pixel in each row

                    // read one byte into the buffer,
                    unsigned char buffer;
                    n_read = fread(&buffer, 1, 1, fpcel);
                    if (n_read < 1) {
                        fprintf(stderr,
                                "Error reading pixels at row %d, column %d\n", i, j);
                        return -1;
                    }
                    // convert the byte to an int
                    int num;
                    num = buffer;

                    // print the number if in debug mode
                    if (debug > 1) {
                        fprintf(stderr, "%d ", num);
                    }

                    // lookup the R, G, and B values and print to file
                    fprintf(fppnm, "%u %u %u ", (unsigned) palette[num*3],
                                                (unsigned) palette[num*3+1],
                                                (unsigned) palette[num*3+2]);

                }
                break;
            case 32:
                // read a line of pixels
                n_read = fread(line, width*4, 1, fpcel);
                if (n_read < 1) {
                    fprintf(stderr,
                            "Error reading pixels at row %d, column %d\n", i, j);
                    return -1;
                }

                for (j = 0; j < width; j++) {

                    // Cells are stored in Blue, Green, Red order
                    int blue, green, red;
                    blue = line[j*4];
                    green = line[j*4+1];
                    red = line[j*4+2];

                    // 8-bit alpha channel
                    unsigned char alpha;
                    alpha = line[j*4+3];

                    if (debug > 1) {
                        fprintf(stderr, "%u%u%u-%X ", red, green, blue, alpha);
                    }

                    // Print pixels to file
                    fprintf(fppnm, "%u %u %u ", (unsigned) red,
                                                (unsigned) green,
                                                (unsigned) blue);
                    // Write the one byte from alpha to fppgm
                    fwrite(&alpha, 1, 1, fppgm);
                }
                break;

        }
        // end the row with a newline
        if (debug > 1) {
            fprintf(stderr, " \n");
        }
        fprintf(fppnm, "\n");
    }

    fclose(fpcel);
    fclose(fppnm);

    return 0;
}

static int read_palette(const char *palfile) {
    FILE   *fppal;
    unsigned char header[32],
            file_mark,
            buffer[2],
            bpp;
    int     colors;
    int     i;
    size_t  n_read;

    fppal = fopen(palfile, "r");
    if (!fppal) {
        perror(palfile);
        return -1;
    }

    n_read = fread(header, 4, 1, fppal);
    if (n_read < 1) {
        fprintf(stderr, "Bad palette header.\n");
        return -1;
    }

    if (strncmp ((const char *) header, "KiSS", 4)) {
        if (debug) {
            fprintf(stderr, "Old style palette\n");
        }

        colors = 16;

        // seeks back to the start of the file
        fseek(fppal, 0, SEEK_SET);

        // the rest of this is the same as "case 12" below"
        // DRY?
        // could pull the switch case out of the if and
        // switch on colors?
        for (i = 0; i < colors; i++) {
            n_read = fread(buffer, 1, 2, fppal);
            if (n_read < 2) {
                fprintf(stderr, "Error reading palette.");
                return -1;
            }

            palette[i*3+0] =  buffer[0] & 0xf0;
            palette[i*3+1] = (buffer[1] & 0x0f) << 4;
            palette[i*3+2] = (buffer[0] & 0x0f) << 4;
        }
    }
    else {
        fprintf(stderr, "New style palette\n");

        n_read = fread(header+4, 28, 1, fppal);
        if (n_read < 1) {
            fprintf(stderr, "Can't read palette header after \"KiSS\".\n");
        }

        file_mark = header[4];
        if (file_mark != 0x10) {
            fprintf(stderr, "Filemark should be %c and is actually %c.\n", 0x10, file_mark);
            return -1;
        }

        bpp = header[5];
        colors = parse_uint16(header+8);

        if (debug) {
            fprintf(stderr,"Bits per pixel: %d \n", bpp);
            fprintf(stderr, "Number colors: %d \n", colors);
        }

        switch (bpp) {
            case 12:
                //for each color
                for (i = 0; i < colors; i++) {
                    // read two bytes into the buffer
                    n_read = fread(buffer, 1, 2, fppal);
                    if (n_read < 2) {
                        fprintf(stderr, "Error while reading palette.");
                        return -1;
                    }

                    // three colors are stored in two bytes
                    //     buffer[0]    |    buffer[1]
                    //  0 1 2 3 4 5 6 7 | 0 1 2 3 4 5 6 7
                    //  color 1 color 3 |   ---   color 2
                    palette[i*3+0] =  buffer[0] & 0xf0;
                    palette[i*3+1] = (buffer[1] & 0x0f) * 16;
                    palette[i*3+2] = (buffer[0] & 0x0f) * 16;
                }
                break;
            case 24:
                // goes through fppal grabs 3 bytes colors times
                // and stores it in palette
                n_read = fread(palette, 3, colors, fppal);
                if (n_read < colors) {
                    fprintf(stderr, "Error while reading palette.");
                    return -1;
                }
                break;
            default:
                fprintf(stderr, "Invalid bits-per-pixel of %d", bpp);
                return -1;
        }
    }

    sprintf(transparent, "rgb:%x/%x/%x", (unsigned) palette[0],
                                         (unsigned) palette[1],
                                         (unsigned) palette[2]);

    fclose(fppal);

    return 0;
}


int main (int argc, char *argv[]) {
    int err;

    char *input_file;
    char *palette_file;
    char *output_file;

    if (strcmp(argv[1], "-t") == 0) {
        palette_file = argv[2];
        fprintf(stderr,"Read palette %s \n", palette_file);
        err = read_palette (palette_file);
        if (err) return 1;
        fprintf(stdout, "%s", transparent);
        return 0;
    }

    int ap = 1; // arg pointer

    debug = 0;
    output_offset = 0;

    if (ap < argc && strncmp(argv[ap], "-d", 2) == 0) {
        if (strncmp(argv[ap], "-d2", 3) == 0) {
            debug = 2;
        }
        else {
            debug = 1;
        }
        ++ap;
    }

    if (ap < argc && strcmp(argv[ap], "-o") == 0) {
        output_offset = 1;
        ++ap;
    }

    if (ap+3 == argc) {
        palette_file = argv[ap];
        input_file = argv[ap+1];
        output_file = argv[ap+2];
    }
    else {
        fprintf(stderr, "Usage: cel2png (-d) (-t) (-o) <palette file> <cel file> <out file> \n");
        return 1;
    }

    fprintf(stderr,"Read palette %s \n", palette_file);
    err = read_palette (palette_file);
    if (err) return 1;

    fprintf(stderr,"Read cel %s \n", input_file);
    err = convert_cel (input_file, output_file);
    if (err) return 1;

    fprintf(stderr,"Done \n");

    return 0;
}
