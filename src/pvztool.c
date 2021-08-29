// coding in 2015~2016, now deprecated
// modify java-packageName in 2020.06.18

// c start

// include start

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../lib/zlib/zlib.h"
#include "../lib/libpng/png.h"

// include end

// variable set start

union union__value_ {
	signed char signed_char;
	unsigned char unsigned_char;
	signed short signed_short;
	unsigned short unsigned_short;
	signed int signed_int;
	unsigned int unsigned_int;
	signed long signed_long;
	unsigned long unsigned_long;
	float signed_float;
	double signed_double;
	unsigned char hex_8[1];
	unsigned char hex_16[2];
	unsigned char hex_32[4];
	unsigned char hex_64[8];
};

struct struct__variable_basef_ {
	signed char signed_char__1;
	unsigned char unsigned_char__1;
	unsigned char unsigned_char__2;
	signed short signed_short__1;
	signed short signed_short__2;
	unsigned short unsigned_short__1;
	unsigned short unsigned_short__2;
	signed int signed_int__1;
	signed int signed_int__2;
	unsigned int unsigned_int__1;
	unsigned int unsigned_int__2;
	signed long signed_long__1;
	unsigned long unsigned_long__1;
	char char_string__1[8192];
	char char_string__2[8192];
};

struct struct__variable_ {
	signed char signed_char__1;
	unsigned char unsigned_char__1;
	unsigned char unsigned_char__2;
	signed short signed_short__1;
	signed short signed_short__2;
	unsigned short unsigned_short__1;
	unsigned short unsigned_short__2;
	signed int signed_int__1;
	signed int signed_int__2;
	unsigned int unsigned_int__1;
	unsigned int unsigned_int__2;
	signed long signed_long__1;
	unsigned long unsigned_long__1;
	char char_string__1[8192];
	char char_string__2[8192];
};

struct struct__keep_value_ {
	signed char signed_char;
	unsigned char unsigned_char;
	signed short signed_short;
	unsigned short unsigned_short;
	signed int signed_int;
	unsigned int unsigned_int;
	signed long signed_long;
	unsigned long unsigned_long;
};

struct struct__byte_stream_ {
	unsigned char * stream_source;
	unsigned char * stream_dest;
};

struct struct__function_parameter_ {
	char jr_conversion__file_path__rton[8192];
	char jr_conversion__file_path__json[8192];
	char jr_conversion__file_path__string_cache[8192];
	char jr_conversion__file_path__string_cache_wchar[8192];
	unsigned short jr_conversion__is_string_all_cache;
	char bpsr_upck__file_path__pgsr[8192];
	unsigned short bpsr_upck__subfile_pack__compress_type;
	char bpsr_upck__file_path__bpsr[8192];
	unsigned short bpsr_upck__is_version_cn;
	unsigned short bpsr_upck__resource__upck_pgsr;
	unsigned short bpsr_upck__resource__upck_file;
	unsigned short bpsr_upck__resource_pgsr__upck_pgsr;
	unsigned short bpsr_upck__resource_file__upck_file;
	unsigned short bpsr_upck__resource__repack_pgsr;
	char resource_rwdt__file_path__pre[8192];
	unsigned int resource_rwdt__slot_start;
	unsigned short resource_rwdt__is_full;
	unsigned short resource_rwdt__put_1536;
	unsigned short resource_rwdt__put_768;
	unsigned short resource_rwdt__put_384;
	char image_rw__file_path__pre[8192];
	unsigned short image_rw__is_chdir;
	char dtrz_upck__file_path__dtrz[8192];
};

struct struct__workspace__jr_conversion_ {
	FILE * fileptr__rton;
	FILE * fileptr__json;
	FILE * fileptr__string_cache;
	FILE * fileptr__string_cache_wchar;
	unsigned char type_id;
	unsigned short key_or_value_current;
	unsigned short last_key_is_string;
	unsigned short last_key_is_string_array[1024];
	unsigned short object_array__level;
	unsigned short object_array__level_current;
	unsigned short array_type_is_value;
	unsigned short array_element_sum;
	unsigned char string[8192];
	unsigned short string_length;
	unsigned int string_cache_sum;
	unsigned int string_cache_number;
	unsigned short * string_cache_length;
	unsigned int * string_cache_offset;
	unsigned int string_cache_wchar_sum;
	unsigned int string_cache_wchar_number;
	unsigned int * string_cache_wchar_offset;
	unsigned long x24__value_unsigned;
	unsigned long x24__value_signed;
	unsigned char x24__base_number;
	unsigned char x24__base_number__array[8];
	unsigned short x24__exponent;
	unsigned short x24__exponent_current;
	unsigned short value_is_signed;
	unsigned short value_is_float;
	unsigned short value_is_pow;
};

struct struct__workspace__bpsr_upck_ {
	char oripath__bpsr[8192];
	char oripath__pgsr[8192];
	char oripath__bpsr__resource[8192];
	char oripath__bpsr__resource_group[8192];
	char oripath__bpsr__resource_pgsr[8192];
	char oripath__bpsr__resource_file[8192];
	FILE * fileptr__bpsr;
	FILE * fileptr__resource_list;
	FILE * fileptr__pgsr;
	FILE * fileptr__pgsr__subfile_list;
	FILE * fileptr__pgsr__subfile_pack_0;
	FILE * fileptr__pgsr__subfile_pack_1;
	FILE * fileptr__pgsr__subfile;
	FILE * fileptr__resource_file__file;
	unsigned int bpsr__group_number;
	unsigned int bpsr__subgroup_number;
	unsigned int bpsr__autopool_number;
	unsigned int bpsr__ptx_number;
	unsigned int pgsr__subfile_number;
	char bpsr__file__path[8192][256];
	unsigned int bpsr__file__parent[8192];
	unsigned short bpsr__file__is_ptx[8192];
	unsigned int bpsr__file__ptx_size[8192];
	unsigned int bpsr__file__sum;
	FILE * fileptr__text__temp;
	unsigned int text__offset;
	unsigned int text__size;
	unsigned int text__size_current;
	unsigned int text__type;
	char text__string[8192][256];
	unsigned int text__string_sum;
	unsigned int text__string_number;
	unsigned int text__string_character_number;
	unsigned int text__string_sort__number[8192];
	unsigned short text__string_sort__is_ok[8192];
	unsigned int * text__string_link_offset;
	signed int text__string_be_link[8192];
	unsigned int text__string_be_link__offset[8192];
	unsigned int text__string_be_link__character_number[8192];
	unsigned int text__list__number[8192];
	unsigned int text__subfile_info__type[8192];
	unsigned int text__subfile_info__offset[8192];
	unsigned int text__subfile_info__size[8192];
	unsigned int text__subfile_info__ptx__number[8192];
	unsigned int text__subfile_info__ptx__width[8192];
	unsigned int text__subfile_info__ptx__height[8192];
};

struct struct__1bsr_header_ {
	unsigned int header_id;
	unsigned int header_id_x4;
	unsigned int null_1[1];
	unsigned int obsr__size;
	unsigned int file_list__size;
	unsigned int file_list__offset;
	unsigned int null_2[2];
	unsigned int subgroup_list__size;
	unsigned int subgroup_list__offset;
	unsigned int subgroup_info__item_sum;
	unsigned int subgroup_info__offset;
	unsigned int subgroup_info__item_size;
	unsigned int group_info__item_sum;
	unsigned int group_info__offset;
	unsigned int group_info__item_size;
	unsigned int group_list__size;
	unsigned int group_list__offset;
	unsigned int autopool_info__item_sum;
	unsigned int autopool_info__offset;
	unsigned int autopool_info__item_size;
	unsigned int ptx_info__item_sum;
	unsigned int ptx_info__offset;
	unsigned int ptx_info__item_size;
	unsigned int null_3[3];
	unsigned int obsr__size_2;
};

struct struct__1bsr__group_info_ {
	char id[128];
	unsigned int subgroup__number[64][4];
	unsigned int subgroup__sum;
};

struct struct__1bsr__subgroup_info_ {
	char id[128];
	unsigned int pgsr__offset;
	unsigned int pgsr__size;
	unsigned int number;
	unsigned int pgsr__subfile_pack__compress_type;
	unsigned int pgsr__header__and__subfile_info__size;
	unsigned int pgsr__subfile_pack_0__offset;
	unsigned int pgsr__subfile_pack_0__size;
	unsigned int pgsr__subfile_pack_0__size_source;
	unsigned int pgsr__subfile_pack_0__size_source2;
	unsigned int pgsr__subfile_pack_1__offset;
	unsigned int pgsr__subfile_pack_1__size;
	unsigned int pgsr__subfile_pack_1__size_source;
	unsigned int null_1[5];
	unsigned int pgsr__ptx_sum;
	unsigned int pgsr__ptx_number_start;
};

struct struct__1bsr__autopool_info_ {
	char id[128];
	unsigned int pgsr__subfile_pack_1__offset;
	unsigned int pgsr__subfile_pack_1__size;
	unsigned int unknown;
	unsigned int null_1[3];
};

struct struct__1bsr__ptx_info_ {
	unsigned int width;
	unsigned int height;
	unsigned int unknown;
	unsigned int pixel_format;
};

struct struct__pgsr_header_ {
	unsigned int header_id;
	unsigned int header_id_x4;
	unsigned int null_1[2];
	unsigned int subfile_pack__compress_type;
	unsigned int header__and__subfile_info__size;
	unsigned int subfile_pack_0__offset;
	unsigned int subfile_pack_0__size;
	unsigned int subfile_pack_0__size_source;
	unsigned int null_2[1];
	unsigned int subfile_pack_1__offset;
	unsigned int subfile_pack_1__size;
	unsigned int subfile_pack_1__size_source;
	unsigned int null_3[5];
	unsigned int subfile_info__size;
	unsigned int subfile_info__offset;
	unsigned int null_4[3];
};

struct struct__workspace__resource_rwdt_ {
	char oripath__text[8192];
	FILE * fileptr__json;
	FILE * fileptr__text;
	FILE * fileptr__subtext;
	FILE * fileptr__subtext_list;
	FILE * fileptr__resource_list;
	FILE * fileptr__image_list;
	FILE * fileptr__pixel_formay__list;
	char string__pixel_format[128][16];
	char id[256];
	char parent[128];
	unsigned int group_sum;
	unsigned int group_number;
	unsigned int subgroup_sum;
	unsigned int subgroup_number;
	unsigned short is_composite;
	unsigned short is_subgroup;
	unsigned short subgroup__pgsr__subfile_pack__compress_type;
	unsigned short subgroup__is_res;
	unsigned short subgroup__is_loc;
	char subgroup__res[5];
	char subgroup__loc[5];
	unsigned int resource_sum;
	unsigned int resource_number;
	char subgroup__id__pack[8192][128];
	unsigned int subgroup__pgsr__subfile_pack__compress_type__pack[8192];
	unsigned int resource__slot_sum;
	unsigned int resource__slot__pack[262144];
	char resource__path__pack[8192][256];
	unsigned int resource__pixel_format__pack[8192];
	char resource__id__pack[262144][256];
	unsigned int resource__atlas_sum;
	unsigned int resource__atlas_number;
	char resource__atlas_path__pack[8192][256];
	unsigned int resource__atlas_seek__pack[8192];
	unsigned short object_array__level;
};

struct struct__resource_rwdt__group_info_ {
	char id[128];
	unsigned short is_composite;
	unsigned short subgroup__sum;
	char subgroup__id[64][128];
	unsigned short subgroup__pgsr__subfile_pack__compress_type[64];
	unsigned short subgroup__is_res[64];
	unsigned short subgroup__is_loc[64];
	char subgroup__res[64][5];
	char subgroup__loc[64][5];
	unsigned int subgroup__seek[64];
};

struct struct__resource_rwdt__resource_info_ {
	unsigned int slot;
	char id[256];
	char type[16];
	char path[256];
	char parent[256];
	unsigned short is_atlas;
	unsigned short is_subimage;
	unsigned short pixel_format;
	unsigned int width;
	unsigned int height;
	unsigned int ax;
	unsigned int ay;
	unsigned int aw;
	unsigned int ah;
	unsigned int x;
	unsigned int y;
	unsigned short is_unnecessary;
};

struct struct__workspace__image_rw_ {
	char oripath__atlas[8192];
	FILE * fileptr__rgba;
	FILE * fileptr__atlas;
	FILE * fileptr__subimage;
	FILE * fileptr__image_list;
	char string__pixel_format[16];
	char atlas__path[256];
	char subimage__path[256];
	unsigned char * rgba_data;
	unsigned int atlas__width;
	unsigned int atlas__height;
	unsigned int subimage__ax;
	unsigned int subimage__ay;
	unsigned int subimage__aw;
	unsigned int subimage__ah;
	png_structp atlas__structp;
	png_infop atlas__infop;
	png_bytep * atlas__bytep;
	png_structp subimage__structp;
	png_infop subimage__infop;
	png_bytep * subimage__bytep;
};

struct struct__workspace__dtrz_upck_ {
	char oripath__dtrz[8192];
	FILE * fileptr__dtrz;
	FILE * fileptr__subfile_list;
	FILE * fileptr__subfile;
	char subfile__name[8192][128];
	char subfile__directory[8192][128];
	char subfile__path[128];
};

struct struct__dtrz_header_ {
	unsigned int header_id;
	unsigned short subfile__name_count;
	unsigned short subfile__directory_count;
};

struct struct__dtrz__subfile_path_ {
	unsigned short directory_number;
	unsigned short name_number;
	unsigned short null_1;
};

struct struct__dtrz__subfile_info_ {
	unsigned int offset;
	unsigned int size;
	unsigned int size_2;
	unsigned int unknown;
};

static union union__value_ union__value;
static struct struct__variable_basef_ struct__variable_basef;
static struct struct__variable_ struct__variable;
static struct struct__keep_value_ struct__keep_value;
static struct struct__byte_stream_ struct__byte_stream;
static struct struct__function_parameter_ struct__function_parameter;
static struct struct__workspace__jr_conversion_ struct__workspace__jr_conversion;
static struct struct__workspace__bpsr_upck_ struct__workspace__bpsr_upck;
static struct struct__1bsr_header_ struct__1bsr_header;
static struct struct__1bsr__group_info_ struct__1bsr__group_info__pack[8192];
static struct struct__1bsr__subgroup_info_ struct__1bsr__subgroup_info__pack[8192];
static struct struct__1bsr__autopool_info_ struct__1bsr__autopool_info__pack[8192];
static struct struct__1bsr__ptx_info_ struct__1bsr__ptx_info__pack[8192];
static struct struct__pgsr_header_ struct__pgsr_header;
static struct struct__workspace__resource_rwdt_ struct__workspace__resource_rwdt;
static struct struct__resource_rwdt__group_info_ struct__resource_rwdt__group_info, struct__resource_rwdt__group_info__pack[8192];
static struct struct__resource_rwdt__resource_info_ struct__resource_rwdt__resource_info, struct__resource_rwdt__resource_info__pack[8192];
static struct struct__workspace__image_rw_ struct__workspace__image_rw;
static struct struct__workspace__dtrz_upck_ struct__workspace__dtrz_upck;
static struct struct__dtrz_header_ struct__dtrz_header;
static struct struct__dtrz__subfile_path_ struct__dtrz__subfile_path__pack[8192];
static struct struct__dtrz__subfile_info_ struct__dtrz__subfile_info__pack[8192];

// variable set end

// functions start

// base functions start

static unsigned int function__to_2expn(unsigned int value) {
	struct__variable_basef.unsigned_int__1 = 2;
	for (;; ) {
		if ((value == struct__variable_basef.unsigned_int__1) || (value < struct__variable_basef.unsigned_int__1)) {
			return struct__variable_basef.unsigned_int__1;
		}
		struct__variable_basef.unsigned_int__1 = struct__variable_basef.unsigned_int__1 * 2;
	}
}

static unsigned int function__return_fullsize(unsigned int size) {
	if ((size - ((size / 0x1000) * 0x1000)) == 0) {
		return size;
	} else {
		return ((size / 0x1000) + 1) * 0x1000;
	}
}

static void function__string_empty(char string_be_empty[], unsigned short string_length) {
	struct__variable_basef.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable_basef.unsigned_short__1 == string_length) {
			break;
		}
		string_be_empty[struct__variable_basef.unsigned_short__1] = '\0';
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__string_uppercase(char string_be_uppercase[]) {
	struct__variable_basef.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable_basef.unsigned_short__1 == strlen(string_be_uppercase)) {
			break;
		}
		if ((string_be_uppercase[struct__variable_basef.unsigned_short__1] >= 97) && (string_be_uppercase[struct__variable_basef.unsigned_short__1] <= 122)) {
			string_be_uppercase[struct__variable_basef.unsigned_short__1] = string_be_uppercase[struct__variable_basef.unsigned_short__1] - 0x20;
		}
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__string_get_from_text(FILE * fileptr__get_from, char string_be_get[], unsigned short string_length) {
	function__string_empty(string_be_get, string_length);
	struct__variable_basef.unsigned_short__1 = 0;
	for (;; ) {
		struct__variable_basef.unsigned_char__1 = fgetc(fileptr__get_from);
		if ((struct__variable_basef.unsigned_char__1 == '\t') || (struct__variable_basef.unsigned_char__1 == '\n')) {
			break;
		}
		string_be_get[struct__variable_basef.unsigned_short__1] = struct__variable_basef.unsigned_char__1;
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__file_close(FILE * filptr__be_close) {
	if (filptr__be_close != NULL) {
		fclose(filptr__be_close);
		filptr__be_close = NULL;
	}
}

static unsigned short function__file_is_end(FILE * fileptr__be_test) {
	if (fgetc(fileptr__be_test) == 0xFFFFFFFF) {
		return 1;
	} else {
		fseek(fileptr__be_test, -1, 1);
		return 0;
	}
}

static void function__put_null(FILE * fileptr__put_to, unsigned int put_sum) {
	struct__variable_basef.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable_basef.unsigned_int__1 == put_sum) {
			break;
		}
		fprintf(fileptr__put_to, "%c", 0x0);
		struct__variable_basef.unsigned_int__1 = struct__variable_basef.unsigned_int__1 + 1;
	}
}

static void function__put_tab(FILE * fileptr__put_to, unsigned short put_sum) {
	struct__variable_basef.unsigned_short__1 = 0;
	fprintf(fileptr__put_to, "\n");
	for (;; ) {
		if (struct__variable_basef.unsigned_short__1 == put_sum) {
			break;
		}
		fprintf(fileptr__put_to, "\t");
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__get_value(FILE * fileptr__get_from, unsigned short byte_sum) {
	union__value.hex_64[0] = 0x0;
	union__value.hex_64[1] = 0x0;
	union__value.hex_64[2] = 0x0;
	union__value.hex_64[3] = 0x0;
	union__value.hex_64[4] = 0x0;
	union__value.hex_64[5] = 0x0;
	union__value.hex_64[6] = 0x0;
	union__value.hex_64[7] = 0x0;
	struct__variable_basef.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable_basef.unsigned_short__1 == byte_sum) {
			break;
		}
		union__value.hex_64[struct__variable_basef.unsigned_short__1] = fgetc(fileptr__get_from);
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__put_value(FILE * fileptr__get_from, unsigned short byte_sum) {
	struct__variable_basef.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable_basef.unsigned_short__1 == byte_sum) {
			break;
		}
		fprintf(fileptr__get_from, "%c", union__value.hex_64[struct__variable_basef.unsigned_short__1]);
		struct__variable_basef.unsigned_short__1 = struct__variable_basef.unsigned_short__1 + 1;
	}
}

static void function__data_copy(FILE * fileptr__source_from, FILE * fileptr__copy_to, unsigned int source_offset, unsigned int source_size) {
	struct__byte_stream.stream_source = (unsigned char *)malloc(sizeof(unsigned char) * source_size);
	fseek(fileptr__source_from, source_offset, 0);
	fread(struct__byte_stream.stream_source, source_size, 1, fileptr__source_from);
	fseek(fileptr__copy_to, 0, 2);
	fwrite(struct__byte_stream.stream_source, source_size, 1, fileptr__copy_to);
	free(struct__byte_stream.stream_source);
	struct__byte_stream.stream_source = NULL;
}

static unsigned int function__zlib_compress(FILE * fileptr__source_from, FILE * fileptr__save_to, unsigned int source_offset, unsigned int source_size) {
	unsigned int dest_size;
	dest_size = compressBound(source_size);
	struct__byte_stream.stream_source = (Byte *)malloc(sizeof(Byte) * source_size);
	struct__byte_stream.stream_dest = (Byte *)malloc(sizeof(Byte) * dest_size);
	fseek(fileptr__source_from, source_offset, 0);
	fread(struct__byte_stream.stream_source, source_size, 1, fileptr__source_from);
	compress2(struct__byte_stream.stream_dest, &dest_size, struct__byte_stream.stream_source, source_size, 9);
	fwrite(struct__byte_stream.stream_dest, dest_size, 1, fileptr__save_to);
	dest_size = function__return_fullsize(dest_size);
	function__put_null(fileptr__save_to, function__return_fullsize(ftell(fileptr__save_to)) - ftell(fileptr__save_to));
	free(struct__byte_stream.stream_source);
	struct__byte_stream.stream_source = NULL;
	free(struct__byte_stream.stream_dest);
	struct__byte_stream.stream_dest = NULL;
	return dest_size;
}

static void function__zlib_uncompress(FILE * fileptr__source_from, FILE * fileptr__save_to, unsigned int source_offset, unsigned int source_size, unsigned dest_size) {
	struct__byte_stream.stream_source = (unsigned char *)malloc(sizeof(unsigned char) * source_size);
	struct__byte_stream.stream_dest = (unsigned char *)malloc(sizeof(unsigned char) * dest_size);
	fseek(fileptr__source_from, source_offset, 0);
	fread(struct__byte_stream.stream_source, source_size, 1, fileptr__source_from);
	uncompress(struct__byte_stream.stream_dest, &dest_size, struct__byte_stream.stream_source, source_size);
	fseek(fileptr__save_to, 0, 2);
	fwrite(struct__byte_stream.stream_dest, dest_size, 1, fileptr__save_to);
	free(struct__byte_stream.stream_source);
	struct__byte_stream.stream_source = NULL;
	free(struct__byte_stream.stream_dest);
	struct__byte_stream.stream_dest = NULL;
}

// base functions end

// jr_conversion functions start

static void function__jr_conversion__get_x24(FILE * fileptr__get_from) {
	struct__workspace__jr_conversion.x24__value_unsigned = 0;
	struct__workspace__jr_conversion.x24__exponent = 0;
	for (;; ) {
		struct__workspace__jr_conversion.x24__base_number = fgetc(fileptr__get_from);
		if (struct__workspace__jr_conversion.x24__base_number < 0x80) {
			struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.x24__value_unsigned + (struct__workspace__jr_conversion.x24__base_number * pow(0x80, struct__workspace__jr_conversion.x24__exponent));
			break;
		}
		struct__workspace__jr_conversion.x24__base_number = struct__workspace__jr_conversion.x24__base_number - 0x80;
		struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.x24__value_unsigned + (struct__workspace__jr_conversion.x24__base_number * pow(0x80, struct__workspace__jr_conversion.x24__exponent));
		struct__workspace__jr_conversion.x24__exponent = struct__workspace__jr_conversion.x24__exponent + 1;
	}
}

static void function__jr_conversion__put_x24(FILE * fileptr__put_to) {
	struct__workspace__jr_conversion.x24__base_number__array[0] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[1] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[2] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[3] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[4] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[5] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[6] = 0x0;
	struct__workspace__jr_conversion.x24__base_number__array[7] = 0x0;
	struct__workspace__jr_conversion.x24__exponent = 0;
	struct__workspace__jr_conversion.x24__exponent_current = 0;
	if (struct__workspace__jr_conversion.x24__value_unsigned != 0) {
		for (;; ) {
			if (((struct__workspace__jr_conversion.x24__value_unsigned / pow(0x80, struct__workspace__jr_conversion.x24__exponent)) >= 0x01) && ((struct__workspace__jr_conversion.x24__value_unsigned / pow(0x80, struct__workspace__jr_conversion.x24__exponent)) < 0x80)) {
				break;
			}
			struct__workspace__jr_conversion.x24__exponent = struct__workspace__jr_conversion.x24__exponent + 1;
		}
	}
	struct__workspace__jr_conversion.x24__exponent_current = struct__workspace__jr_conversion.x24__exponent;
	for (;; ) {
		if (struct__workspace__jr_conversion.x24__value_unsigned == 0) {
			struct__workspace__jr_conversion.x24__exponent_current = 0;
			for (;; ) {
				if (struct__workspace__jr_conversion.x24__exponent_current == struct__workspace__jr_conversion.x24__exponent) {
					fprintf(fileptr__put_to, "%c", struct__workspace__jr_conversion.x24__base_number__array[struct__workspace__jr_conversion.x24__exponent_current]);
					break;
				}
				fprintf(fileptr__put_to, "%c", struct__workspace__jr_conversion.x24__base_number__array[struct__workspace__jr_conversion.x24__exponent_current] + 0x80);
				struct__workspace__jr_conversion.x24__exponent_current = struct__workspace__jr_conversion.x24__exponent_current + 1;
			}
			break;
		}
		struct__workspace__jr_conversion.x24__base_number__array[struct__workspace__jr_conversion.x24__exponent_current] = struct__workspace__jr_conversion.x24__value_unsigned / pow(0x80, struct__workspace__jr_conversion.x24__exponent_current);
		struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.x24__value_unsigned - (struct__workspace__jr_conversion.x24__base_number__array[struct__workspace__jr_conversion.x24__exponent_current] * pow(0x80, struct__workspace__jr_conversion.x24__exponent_current));
		struct__workspace__jr_conversion.x24__exponent_current = struct__workspace__jr_conversion.x24__exponent_current - 1;
	}
}

static void function__jr_conversion__get_stream_string(FILE * fileptr__get_from) {
	struct__variable.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_short__1 == struct__workspace__jr_conversion.string_length) {
			break;
		}
		struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] = fgetc(fileptr__get_from);
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
	}
}

static void function__jr_conversion__get_text_string(FILE * fileptr__get_from) {
	static unsigned short keep_value;
	struct__workspace__jr_conversion.string_length = 0;
	for (;; ) {
		struct__variable.unsigned_char__1 = fgetc(fileptr__get_from);
		if (struct__variable.unsigned_char__1 == '\"') {
			break;
		}
		if (struct__variable.unsigned_char__1 == '\\') {
			struct__variable.unsigned_char__1 = fgetc(fileptr__get_from);
			if (struct__variable.unsigned_char__1 == 'x') {
				struct__keep_value.unsigned_short = struct__workspace__jr_conversion.string_length;
				fscanf(fileptr__get_from, "%2X", &struct__variable.unsigned_char__1);
				struct__workspace__jr_conversion.string_length = struct__keep_value.unsigned_short;
			} else if (struct__variable.unsigned_char__1 == '0') {
				struct__variable.unsigned_char__1 = '\0';
			} else if (struct__variable.unsigned_char__1 == 'a') {
				struct__variable.unsigned_char__1 = '\a';
			} else if (struct__variable.unsigned_char__1 == 'b') {
				struct__variable.unsigned_char__1 = '\b';
			} else if (struct__variable.unsigned_char__1 == 't') {
				struct__variable.unsigned_char__1 = '\t';
			} else if (struct__variable.unsigned_char__1 == 'n') {
				struct__variable.unsigned_char__1 = '\n';
			} else if (struct__variable.unsigned_char__1 == 'v') {
				struct__variable.unsigned_char__1 = '\v';
			} else if (struct__variable.unsigned_char__1 == 'f') {
				struct__variable.unsigned_char__1 = '\f';
			} else if (struct__variable.unsigned_char__1 == 'r') {
				struct__variable.unsigned_char__1 = '\r';
			} else if (struct__variable.unsigned_char__1 == 'e') {
				struct__variable.unsigned_char__1 = '\e';
			} else if (struct__variable.unsigned_char__1 == '\"') {
				struct__variable.unsigned_char__1 = '\"';
			} else if (struct__variable.unsigned_char__1 == '\\') {
				struct__variable.unsigned_char__1 = '\\';
			}
		}
		struct__workspace__jr_conversion.string[struct__workspace__jr_conversion.string_length] = struct__variable.unsigned_char__1;
		struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.string_length + 1;
	}
}

static void function__jr_conversion__put_stream_string(FILE * fileptr__put_to) {
	struct__variable.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_short__1 == struct__workspace__jr_conversion.string_length) {
			break;
		}
		fprintf(fileptr__put_to, "%c", struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1]);
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
	}
}

static void function__jr_conversion__put_text_string(FILE * fileptr__put_to, unsigned short is_ls) {
	struct__variable.unsigned_short__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_short__1 == struct__workspace__jr_conversion.string_length) {
			break;
		}
		if ((struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] >= 0x20) && (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] <= 0x7E)) {
			if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\"') {
				fprintf(fileptr__put_to, "\\\"");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\\') {
				fprintf(fileptr__put_to, "\\\\");
			} else {
				fprintf(fileptr__put_to, "%c", struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1]);
			}
		} else {
			if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\0') {
				fprintf(fileptr__put_to, "\\0");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\a') {
				fprintf(fileptr__put_to, "\\a");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\b') {
				fprintf(fileptr__put_to, "\\b");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\t') {
				fprintf(fileptr__put_to, "\\t");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\n') {
				fprintf(fileptr__put_to, "\\n");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\f') {
				fprintf(fileptr__put_to, "\\f");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\v') {
				fprintf(fileptr__put_to, "\\v");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\r') {
				fprintf(fileptr__put_to, "\\r");
			} else if (struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1] == '\e') {
				fprintf(fileptr__put_to, "\\e");
			} else {
				if (is_ls == 1) {
					fprintf(fileptr__put_to, "%c", struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1]);
				} else {
					fprintf(fileptr__put_to, "\\x%.2X", struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1]);
				}
			}
		}
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
	}
}

static void function__jr_conversion__rton_to_json() {
	struct__workspace__jr_conversion.fileptr__rton = fopen(struct__function_parameter.jr_conversion__file_path__rton, "r");
	struct__workspace__jr_conversion.fileptr__json = fopen(struct__function_parameter.jr_conversion__file_path__json, "w");
	struct__workspace__jr_conversion.fileptr__string_cache = fopen(struct__function_parameter.jr_conversion__file_path__string_cache, "w+");
	struct__workspace__jr_conversion.fileptr__string_cache_wchar = fopen(struct__function_parameter.jr_conversion__file_path__string_cache_wchar, "w+");
	struct__workspace__jr_conversion.string_cache_sum = 0;
	struct__workspace__jr_conversion.string_cache_wchar_sum = 0;
	fseek(struct__workspace__jr_conversion.fileptr__rton, 0x0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__jr_conversion.fileptr__rton) == 1) {
			fseek(struct__workspace__jr_conversion.fileptr__rton, 0x0, 0);
			struct__workspace__jr_conversion.string_cache_offset = (unsigned int *)malloc(sizeof(unsigned int) * (struct__workspace__jr_conversion.string_cache_sum + 1));
			struct__workspace__jr_conversion.string_cache_sum = 0;
			struct__workspace__jr_conversion.string_cache_wchar_offset = (unsigned int *)malloc(sizeof(unsigned int) * (struct__workspace__jr_conversion.string_cache_wchar_sum + 1));
			struct__workspace__jr_conversion.string_cache_wchar_sum = 0;
			break;
		}
		struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__rton);
		if (struct__variable.unsigned_char__1 == 0x90) {
			struct__workspace__jr_conversion.string_cache_sum = struct__workspace__jr_conversion.string_cache_sum + 1;
		} else if (struct__variable.unsigned_char__1 == 0x92) {
			struct__workspace__jr_conversion.string_cache_wchar_sum = struct__workspace__jr_conversion.string_cache_wchar_sum + 1;
		}
	}
	fseek(struct__workspace__jr_conversion.fileptr__json, 0, 0);
	fseek(struct__workspace__jr_conversion.fileptr__string_cache, 0, 0);
	fseek(struct__workspace__jr_conversion.fileptr__string_cache_wchar, 0, 0);
	struct__workspace__jr_conversion.object_array__level = 0;
	fseek(struct__workspace__jr_conversion.fileptr__rton, 0x0, 0);
	fscanf(struct__workspace__jr_conversion.fileptr__rton, "RTON%*c%*c%*c%*c");
	function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
	fprintf(struct__workspace__jr_conversion.fileptr__json, "{");
	struct__workspace__jr_conversion.last_key_is_string_array[struct__workspace__jr_conversion.object_array__level] = struct__workspace__jr_conversion.last_key_is_string;
	struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
	struct__workspace__jr_conversion.key_or_value_current = 1;
	struct__workspace__jr_conversion.last_key_is_string = 0;
	for (;; ) {
		struct__workspace__jr_conversion.type_id = fgetc(struct__workspace__jr_conversion.fileptr__rton);
		if (struct__workspace__jr_conversion.type_id == 0xFFFFFFFF) {
			break;
		} else if ((struct__workspace__jr_conversion.type_id == 0x85) || (struct__workspace__jr_conversion.type_id == 0xFF) || (struct__workspace__jr_conversion.type_id == 0x86) || (struct__workspace__jr_conversion.type_id == 0xFE)) {
			if (struct__workspace__jr_conversion.type_id == 0x85) {
				if (struct__workspace__jr_conversion.last_key_is_string == 1) {
					struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
				}
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "{");
				struct__workspace__jr_conversion.last_key_is_string_array[struct__workspace__jr_conversion.object_array__level] = struct__workspace__jr_conversion.last_key_is_string;
				struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
			} else if (struct__workspace__jr_conversion.type_id == 0xFF) {
				struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "},");
				if (struct__workspace__jr_conversion.last_key_is_string_array[struct__workspace__jr_conversion.object_array__level] == 1) {
					struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
				}
				if (struct__workspace__jr_conversion.object_array__level == 0) {
					break;
				}
			} else if (struct__workspace__jr_conversion.type_id == 0x86) {
				if (struct__workspace__jr_conversion.last_key_is_string == 1) {
					struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
				}
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "[");
				struct__workspace__jr_conversion.last_key_is_string_array[struct__workspace__jr_conversion.object_array__level] = struct__workspace__jr_conversion.last_key_is_string;
				struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
				fseek(struct__workspace__jr_conversion.fileptr__rton, +1, 1);
				for (;; ) {
					if (fgetc(struct__workspace__jr_conversion.fileptr__rton) < 0x80) {
						break;
					}
				}
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__rton);
				if ((struct__variable.unsigned_char__1 != 0x85) && (struct__variable.unsigned_char__1 != 0x86) && (struct__variable.unsigned_char__1 != 0xFF)) {
					struct__workspace__jr_conversion.array_type_is_value = 1;
				}
				fseek(struct__workspace__jr_conversion.fileptr__rton, -1, 1);
			} else if (struct__workspace__jr_conversion.type_id == 0xFE) {
				struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "],");
				if (struct__workspace__jr_conversion.last_key_is_string_array[struct__workspace__jr_conversion.object_array__level] == 1) {
					struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
				}
				struct__workspace__jr_conversion.array_type_is_value = 0;
			}
			struct__workspace__jr_conversion.key_or_value_current = 1;
			struct__workspace__jr_conversion.last_key_is_string = 0;
		} else if ((struct__workspace__jr_conversion.type_id == 0x81) || (struct__workspace__jr_conversion.type_id == 0x82) || (struct__workspace__jr_conversion.type_id == 0x83) || (struct__workspace__jr_conversion.type_id == 0x90) || (struct__workspace__jr_conversion.type_id == 0x91) || (struct__workspace__jr_conversion.type_id == 0x92) || (struct__workspace__jr_conversion.type_id == 0x93)) {
			if ((struct__workspace__jr_conversion.key_or_value_current == 1) || (struct__workspace__jr_conversion.array_type_is_value == 1)) {
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
			}
			fprintf(struct__workspace__jr_conversion.fileptr__json, "\"");
			if (struct__workspace__jr_conversion.type_id == 0x81) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
				function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 0);
			} else if (struct__workspace__jr_conversion.type_id == 0x90) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
				function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 0);
				fseek(struct__workspace__jr_conversion.fileptr__string_cache, 0, 2);
				fprintf(struct__workspace__jr_conversion.fileptr__string_cache, "%.5d\t\"", struct__workspace__jr_conversion.string_cache_sum);
				*(struct__workspace__jr_conversion.string_cache_offset + struct__workspace__jr_conversion.string_cache_sum) = ftell(struct__workspace__jr_conversion.fileptr__string_cache);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__string_cache, 0);
				fprintf(struct__workspace__jr_conversion.fileptr__string_cache, "\"\n");
				struct__workspace__jr_conversion.string_cache_sum = struct__workspace__jr_conversion.string_cache_sum + 1;
			} else if (struct__workspace__jr_conversion.type_id == 0x91) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_cache_number = struct__workspace__jr_conversion.x24__value_unsigned;
				fseek(struct__workspace__jr_conversion.fileptr__string_cache, *(struct__workspace__jr_conversion.string_cache_offset + struct__workspace__jr_conversion.string_cache_number), 0);
				function__jr_conversion__get_text_string(struct__workspace__jr_conversion.fileptr__string_cache);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 0);
			} else if (struct__workspace__jr_conversion.type_id == 0x82) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
				function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 1);
			} else if (struct__workspace__jr_conversion.type_id == 0x92) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
				function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 1);
				fseek(struct__workspace__jr_conversion.fileptr__string_cache_wchar, 0, 2);
				fprintf(struct__workspace__jr_conversion.fileptr__string_cache_wchar, "%.5d\t\"", struct__workspace__jr_conversion.string_cache_wchar_sum);
				*(struct__workspace__jr_conversion.string_cache_wchar_offset + struct__workspace__jr_conversion.string_cache_wchar_sum) = ftell(struct__workspace__jr_conversion.fileptr__string_cache_wchar);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__string_cache_wchar, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__string_cache_wchar, "\"\n");
				struct__workspace__jr_conversion.string_cache_wchar_sum = struct__workspace__jr_conversion.string_cache_wchar_sum + 1;
			} else if (struct__workspace__jr_conversion.type_id == 0x93) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				struct__workspace__jr_conversion.string_cache_wchar_number = struct__workspace__jr_conversion.x24__value_unsigned;
				fseek(struct__workspace__jr_conversion.fileptr__string_cache_wchar, *(struct__workspace__jr_conversion.string_cache_wchar_offset + struct__workspace__jr_conversion.string_cache_wchar_number), 0);
				function__jr_conversion__get_text_string(struct__workspace__jr_conversion.fileptr__string_cache_wchar);
				function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 1);
			} else if (struct__workspace__jr_conversion.type_id == 0x83) {
				struct__workspace__jr_conversion.type_id = fgetc(struct__workspace__jr_conversion.fileptr__rton);
				if (struct__workspace__jr_conversion.type_id == 0x03) {
					struct__keep_value.unsigned_int = ftell(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					fseek(struct__workspace__jr_conversion.fileptr__rton, struct__workspace__jr_conversion.x24__value_unsigned, 1);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
					function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
					fprintf(struct__workspace__jr_conversion.fileptr__json, "RTID(");
					function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 1);
					fprintf(struct__workspace__jr_conversion.fileptr__json, "@");
					fseek(struct__workspace__jr_conversion.fileptr__rton, struct__keep_value.unsigned_int, 0);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					struct__workspace__jr_conversion.string_length = struct__workspace__jr_conversion.x24__value_unsigned;
					function__jr_conversion__get_stream_string(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__json, 1);
					fprintf(struct__workspace__jr_conversion.fileptr__json, ")");
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
					fseek(struct__workspace__jr_conversion.fileptr__rton, struct__workspace__jr_conversion.x24__value_unsigned, 1);
				}
			}
			fprintf(struct__workspace__jr_conversion.fileptr__json, "\"");
			if (struct__workspace__jr_conversion.array_type_is_value == 1) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, ",");
			} else {
				struct__workspace__jr_conversion.last_key_is_string = 1;
				if (struct__workspace__jr_conversion.key_or_value_current == 1) {
					struct__workspace__jr_conversion.key_or_value_current = 2;
					fprintf(struct__workspace__jr_conversion.fileptr__json, " : ");
				} else if (struct__workspace__jr_conversion.key_or_value_current == 2) {
					struct__workspace__jr_conversion.key_or_value_current = 1;
					fprintf(struct__workspace__jr_conversion.fileptr__json, ",");
				}
			}
		} else if ((struct__workspace__jr_conversion.key_or_value_current == 2) || (struct__workspace__jr_conversion.array_type_is_value == 1)) {
			if (struct__workspace__jr_conversion.array_type_is_value == 1) {
				function__put_tab(struct__workspace__jr_conversion.fileptr__json, struct__workspace__jr_conversion.object_array__level);
			}
			if (struct__workspace__jr_conversion.type_id == 0x84) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, "null");
			} else if (struct__workspace__jr_conversion.type_id == 0x00) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, "false");
			} else if (struct__workspace__jr_conversion.type_id == 0x01) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, "true");
			} else if ((struct__workspace__jr_conversion.type_id == 0x24) || (struct__workspace__jr_conversion.type_id == 0x44) || (struct__workspace__jr_conversion.type_id == 0x28)) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%u", struct__workspace__jr_conversion.x24__value_unsigned);
			} else if ((struct__workspace__jr_conversion.type_id == 0x25) || (struct__workspace__jr_conversion.type_id == 0x45)) {
				function__jr_conversion__get_x24(struct__workspace__jr_conversion.fileptr__rton);
				if ((struct__workspace__jr_conversion.x24__value_unsigned % 2) == 0) {
					struct__workspace__jr_conversion.x24__value_signed = struct__workspace__jr_conversion.x24__value_unsigned / 2;
				} else {
					struct__workspace__jr_conversion.x24__value_signed = -((struct__workspace__jr_conversion.x24__value_unsigned + 1) / 2);
				}
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+d", struct__workspace__jr_conversion.x24__value_signed);
			} else if ((struct__workspace__jr_conversion.type_id == 0x23) || (struct__workspace__jr_conversion.type_id == 0x41)) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, "0.0");
			} else if (struct__workspace__jr_conversion.type_id == 0x22) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 4);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+f", union__value.signed_float);
			} else if (struct__workspace__jr_conversion.type_id == 0x42) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 8);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+lf", union__value.signed_double);
			} else if ((struct__workspace__jr_conversion.type_id == 0x09) || (struct__workspace__jr_conversion.type_id == 0x0B) || (struct__workspace__jr_conversion.type_id == 0x11) || (struct__workspace__jr_conversion.type_id == 0x13) || (struct__workspace__jr_conversion.type_id == 0x21) || (struct__workspace__jr_conversion.type_id == 0x27)) {
				fprintf(struct__workspace__jr_conversion.fileptr__json, "0");
			} else if (struct__workspace__jr_conversion.type_id == 0x08) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+d", union__value.signed_char);
			} else if (struct__workspace__jr_conversion.type_id == 0x0A) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%u", union__value.unsigned_char);
			} else if (struct__workspace__jr_conversion.type_id == 0x10) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 2);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+d", union__value.signed_short);
			} else if (struct__workspace__jr_conversion.type_id == 0x12) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 2);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%u", union__value.unsigned_short);
			} else if (struct__workspace__jr_conversion.type_id == 0x20) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 4);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%+d", union__value.signed_int);
			} else if (struct__workspace__jr_conversion.type_id == 0x26) {
				function__get_value(struct__workspace__jr_conversion.fileptr__rton, 4);
				fprintf(struct__workspace__jr_conversion.fileptr__json, "%u", union__value.unsigned_int);
			}
			fprintf(struct__workspace__jr_conversion.fileptr__json, ",");
			struct__workspace__jr_conversion.key_or_value_current = 1;
			struct__workspace__jr_conversion.last_key_is_string = 0;
		}
	}
	free(struct__workspace__jr_conversion.string_cache_offset);
	struct__workspace__jr_conversion.string_cache_offset = NULL;
	free(struct__workspace__jr_conversion.string_cache_wchar_offset);
	struct__workspace__jr_conversion.string_cache_wchar_offset = NULL;
	function__file_close(struct__workspace__jr_conversion.fileptr__rton);
	function__file_close(struct__workspace__jr_conversion.fileptr__json);
	function__file_close(struct__workspace__jr_conversion.fileptr__string_cache);
	function__file_close(struct__workspace__jr_conversion.fileptr__string_cache_wchar);
}

static void function__jr_conversion__json_to_rton() {
	struct__workspace__jr_conversion.fileptr__json = fopen(struct__function_parameter.jr_conversion__file_path__json, "r");
	struct__workspace__jr_conversion.fileptr__rton = fopen(struct__function_parameter.jr_conversion__file_path__rton, "w");
	struct__workspace__jr_conversion.fileptr__string_cache = fopen(struct__function_parameter.jr_conversion__file_path__string_cache, "w+");
	struct__workspace__jr_conversion.string_cache_sum = 0;
	fseek(struct__workspace__jr_conversion.fileptr__json, 0, 0);
	if (struct__function_parameter.jr_conversion__is_string_all_cache == 1) {
		for (;; ) {
			if (function__file_is_end(struct__workspace__jr_conversion.fileptr__json) == 1) {
				fseek(struct__workspace__jr_conversion.fileptr__json, 0, 0);
				struct__workspace__jr_conversion.string_cache_sum = (struct__workspace__jr_conversion.string_cache_sum / 2) + 1;
				struct__workspace__jr_conversion.string_cache_offset = (unsigned int *)malloc(sizeof(unsigned int) * struct__workspace__jr_conversion.string_cache_sum);
				struct__workspace__jr_conversion.string_cache_length = (unsigned short *)malloc(sizeof(unsigned short) * struct__workspace__jr_conversion.string_cache_sum);
				struct__workspace__jr_conversion.string_cache_sum = 0;
				break;
			}
			if (fgetc(struct__workspace__jr_conversion.fileptr__json) == '\"') {
				struct__workspace__jr_conversion.string_cache_sum = struct__workspace__jr_conversion.string_cache_sum + 1;
			}
		}
	}
	fseek(struct__workspace__jr_conversion.fileptr__rton, 0x0, 0);
	fseek(struct__workspace__jr_conversion.fileptr__string_cache, 0, 0);
	struct__workspace__jr_conversion.object_array__level = 0;
	for (;; ) {
		if (fgetc(struct__workspace__jr_conversion.fileptr__json) == '{') {
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "RTON");
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c%c%c%c", 0x01, 0x00, 0x00, 0x00);
			struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
			break;
		}
	}
	for (;; ) {
		struct__workspace__jr_conversion.type_id = fgetc(struct__workspace__jr_conversion.fileptr__json);
		if (struct__workspace__jr_conversion.type_id == 0xFFFFFFFF) {
			break;
		} else if (struct__workspace__jr_conversion.type_id == '/') {
			struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
			if (struct__variable.unsigned_char__1 == '/') {
				for (;; ) {
					if (fgetc(struct__workspace__jr_conversion.fileptr__json) == '\n') {
						break;
					}
				}
			} else if (struct__variable.unsigned_char__1 == '*') {
				for (;; ) {
					if (fgetc(struct__workspace__jr_conversion.fileptr__json) == '*') {
						if (fgetc(struct__workspace__jr_conversion.fileptr__json) == '/') {
							break;
						} else {
							fseek(struct__workspace__jr_conversion.fileptr__json, -1, 1);
						}
					}
				}
			}
			struct__workspace__jr_conversion.type_id = fgetc(struct__workspace__jr_conversion.fileptr__json);
		}
		if ((struct__workspace__jr_conversion.type_id == '\t') || (struct__workspace__jr_conversion.type_id == '\n') || (struct__workspace__jr_conversion.type_id == '\r') || (struct__workspace__jr_conversion.type_id == ' ') || (struct__workspace__jr_conversion.type_id == ':') || (struct__workspace__jr_conversion.type_id == ',')) {
		} else if (struct__workspace__jr_conversion.type_id == '{') {
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x85);
			struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
		} else if (struct__workspace__jr_conversion.type_id == '}') {
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0xFF);
			struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
			if (struct__workspace__jr_conversion.object_array__level == 0) {
				fprintf(struct__workspace__jr_conversion.fileptr__rton, "DONE");
				break;
			}
		} else if (struct__workspace__jr_conversion.type_id == '[') {
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c%c", 0x86, 0xFD);
			struct__keep_value.unsigned_int = ftell(struct__workspace__jr_conversion.fileptr__json);
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
				if ((struct__variable.unsigned_char__1 == '[') || (struct__variable.unsigned_char__1 == '{') || (struct__variable.unsigned_char__1 == ']') || (struct__variable.unsigned_char__1 == '\"') || (struct__variable.unsigned_char__1 == '+') || (struct__variable.unsigned_char__1 == '-') || ((struct__variable.unsigned_char__1 >= '0') && (struct__variable.unsigned_char__1 <= '9'))) {
					struct__workspace__jr_conversion.object_array__level_current = 0;
					struct__workspace__jr_conversion.array_element_sum = 0;
					fseek(struct__workspace__jr_conversion.fileptr__json, -1, 1);
					if (struct__variable.unsigned_char__1 == '{') {
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
							if (struct__variable.unsigned_char__1 == '\"') {
								for (;; ) {
									struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
									if (struct__variable.unsigned_char__1 == '\"') {
										break;
									} else if (struct__variable.unsigned_char__1 == '\\') {
										if (fgetc(struct__workspace__jr_conversion.fileptr__json) == 'x') {
											fseek(struct__workspace__jr_conversion.fileptr__json, +2, 1);
										}
									}
								}
							} else {
								if (struct__variable.unsigned_char__1 == '{') {
									struct__workspace__jr_conversion.object_array__level_current = struct__workspace__jr_conversion.object_array__level_current + 1;
								} else if (struct__variable.unsigned_char__1 == '}') {
									struct__workspace__jr_conversion.object_array__level_current = struct__workspace__jr_conversion.object_array__level_current - 1;
									if (struct__workspace__jr_conversion.object_array__level_current == 0) {
										struct__workspace__jr_conversion.array_element_sum = struct__workspace__jr_conversion.array_element_sum + 1;
									}
								} else if ((struct__variable.unsigned_char__1 == ']') && (struct__workspace__jr_conversion.object_array__level_current == 0)) {
									break;
								}
							}
						}
					} else if ((struct__variable.unsigned_char__1 == '[') || (struct__variable.unsigned_char__1 == ']')) {
						struct__workspace__jr_conversion.object_array__level_current = 1;
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
							if (struct__variable.unsigned_char__1 == '\"') {
								for (;; ) {
									struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
									if (struct__variable.unsigned_char__1 == '\"') {
										break;
									} else if (struct__variable.unsigned_char__1 == '\\') {
										if (fgetc(struct__workspace__jr_conversion.fileptr__json) == 'x') {
											fseek(struct__workspace__jr_conversion.fileptr__json, +2, 1);
										}
									}
								}
							} else {
								if (struct__variable.unsigned_char__1 == '[') {
									struct__workspace__jr_conversion.object_array__level_current = struct__workspace__jr_conversion.object_array__level_current + 1;
								} else if (struct__variable.unsigned_char__1 == ']') {
									struct__workspace__jr_conversion.object_array__level_current = struct__workspace__jr_conversion.object_array__level_current - 1;
									if (struct__workspace__jr_conversion.object_array__level_current == 1) {
										struct__workspace__jr_conversion.array_element_sum = struct__workspace__jr_conversion.array_element_sum + 1;
									} else if (struct__workspace__jr_conversion.object_array__level_current == 0) {
										break;
									}
								}
							}
						}
					} else if ((struct__variable.unsigned_char__1 == '+') || (struct__variable.unsigned_char__1 == '-') || ((struct__variable.unsigned_char__1 >= '0') && (struct__variable.unsigned_char__1 <= '9'))) {
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
							if (struct__variable.unsigned_char__1 == ']') {
								break;
							} else if ((struct__variable.unsigned_char__1 == '+') || (struct__variable.unsigned_char__1 == '-') || ((struct__variable.unsigned_char__1 >= '0') && (struct__variable.unsigned_char__1 <= '9'))) {
								for (;; ) {
									struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
									if ((struct__variable.unsigned_char__1 != '.') && (struct__variable.unsigned_char__1 != 'E') && ((struct__variable.unsigned_char__1 < '0') || (struct__variable.unsigned_char__1 > '9'))) {
										fseek(struct__workspace__jr_conversion.fileptr__json, -1, 1);
										struct__workspace__jr_conversion.array_element_sum = struct__workspace__jr_conversion.array_element_sum + 1;
										break;
									}
								}
							}
						}
					} else if (struct__variable.unsigned_char__1 == '\"') {
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
							if (struct__variable.unsigned_char__1 == ']') {
								break;
							} else if (struct__variable.unsigned_char__1 == '\"') {
								for (;; ) {
									struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
									if (struct__variable.unsigned_char__1 == '\"') {
										struct__workspace__jr_conversion.array_element_sum = struct__workspace__jr_conversion.array_element_sum + 1;
										break;
									} else if (struct__variable.unsigned_char__1 == '\\') {
										if (fgetc(struct__workspace__jr_conversion.fileptr__json) == 'x') {
											fseek(struct__workspace__jr_conversion.fileptr__json, +2, 1);
										}
									}
								}
							}
						}
					}
					break;
				}
			}
			fseek(struct__workspace__jr_conversion.fileptr__json, struct__keep_value.unsigned_int, 0);
			struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.array_element_sum;
			function__jr_conversion__put_x24(struct__workspace__jr_conversion.fileptr__rton);
			struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level + 1;
		} else if (struct__workspace__jr_conversion.type_id == ']') {
			fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0xFE);
			struct__workspace__jr_conversion.object_array__level = struct__workspace__jr_conversion.object_array__level - 1;
		} else if (struct__workspace__jr_conversion.type_id == '\"') {
			function__jr_conversion__get_text_string(struct__workspace__jr_conversion.fileptr__json);
			struct__workspace__jr_conversion.string_cache_number = 0;
			for (;; ) {
				if (struct__workspace__jr_conversion.string_cache_number >= struct__workspace__jr_conversion.string_cache_sum) {
					if (struct__workspace__jr_conversion.string_cache_number == struct__workspace__jr_conversion.string_cache_sum) {
						if (struct__function_parameter.jr_conversion__is_string_all_cache == 1) {
							fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x90);
							struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.string_length;
							function__jr_conversion__put_x24(struct__workspace__jr_conversion.fileptr__rton);
							function__jr_conversion__put_stream_string(struct__workspace__jr_conversion.fileptr__rton);
							fseek(struct__workspace__jr_conversion.fileptr__string_cache, 0, 2);
							fprintf(struct__workspace__jr_conversion.fileptr__string_cache, "%.5d\t\"", struct__workspace__jr_conversion.string_cache_sum);
							*(struct__workspace__jr_conversion.string_cache_length + struct__workspace__jr_conversion.string_cache_sum) = struct__workspace__jr_conversion.string_length;
							*(struct__workspace__jr_conversion.string_cache_offset + struct__workspace__jr_conversion.string_cache_sum) = ftell(struct__workspace__jr_conversion.fileptr__string_cache);
							function__jr_conversion__put_text_string(struct__workspace__jr_conversion.fileptr__string_cache, 0);
							fprintf(struct__workspace__jr_conversion.fileptr__string_cache, "\"\n");
							struct__workspace__jr_conversion.string_cache_sum = struct__workspace__jr_conversion.string_cache_sum + 1;
						} else {
							fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x81);
							struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.string_length;
							function__jr_conversion__put_x24(struct__workspace__jr_conversion.fileptr__rton);
							function__jr_conversion__put_stream_string(struct__workspace__jr_conversion.fileptr__rton);
						}
					}
					break;
				}
				if (struct__workspace__jr_conversion.string_length == *(struct__workspace__jr_conversion.string_cache_length + struct__workspace__jr_conversion.string_cache_number)) {
					fseek(struct__workspace__jr_conversion.fileptr__string_cache, *(struct__workspace__jr_conversion.string_cache_offset + struct__workspace__jr_conversion.string_cache_number), 0);
					struct__variable.unsigned_short__1 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__1 == struct__workspace__jr_conversion.string_length) {
							fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x91);
							struct__workspace__jr_conversion.x24__value_unsigned = struct__workspace__jr_conversion.string_cache_number;
							function__jr_conversion__put_x24(struct__workspace__jr_conversion.fileptr__rton);
							struct__workspace__jr_conversion.string_cache_number = struct__workspace__jr_conversion.string_cache_sum;
							break;
						}
						struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__string_cache);
						if (struct__variable.unsigned_char__1 == '\\') {
							struct__keep_value.unsigned_short = struct__variable.unsigned_short__1;
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__string_cache);
							if (struct__variable.unsigned_char__1 == 'x') {
								fscanf(struct__workspace__jr_conversion.fileptr__string_cache, "%2X", &struct__variable.unsigned_char__1);
							} else if (struct__variable.unsigned_char__1 == '0') {
								struct__variable.unsigned_char__1 = '\0';
							} else if (struct__variable.unsigned_char__1 == 'a') {
								struct__variable.unsigned_char__1 = '\a';
							} else if (struct__variable.unsigned_char__1 == 'b') {
								struct__variable.unsigned_char__1 = '\b';
							} else if (struct__variable.unsigned_char__1 == 't') {
								struct__variable.unsigned_char__1 = '\t';
							} else if (struct__variable.unsigned_char__1 == 'n') {
								struct__variable.unsigned_char__1 = '\n';
							} else if (struct__variable.unsigned_char__1 == 'v') {
								struct__variable.unsigned_char__1 = '\v';
							} else if (struct__variable.unsigned_char__1 == 'f') {
								struct__variable.unsigned_char__1 = '\f';
							} else if (struct__variable.unsigned_char__1 == 'r') {
								struct__variable.unsigned_char__1 = '\r';
							} else if (struct__variable.unsigned_char__1 == 'e') {
								struct__variable.unsigned_char__1 = '\e';
							} else if (struct__variable.unsigned_char__1 == '\"') {
								struct__variable.unsigned_char__1 = '\"';
							} else if (struct__variable.unsigned_char__1 == '\\') {
								struct__variable.unsigned_char__1 = '\\';
							}
							struct__variable.unsigned_short__1 = struct__keep_value.unsigned_short;
						}
						if (struct__variable.unsigned_char__1 != struct__workspace__jr_conversion.string[struct__variable.unsigned_short__1]) {
							break;
						}
						struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
					}
				}
				struct__workspace__jr_conversion.string_cache_number = struct__workspace__jr_conversion.string_cache_number + 1;
			}
		} else if ((struct__workspace__jr_conversion.type_id == '+') || (struct__workspace__jr_conversion.type_id == '-') || ((struct__workspace__jr_conversion.type_id >= '0') && (struct__workspace__jr_conversion.type_id <= '9'))) {
			struct__workspace__jr_conversion.value_is_float = 0;
			struct__workspace__jr_conversion.value_is_pow = 0;
			if ((struct__workspace__jr_conversion.type_id == '+') || (struct__workspace__jr_conversion.type_id == '-')) {
				struct__workspace__jr_conversion.value_is_signed = 1;
				struct__keep_value.unsigned_int = ftell(struct__workspace__jr_conversion.fileptr__json) - 1;
			} else {
				struct__workspace__jr_conversion.value_is_signed = 0;
				fseek(struct__workspace__jr_conversion.fileptr__json, -1, 1);
				struct__keep_value.unsigned_int = ftell(struct__workspace__jr_conversion.fileptr__json);
			}
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__jr_conversion.fileptr__json);
				if ((struct__variable.unsigned_char__1 != '.') && (struct__variable.unsigned_char__1 != 'E') && ((struct__variable.unsigned_char__1 < '0') || (struct__variable.unsigned_char__1 > '9'))) {
					fseek(struct__workspace__jr_conversion.fileptr__json, struct__keep_value.unsigned_int, 0);
					if ((struct__workspace__jr_conversion.value_is_float == 0) && (struct__workspace__jr_conversion.value_is_pow == 0)) {
						if (struct__workspace__jr_conversion.value_is_signed == 0) {
							fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x26);
							fscanf(struct__workspace__jr_conversion.fileptr__json, "%u", &union__value.unsigned_int);
						} else if (struct__workspace__jr_conversion.value_is_signed == 1) {
							fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x20);
							fscanf(struct__workspace__jr_conversion.fileptr__json, "%d", &union__value.signed_int);
						}
						function__put_value(struct__workspace__jr_conversion.fileptr__rton, 4);
					} else if ((struct__workspace__jr_conversion.value_is_float == 1) || (struct__workspace__jr_conversion.value_is_pow == 1)) {
						if (struct__workspace__jr_conversion.value_is_pow == 0) {
							fscanf(struct__workspace__jr_conversion.fileptr__json, "%lf", &union__value.signed_double);
						} else if (struct__workspace__jr_conversion.value_is_pow == 1) {
							fscanf(struct__workspace__jr_conversion.fileptr__json, "%E", &union__value.signed_double);
						}
						fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x42);
						function__put_value(struct__workspace__jr_conversion.fileptr__rton, 8);
					}
					break;
				} else if (struct__variable.unsigned_char__1 == 'E') {
					struct__workspace__jr_conversion.value_is_pow = 1;
				} else if (struct__variable.unsigned_char__1 == '.') {
					struct__workspace__jr_conversion.value_is_float = 1;
				}
			}
		} else if ((struct__workspace__jr_conversion.type_id == 'n') || (struct__workspace__jr_conversion.type_id == 't') || (struct__workspace__jr_conversion.type_id == 'f')) {
			if (struct__workspace__jr_conversion.type_id == 'n') {
				fseek(struct__workspace__jr_conversion.fileptr__json, +3, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x84);
			} else if (struct__workspace__jr_conversion.type_id == 't') {
				fseek(struct__workspace__jr_conversion.fileptr__json, +3, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x01);
			} else if (struct__workspace__jr_conversion.type_id == 'f') {
				fseek(struct__workspace__jr_conversion.fileptr__json, +4, 1);
				fprintf(struct__workspace__jr_conversion.fileptr__rton, "%c", 0x00);
			}
		}
	}
	free(struct__workspace__jr_conversion.string_cache_length);
	struct__workspace__jr_conversion.string_cache_length = NULL;
	free(struct__workspace__jr_conversion.string_cache_offset);
	struct__workspace__jr_conversion.string_cache_offset = NULL;
	function__file_close(struct__workspace__jr_conversion.fileptr__json);
	function__file_close(struct__workspace__jr_conversion.fileptr__rton);
	function__file_close(struct__workspace__jr_conversion.fileptr__string_cache);
}

// jr_conversion functions end

// bpsr_upck functions start

static void function__bpsr_upck__string_sort() {
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 > struct__workspace__bpsr_upck.text__string_sum) {
			break;
		}
		struct__workspace__bpsr_upck.text__string_sort__is_ok[struct__variable.unsigned_int__1] = 0;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__string_number = 0;
	for (;; ) {
		if (struct__workspace__bpsr_upck.text__string_number == struct__workspace__bpsr_upck.text__string_sum) {
			break;
		}
		struct__variable.unsigned_int__1 = 0;
		for (;; ) {
			if (struct__workspace__bpsr_upck.text__string_sort__is_ok[struct__variable.unsigned_int__1] == 0) {
				struct__workspace__bpsr_upck.text__string_sort__number[struct__workspace__bpsr_upck.text__string_number] = struct__variable.unsigned_int__1;
				break;
			}
			struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
		}
		struct__variable.unsigned_int__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__string_sum) {
				struct__workspace__bpsr_upck.text__string_sort__is_ok[struct__workspace__bpsr_upck.text__string_sort__number[struct__workspace__bpsr_upck.text__string_number]] = 1;
				break;
			}
			if (struct__workspace__bpsr_upck.text__string_sort__is_ok[struct__variable.unsigned_int__1] == 0) {
				if (strcmp(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sort__number[struct__workspace__bpsr_upck.text__string_number]], struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]) > 0) {
					struct__workspace__bpsr_upck.text__string_sort__number[struct__workspace__bpsr_upck.text__string_number] = struct__variable.unsigned_int__1;
				}
			}
			struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
		}
		struct__workspace__bpsr_upck.text__string_number = struct__workspace__bpsr_upck.text__string_number + 1;
	}
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__string_sum) {
			break;
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
}

static void function__bpsr_upck__text_uncompress(FILE * fileptr__uncompress_from) {
	struct__workspace__bpsr_upck.fileptr__text__temp = fopen("/storage/emulated/0/android/obb/pvztool/__temps/__bpsr_upck__text_uncompressed__temp", "w+");
	fprintf(struct__workspace__bpsr_upck.fileptr__text__temp, " text_uncompress temp \n");
	struct__workspace__bpsr_upck.text__string_link_offset = (unsigned int *)malloc(sizeof(unsigned int) * struct__workspace__bpsr_upck.text__size);
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__size) {
			break;
		}
		*(struct__workspace__bpsr_upck.text__string_link_offset + struct__variable.unsigned_int__1) = 0x0;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__size_current = 0;
	struct__workspace__bpsr_upck.text__string_number = 0;
	fseek(fileptr__uncompress_from, struct__workspace__bpsr_upck.text__offset, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.text__size_current == struct__workspace__bpsr_upck.text__size) {
			free(struct__workspace__bpsr_upck.text__string_link_offset);
			struct__workspace__bpsr_upck.text__string_link_offset = NULL;
			function__file_close(struct__workspace__bpsr_upck.fileptr__text__temp);
			break;
		}
		function__string_empty(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_number], 256);
		struct__workspace__bpsr_upck.text__list__number[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.text__string_number] = 0x0;
		struct__workspace__bpsr_upck.text__string_character_number = 0;
		if (*(struct__workspace__bpsr_upck.text__string_link_offset + struct__workspace__bpsr_upck.text__size_current) != 0) {
			fseek(struct__workspace__bpsr_upck.fileptr__text__temp, *(struct__workspace__bpsr_upck.text__string_link_offset + struct__workspace__bpsr_upck.text__size_current), 0);
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__bpsr_upck.fileptr__text__temp);
				if (struct__variable.unsigned_char__1 == '\n') {
					break;
				}
				struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_number][struct__workspace__bpsr_upck.text__string_character_number] = struct__variable.unsigned_char__1;
				struct__workspace__bpsr_upck.text__string_character_number = struct__workspace__bpsr_upck.text__string_character_number + 1;
			}
		}
		for (;; ) {
			struct__variable.unsigned_char__1 = fgetc(fileptr__uncompress_from);
			function__get_value(fileptr__uncompress_from, 3);
			struct__workspace__bpsr_upck.text__size_current = struct__workspace__bpsr_upck.text__size_current + 0x4;
			if (union__value.unsigned_int != 0) {
				fseek(struct__workspace__bpsr_upck.fileptr__text__temp, 0, 2);
				*(struct__workspace__bpsr_upck.text__string_link_offset + (union__value.unsigned_int * 4)) = ftell(struct__workspace__bpsr_upck.fileptr__text__temp);
				fprintf(struct__workspace__bpsr_upck.fileptr__text__temp, "%s\n", struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_number]);
			}
			struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_number][struct__workspace__bpsr_upck.text__string_character_number] = struct__variable.unsigned_char__1;
			struct__workspace__bpsr_upck.text__string_character_number = struct__workspace__bpsr_upck.text__string_character_number + 1;
			if (struct__variable.unsigned_char__1 == '\0') {
				if (struct__workspace__bpsr_upck.text__type == 1) {
					function__get_value(fileptr__uncompress_from, 4);
					struct__workspace__bpsr_upck.text__list__number[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
					struct__workspace__bpsr_upck.text__size_current = struct__workspace__bpsr_upck.text__size_current + 0x4;
				} else if (struct__workspace__bpsr_upck.text__type == 2) {
					function__get_value(fileptr__uncompress_from, 4);
					struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
					function__get_value(fileptr__uncompress_from, 4);
					struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
					function__get_value(fileptr__uncompress_from, 4);
					struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
					struct__workspace__bpsr_upck.text__size_current = struct__workspace__bpsr_upck.text__size_current + 0xC;
					if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_number] == 0x1) {
						function__get_value(fileptr__uncompress_from, 4);
						struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
						fseek(fileptr__uncompress_from, 0x8, 1);
						function__get_value(fileptr__uncompress_from, 4);
						struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
						function__get_value(fileptr__uncompress_from, 4);
						struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.text__string_number] = union__value.unsigned_int;
						struct__workspace__bpsr_upck.text__size_current = struct__workspace__bpsr_upck.text__size_current + 0x14;
					}
				}
				struct__workspace__bpsr_upck.text__string_number = struct__workspace__bpsr_upck.text__string_number + 1;
				break;
			}
		}
	}
}

static void function__bpsr_upck__text_compress(FILE * fileptr__compress_to) {
	unsigned int item_1 = 0, item_2;
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 > struct__workspace__bpsr_upck.text__string_sum) {
			break;
		}
		struct__workspace__bpsr_upck.text__string_be_link[struct__variable.unsigned_int__1] = -1;
		struct__workspace__bpsr_upck.text__string_be_link__offset[struct__variable.unsigned_int__1] = 0x0;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__size = 0x0;
	fseek(fileptr__compress_to, struct__workspace__bpsr_upck.text__offset, 0);
	for (;; ) {
		if (item_1 == struct__workspace__bpsr_upck.text__string_sum) {
			function__put_null(fileptr__compress_to, function__return_fullsize(ftell(fileptr__compress_to)) - ftell(fileptr__compress_to));
			break;
		}
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == 256) {
				break;
			}
			struct__workspace__bpsr_upck.text__string_be_link__character_number[struct__variable.unsigned_short__1] = 0;
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		item_2 = item_1;
		for (;; ) {
			item_2 = item_2 + 1;
			if (item_2 == struct__workspace__bpsr_upck.text__string_sum) {
				struct__workspace__bpsr_upck.text__string_character_number = 0;
				if (struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_1]] > -1) {
					struct__keep_value.unsigned_int = ftell(fileptr__compress_to);
					fseek(fileptr__compress_to, struct__workspace__bpsr_upck.text__offset + struct__workspace__bpsr_upck.text__string_be_link__offset[struct__workspace__bpsr_upck.text__string_sort__number[item_1]], 0);
					union__value.unsigned_int = struct__workspace__bpsr_upck.text__size / 0x4;
					function__put_value(fileptr__compress_to, 0x3);
					fseek(fileptr__compress_to, struct__keep_value.unsigned_int, 0);
					struct__workspace__bpsr_upck.text__string_character_number = struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
				}
				for (;; ) {
					if (struct__workspace__bpsr_upck.text__string_character_number > strlen(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sort__number[item_1]])) {
						if (struct__workspace__bpsr_upck.text__type == 1) {
							union__value.unsigned_int = struct__workspace__bpsr_upck.text__list__number[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
							function__put_value(fileptr__compress_to, 0x4);
							struct__workspace__bpsr_upck.text__size = struct__workspace__bpsr_upck.text__size + 0x4;
						} else if (struct__workspace__bpsr_upck.text__type == 2) {
							union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
							function__put_value(fileptr__compress_to, 0x4);
							union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
							function__put_value(fileptr__compress_to, 0x4);
							union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
							function__put_value(fileptr__compress_to, 0x4);
							struct__workspace__bpsr_upck.text__size = struct__workspace__bpsr_upck.text__size + 0xC;
							if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sort__number[item_1]] == 0x1) {
								union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
								function__put_value(fileptr__compress_to, 0x4);
								function__put_null(fileptr__compress_to, 0x8);
								union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
								function__put_value(fileptr__compress_to, 0x4);
								union__value.unsigned_int = struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.text__string_sort__number[item_1]];
								function__put_value(fileptr__compress_to, 0x4);
								struct__workspace__bpsr_upck.text__size = struct__workspace__bpsr_upck.text__size + 0x14;
							}
						}
						break;
					}
					union__value.unsigned_char = struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sort__number[item_1]][struct__workspace__bpsr_upck.text__string_character_number];
					function__put_value(fileptr__compress_to, 0x1);
					function__put_null(fileptr__compress_to, 0x3);
					struct__workspace__bpsr_upck.text__size = struct__workspace__bpsr_upck.text__size + 0x4;
					struct__workspace__bpsr_upck.text__string_character_number = struct__workspace__bpsr_upck.text__string_character_number + 1;
				}
				item_1 = item_1 + 1;
				break;
			}
			struct__variable.signed_short__1 = 0;
			for (;; ) {
				if (struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sort__number[item_2]][struct__variable.signed_short__1] != struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sort__number[item_1]][struct__variable.signed_short__1]) {
					if (struct__variable.signed_short__1 >= struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_1]]) {
						struct__variable.unsigned_short__1 = 0;
						for (;; ) {
							if (struct__variable.unsigned_short__1 > struct__variable.signed_short__1) {
								struct__workspace__bpsr_upck.text__string_be_link__character_number[struct__variable.signed_short__1] = 1;
								struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_2]] = struct__variable.signed_short__1;
								struct__workspace__bpsr_upck.text__string_be_link__offset[struct__workspace__bpsr_upck.text__string_sort__number[item_2]] = struct__workspace__bpsr_upck.text__size + (0x4 * struct__variable.signed_short__1) + 0x1;
								if (struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_1]] > -1) {
									struct__workspace__bpsr_upck.text__string_be_link__offset[struct__workspace__bpsr_upck.text__string_sort__number[item_2]] = struct__workspace__bpsr_upck.text__string_be_link__offset[struct__workspace__bpsr_upck.text__string_sort__number[item_2]] - ((struct__workspace__bpsr_upck.text__string_be_link[struct__workspace__bpsr_upck.text__string_sort__number[item_1]] * 0x4));
								}
								break;
							} else if (struct__workspace__bpsr_upck.text__string_be_link__character_number[struct__variable.unsigned_short__1] == 1) {
								break;
							}
							struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
						}
					}
					break;
				}
				struct__variable.signed_short__1 = struct__variable.signed_short__1 + 1;
			}
		}
	}
}

static void function__bpsr_upck__pgsr_unpack() {
	function__string_empty(struct__workspace__bpsr_upck.oripath__pgsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__pgsr, sizeof(struct__workspace__bpsr_upck.oripath__pgsr));
	struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__function_parameter.bpsr_upck__file_path__pgsr, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.bpsr_upck__file_path__pgsr);
	strcat(struct__variable.char_string__1, "__pgsr_unpack");
	mkdir(struct__variable.char_string__1);
	chdir(struct__variable.char_string__1);
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list = fopen("subfile_list", "w");
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0 = fopen("/storage/emulated/0/android/obb/pvztool/__temps/__pgsr__subfile_pack_0", "w+");
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1 = fopen("/storage/emulated/0/android/obb/pvztool/__temps/__pgsr__subfile_pack_1", "w+");
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
	fread(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
	if (struct__pgsr_header.subfile_pack__compress_type == 0x0) {
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size);
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size);
	} else if (struct__pgsr_header.subfile_pack__compress_type == 0x1) {
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size);
		function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size, struct__pgsr_header.subfile_pack_1__size_source);
	} else if (struct__pgsr_header.subfile_pack__compress_type == 0x3) {
		function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size, struct__pgsr_header.subfile_pack_0__size_source);
		function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size, struct__pgsr_header.subfile_pack_1__size_source);
	}
	mkdir("subfile_pack");
	chdir("subfile_pack");
	struct__workspace__bpsr_upck.text__offset = struct__pgsr_header.subfile_info__offset;
	struct__workspace__bpsr_upck.text__size = struct__pgsr_header.subfile_info__size;
	struct__workspace__bpsr_upck.text__type = 2;
	function__bpsr_upck__text_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr);
	struct__variable.unsigned_int__1 = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 0);
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__string_number) {
			break;
		}
		fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "%s\n", struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]);
		if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
			fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "\t%.4u\t%.4u\t%.4u\n", struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__variable.unsigned_int__1]);
		}
		function__string_empty(struct__variable.char_string__1, 8192);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == strlen(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1])) {
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "w");
				if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x0) {
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
				} else if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
				}
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
				break;
			}
			if (struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1] == '\\') {
				mkdir(struct__variable.char_string__1);
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
			} else {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1];
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
	chdir(struct__workspace__bpsr_upck.oripath__pgsr);
}

static void function__bpsr_upck__pgsr_pack() {
	function__string_empty(struct__workspace__bpsr_upck.oripath__pgsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__pgsr, sizeof(struct__workspace__bpsr_upck.oripath__pgsr));
	struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__function_parameter.bpsr_upck__file_path__pgsr, "w");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.bpsr_upck__file_path__pgsr);
	strcat(struct__variable.char_string__1, "__pgsr_unpack");
	chdir(struct__variable.char_string__1);
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list = fopen("subfile_list", "r");
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0 = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__pgsr__subfile_pack_0", "w+");
	struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1 = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__pgsr__subfile_pack_1", "w+");
	chdir("subfile_pack");
	struct__pgsr_header.subfile_pack__compress_type = struct__function_parameter.bpsr_upck__subfile_pack__compress_type;
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
	function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr, 0x1000);
	struct__pgsr_header.header_id = 'rsgp';
	struct__pgsr_header.header_id_x4 = 0x4;
	struct__pgsr_header.null_1[0] = 0x0;
	struct__pgsr_header.null_1[1] = 0x0;
	struct__pgsr_header.null_2[0] = 0x0;
	struct__pgsr_header.null_3[0] = 0x0;
	struct__pgsr_header.null_3[1] = 0x0;
	struct__pgsr_header.null_3[2] = 0x0;
	struct__pgsr_header.null_3[3] = 0x0;
	struct__pgsr_header.null_3[4] = 0x0;
	struct__pgsr_header.null_4[0] = 0x0;
	struct__pgsr_header.null_4[1] = 0x0;
	struct__pgsr_header.null_4[2] = 0x0;
	struct__workspace__bpsr_upck.text__string_sum = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 0);
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, 0);
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == 1) {
			break;
		}
		function__string_get_from_text(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum], 256);
		function__string_uppercase(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum]);
		function__string_empty(struct__variable.char_string__1, 8192);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == strlen(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum])) {
				break;
			}
			if (struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum][struct__variable.unsigned_short__1] == '\\') {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
			} else {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum][struct__variable.unsigned_short__1];
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "r");
		if (fgetc(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == '\t') {
			struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sum] = 0x1;
			fscanf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "%4u\t%4u\t%4u", &struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.text__string_sum], &struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.text__string_sum], &struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.text__string_sum]);
			fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, +1, 1);
			fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, 0x0, 2);
			struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
			struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
			function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum]);
			function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1)) - ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1));
		} else {
			if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == 1) {
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 2);
			} else {
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, -1, 1);
			}
			struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sum] = 0x0;
			fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, 0x0, 2);
			struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
			struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
			function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum]);
			function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0)) - ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0));
		}
		function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
		struct__workspace__bpsr_upck.text__string_sum = struct__workspace__bpsr_upck.text__string_sum + 1;
	}
	function__bpsr_upck__string_sort();
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 2);
	struct__workspace__bpsr_upck.text__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
	struct__workspace__bpsr_upck.text__type = 2;
	function__bpsr_upck__text_compress(struct__workspace__bpsr_upck.fileptr__pgsr);
	struct__pgsr_header.subfile_info__offset = struct__workspace__bpsr_upck.text__offset;
	struct__pgsr_header.subfile_info__size = struct__workspace__bpsr_upck.text__size;
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 2);
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, 2);
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, 2);
	struct__pgsr_header.header__and__subfile_info__size = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
	struct__pgsr_header.subfile_pack_0__size_source = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
	struct__pgsr_header.subfile_pack_1__size_source = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
	if (struct__pgsr_header.subfile_pack__compress_type == 0x0) {
		struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		struct__pgsr_header.subfile_pack_0__size = struct__pgsr_header.subfile_pack_0__size_source;
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size);
		struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		struct__pgsr_header.subfile_pack_1__size = struct__pgsr_header.subfile_pack_1__size_source;
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size);
	} else if (struct__pgsr_header.subfile_pack__compress_type == 0x1) {
		struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		struct__pgsr_header.subfile_pack_0__size = struct__pgsr_header.subfile_pack_0__size_source;
		function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size);
		struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		if (struct__pgsr_header.subfile_pack_1__size_source != 0x0) {
			struct__pgsr_header.subfile_pack_1__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size_source);
		} else {
			struct__pgsr_header.subfile_pack_1__size = 0x0;
		}
	} else if (struct__pgsr_header.subfile_pack__compress_type == 0x3) {
		struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		struct__pgsr_header.subfile_pack_0__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size_source);
		struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
		if (struct__pgsr_header.subfile_pack_1__size_source != 0x0) {
			struct__pgsr_header.subfile_pack_1__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size_source);
		} else {
			struct__pgsr_header.subfile_pack_1__size = 0x0;
		}
	}
	fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
	fwrite(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
	function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
	chdir(struct__workspace__bpsr_upck.oripath__pgsr);
}

static void function__bpsr_upck__bpsr_unpack() {
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr, sizeof(struct__workspace__bpsr_upck.oripath__bpsr));
	struct__workspace__bpsr_upck.fileptr__bpsr = fopen(struct__function_parameter.bpsr_upck__file_path__bpsr, "r");
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, 0);
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.bpsr_upck__file_path__bpsr);
	strcat(struct__variable.char_string__1, "__bpsr_unpack");
	mkdir(struct__variable.char_string__1);
	chdir(struct__variable.char_string__1);
	struct__workspace__bpsr_upck.fileptr__resource_list = fopen("resource_list", "w");
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0, 0);
	fread(&struct__1bsr_header, 0x4, 28, struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__workspace__bpsr_upck.bpsr__group_number = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.group_info__offset, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__group_number == struct__1bsr_header.group_info__item_sum) {
			break;
		}
		fread(&struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number], 0x4, 289, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__workspace__bpsr_upck.bpsr__group_number = struct__workspace__bpsr_upck.bpsr__group_number + 1;
	}
	struct__workspace__bpsr_upck.bpsr__subgroup_number = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.subgroup_info__offset, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__subgroup_number == struct__1bsr_header.subgroup_info__item_sum) {
			break;
		}
		fread(&struct__1bsr__subgroup_info__pack[struct__workspace__bpsr_upck.bpsr__subgroup_number], 0x4, 51, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__workspace__bpsr_upck.bpsr__subgroup_number = struct__workspace__bpsr_upck.bpsr__subgroup_number + 1;
	}
	struct__workspace__bpsr_upck.bpsr__autopool_number = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.autopool_info__offset, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__autopool_number == struct__1bsr_header.autopool_info__item_sum) {
			break;
		}
		fread(&struct__1bsr__autopool_info__pack[struct__workspace__bpsr_upck.bpsr__autopool_number], 0x4, 38, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__workspace__bpsr_upck.bpsr__autopool_number = struct__workspace__bpsr_upck.bpsr__autopool_number + 1;
	}
	struct__workspace__bpsr_upck.bpsr__ptx_number = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.ptx_info__offset, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__ptx_number == struct__1bsr_header.ptx_info__item_sum) {
			break;
		}
		fread(&struct__1bsr__ptx_info__pack[struct__workspace__bpsr_upck.bpsr__ptx_number], 0x4, 4, struct__workspace__bpsr_upck.fileptr__bpsr);
		if (struct__function_parameter.bpsr_upck__is_version_cn == 1) {
			fseek(struct__workspace__bpsr_upck.fileptr__bpsr, +0x8, 1);
		}
		struct__workspace__bpsr_upck.bpsr__ptx_number = struct__workspace__bpsr_upck.bpsr__ptx_number + 1;
	}
	mkdir("resource");
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource, "/resource");
	mkdir("pgsr");
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, "/pgsr");
	mkdir("file");
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource_file));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, "/file");
	struct__workspace__bpsr_upck.bpsr__group_number = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__resource_list, 0, 0);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__group_number == struct__1bsr_header.group_info__item_sum) {
			break;
		}
		fprintf(struct__workspace__bpsr_upck.fileptr__resource_list, "%s\n", struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
		struct__workspace__bpsr_upck.bpsr__subgroup_number = 0;
		for (;; ) {
			if (struct__workspace__bpsr_upck.bpsr__subgroup_number == struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__sum) {
				break;
			}
			fprintf(struct__workspace__bpsr_upck.fileptr__resource_list, "\t%s\tct.x%.1X\n", struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack__compress_type);
			if (struct__function_parameter.bpsr_upck__resource_pgsr__upck_pgsr == 1) {
				chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr);
				mkdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
				chdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
				mkdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
				chdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
				struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, "w");
				function__data_copy(struct__workspace__bpsr_upck.fileptr__bpsr, struct__workspace__bpsr_upck.fileptr__pgsr, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__offset, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__size);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
			}
			chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource);
			mkdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
			chdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
			mkdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
			chdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
			if (struct__function_parameter.bpsr_upck__resource__upck_pgsr == 1) {
				struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, "w+");
			} else {
				struct__workspace__bpsr_upck.fileptr__pgsr = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__bpsr_upck__pgsr", "w+");
			}
			function__data_copy(struct__workspace__bpsr_upck.fileptr__bpsr, struct__workspace__bpsr_upck.fileptr__pgsr, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__offset, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__size);
			if (struct__function_parameter.bpsr_upck__resource__upck_file == 1) {
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
				function__string_empty(struct__workspace__bpsr_upck.oripath__pgsr, 8192);
				getcwd(struct__workspace__bpsr_upck.oripath__pgsr, sizeof(struct__workspace__bpsr_upck.oripath__pgsr));
				if (struct__function_parameter.bpsr_upck__resource__upck_pgsr == 1) {
					struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, "r");
				} else {
					struct__workspace__bpsr_upck.fileptr__pgsr = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__bpsr_upck__pgsr", "r");
				}
				function__string_empty(struct__variable.char_string__1, 8192);
				strcpy(struct__variable.char_string__1, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
				strcat(struct__variable.char_string__1, "__pgsr_unpack");
				mkdir(struct__variable.char_string__1);
				chdir(struct__variable.char_string__1);
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list = fopen("subfile_list", "w");
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0 = fopen("/storage/emulated/0/android/obb/pvztool/__temps/__pgsr__subfile_pack_0", "w+");
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1 = fopen("/storage/emulated/0/android/obb/pvztool/__temps/__pgsr__subfile_pack_1", "w+");
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
				fread(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
				if (struct__pgsr_header.subfile_pack__compress_type == 0x0) {
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size);
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size);
				} else if (struct__pgsr_header.subfile_pack__compress_type == 0x1) {
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size);
					function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size, struct__pgsr_header.subfile_pack_1__size_source);
				} else if (struct__pgsr_header.subfile_pack__compress_type == 0x3) {
					function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__pgsr_header.subfile_pack_0__offset, struct__pgsr_header.subfile_pack_0__size, struct__pgsr_header.subfile_pack_0__size_source);
					function__zlib_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__pgsr_header.subfile_pack_1__offset, struct__pgsr_header.subfile_pack_1__size, struct__pgsr_header.subfile_pack_1__size_source);
				}
				mkdir("subfile_pack");
				chdir("subfile_pack");
				struct__workspace__bpsr_upck.text__offset = struct__pgsr_header.subfile_info__offset;
				struct__workspace__bpsr_upck.text__size = struct__pgsr_header.subfile_info__size;
				struct__workspace__bpsr_upck.text__type = 2;
				function__bpsr_upck__text_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__variable.unsigned_int__1 = 0;
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 0);
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__string_number) {
						break;
					}
					fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "%s\n", struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]);
					if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
						fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "\t%.4u\t%.4u\t%.4u\n", struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__variable.unsigned_int__1]);
					}
					function__string_empty(struct__variable.char_string__1, 8192);
					struct__variable.unsigned_short__1 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__1 == strlen(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1])) {
							struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "w");
							if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x0) {
								function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
							} else if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
								function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
							}
							function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
							if (struct__function_parameter.bpsr_upck__resource_file__upck_file == 1) {
								function__string_empty(struct__variable.char_string__2, 8192);
								getcwd(struct__variable.char_string__2, sizeof(struct__variable.char_string__2));
								chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_file);
								struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "w");
								if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x0) {
									function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
								} else if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
									function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.text__subfile_info__offset[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1]);
								}
								function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
								chdir(struct__variable.char_string__2);
							}
							break;
						}
						if (struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1] == '\\') {
							mkdir(struct__variable.char_string__1);
							if (struct__function_parameter.bpsr_upck__resource_file__upck_file == 1) {
								function__string_empty(struct__variable.char_string__2, 8192);
								getcwd(struct__variable.char_string__2, sizeof(struct__variable.char_string__2));
								chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_file);
								mkdir(struct__variable.char_string__1);
								chdir(struct__variable.char_string__2);
							}
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
						} else {
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1];
						}
						struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
					}
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
				chdir(struct__workspace__bpsr_upck.oripath__pgsr);
			} else {
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
				fread(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__workspace__bpsr_upck.text__offset = struct__pgsr_header.subfile_info__offset;
				struct__workspace__bpsr_upck.text__size = struct__pgsr_header.subfile_info__size;
				struct__workspace__bpsr_upck.text__type = 2;
				function__bpsr_upck__text_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
			}
			struct__workspace__bpsr_upck.pgsr__subfile_number = 0;
			for (;; ) {
				if (struct__workspace__bpsr_upck.pgsr__subfile_number == struct__workspace__bpsr_upck.text__string_number) {
					break;
				}
				fprintf(struct__workspace__bpsr_upck.fileptr__resource_list, "\t\t%s\n", struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.pgsr__subfile_number]);
				if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.pgsr__subfile_number] == 0x1) {
					fprintf(struct__workspace__bpsr_upck.fileptr__resource_list, "\t\t\t0x%.2X\t%.4u\t%.4u\n", struct__1bsr__ptx_info__pack[struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__ptx_number_start + struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.pgsr__subfile_number]].pixel_format, struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.pgsr__subfile_number], struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.pgsr__subfile_number]);
				}
				if ((struct__function_parameter.bpsr_upck__resource_file__upck_file == 1) && (struct__function_parameter.bpsr_upck__resource__upck_file == 1)) {
					chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_file);
					function__string_empty(struct__variable.char_string__1, 8192);
					struct__variable.unsigned_short__1 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__1 == strlen(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.pgsr__subfile_number])) {
							struct__workspace__bpsr_upck.fileptr__resource_file__file = fopen(struct__variable.char_string__1, "w");
							chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource);
							chdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
							chdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
							function__string_empty(struct__variable.char_string__2, 8192);
							strcpy(struct__variable.char_string__2, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
							strcat(struct__variable.char_string__2, "__pgsr_unpack");
							chdir(struct__variable.char_string__2);
							chdir("subfile_pack");
							struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "r");
							function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.fileptr__resource_file__file, 0x0, struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.pgsr__subfile_number]);
							function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
							function__file_close(struct__workspace__bpsr_upck.fileptr__resource_file__file);
							break;
						}
						if (struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.pgsr__subfile_number][struct__variable.unsigned_short__1] == '\\') {
							mkdir(struct__variable.char_string__1);
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
						} else {
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.pgsr__subfile_number][struct__variable.unsigned_short__1];
						}
						struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
					}
				}
				struct__workspace__bpsr_upck.pgsr__subfile_number = struct__workspace__bpsr_upck.pgsr__subfile_number + 1;
			}
			struct__workspace__bpsr_upck.bpsr__subgroup_number = struct__workspace__bpsr_upck.bpsr__subgroup_number + 1;
		}
		struct__workspace__bpsr_upck.bpsr__group_number = struct__workspace__bpsr_upck.bpsr__group_number + 1;
	}
	function__file_close(struct__workspace__bpsr_upck.fileptr__resource_list);
	function__file_close(struct__workspace__bpsr_upck.fileptr__bpsr);
	chdir(struct__workspace__bpsr_upck.oripath__bpsr);
}

static void function__bpsr_upck__bpsr_pack() {
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr, sizeof(struct__workspace__bpsr_upck.oripath__bpsr));
	struct__workspace__bpsr_upck.fileptr__bpsr = fopen(struct__function_parameter.bpsr_upck__file_path__bpsr, "w");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.bpsr_upck__file_path__bpsr);
	strcat(struct__variable.char_string__1, "__bpsr_unpack");
	chdir(struct__variable.char_string__1);
	struct__workspace__bpsr_upck.fileptr__resource_list = fopen("resource_list", "r");
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, 0);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, 0x1000);
	struct__1bsr_header.header_id = 'rsb1';
	struct__1bsr_header.header_id_x4 = 0x4;
	struct__1bsr_header.null_1[0] = 0x0;
	struct__1bsr_header.null_2[0] = 0x0;
	struct__1bsr_header.null_2[1] = 0x0;
	struct__1bsr_header.null_3[0] = 0x0;
	struct__1bsr_header.null_3[1] = 0x0;
	struct__1bsr_header.null_3[2] = 0x0;
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == 8192) {
			break;
		}
		function__string_empty(struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].id, 128);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == 64) {
				break;
			}
			struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].subgroup__number[struct__variable.unsigned_short__1][0] = 0x0;
			struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].subgroup__number[struct__variable.unsigned_short__1][1] = 0x0;
			struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].subgroup__number[struct__variable.unsigned_short__1][2] = 0x0;
			struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].subgroup__number[struct__variable.unsigned_short__1][3] = 0x0;
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum = 0;
		function__string_empty(struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].id, 128);
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__offset = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__size = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].number = 0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack__compress_type = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__header__and__subfile_info__size = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_0__offset = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_0__size = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_0__size_source = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_0__size_source2 = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_1__offset = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_1__size = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_1__size_source = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].null_1[0] = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].null_1[1] = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].null_1[2] = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].null_1[3] = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].null_1[4] = 0x0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__ptx_sum = 0;
		struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].pgsr__ptx_number_start = 0;
		function__string_empty(struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].id, 128);
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_1__offset = 0x0;
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].pgsr__subfile_pack_1__size = 0x0;
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].unknown = 0x0;
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].null_1[0] = 0x0;
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].null_1[1] = 0x0;
		struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1].null_1[2] = 0x0;
		struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].width = 0;
		struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].height = 0;
		struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].unknown = 0;
		struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].pixel_format = 0x0;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__1bsr_header.group_info__item_size = 0x484;
	struct__1bsr_header.subgroup_info__item_size = 0xCC;
	struct__1bsr_header.autopool_info__item_size = 0x98;
	if (struct__function_parameter.bpsr_upck__is_version_cn == 1) {
		struct__1bsr_header.ptx_info__item_size = 0x18;
	} else {
		struct__1bsr_header.ptx_info__item_size = 0x10;
	}
	struct__1bsr_header.group_info__item_sum = 0;
	struct__1bsr_header.subgroup_info__item_sum = 0;
	struct__1bsr_header.autopool_info__item_sum = 0;
	struct__1bsr_header.ptx_info__item_sum = 0;
	struct__workspace__bpsr_upck.bpsr__file__sum = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__resource_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__resource_list) == 1) {
			break;
		}
		function__string_empty(struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].id, 128);
		fscanf(struct__workspace__bpsr_upck.fileptr__resource_list, "%s", struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].id);
		fseek(struct__workspace__bpsr_upck.fileptr__resource_list, +1, 1);
		struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].subgroup__sum = 0;
		for (;; ) {
			if (fgetc(struct__workspace__bpsr_upck.fileptr__resource_list) != '\t') {
				if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__resource_list) == 1) {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, 0, 2);
				} else {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, -1, 1);
				}
				break;
			}
			function__string_empty(struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].id, 128);
			fscanf(struct__workspace__bpsr_upck.fileptr__resource_list, "%s\tct.x%1X", struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].id, &struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].pgsr__subfile_pack__compress_type);
			fseek(struct__workspace__bpsr_upck.fileptr__resource_list, +1, 1);
			function__string_empty(struct__1bsr__autopool_info__pack[struct__1bsr_header.subgroup_info__item_sum].id, 128);
			strcpy(struct__1bsr__autopool_info__pack[struct__1bsr_header.subgroup_info__item_sum].id, struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].id);
			strcat(struct__1bsr__autopool_info__pack[struct__1bsr_header.subgroup_info__item_sum].id, "_AutoPool");
			struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].number = struct__1bsr_header.subgroup_info__item_sum;
			struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].pgsr__ptx_number_start = struct__1bsr_header.ptx_info__item_sum;
			struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].pgsr__ptx_sum = 0;
			struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].subgroup__number[struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].subgroup__sum][0] = struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].number;
			struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].subgroup__sum = struct__1bsr__group_info__pack[struct__1bsr_header.group_info__item_sum].subgroup__sum + 1;
			for (;; ) {
				if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__resource_list) == 1) {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, 0, 2);
					break;
				}
				fseek(struct__workspace__bpsr_upck.fileptr__resource_list, +1, 1);
				if (fgetc(struct__workspace__bpsr_upck.fileptr__resource_list) != '\t') {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, -2, 1);
					break;
				}
				function__string_get_from_text(struct__workspace__bpsr_upck.fileptr__resource_list, struct__workspace__bpsr_upck.bpsr__file__path[struct__workspace__bpsr_upck.bpsr__file__sum], 256);
				if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__resource_list) == 1) {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, 0, 2);
				} else {
					fseek(struct__workspace__bpsr_upck.fileptr__resource_list, +2, 1);
					if (fgetc(struct__workspace__bpsr_upck.fileptr__resource_list) == '\t') {
						struct__workspace__bpsr_upck.bpsr__file__is_ptx[struct__workspace__bpsr_upck.bpsr__file__sum] = 1;
						fscanf(struct__workspace__bpsr_upck.fileptr__resource_list, "0x%2X\t%4u\t%4u", &struct__1bsr__ptx_info__pack[struct__1bsr_header.ptx_info__item_sum].pixel_format, &struct__1bsr__ptx_info__pack[struct__1bsr_header.ptx_info__item_sum].width, &struct__1bsr__ptx_info__pack[struct__1bsr_header.ptx_info__item_sum].height);
						fseek(struct__workspace__bpsr_upck.fileptr__resource_list, +1, 1);
						struct__1bsr__ptx_info__pack[struct__1bsr_header.ptx_info__item_sum].unknown = struct__1bsr__ptx_info__pack[struct__1bsr_header.ptx_info__item_sum].width * 4;
						struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].pgsr__ptx_sum = struct__1bsr__subgroup_info__pack[struct__1bsr_header.subgroup_info__item_sum].pgsr__ptx_sum + 1;
						struct__1bsr_header.ptx_info__item_sum = struct__1bsr_header.ptx_info__item_sum + 1;
					} else {
						struct__workspace__bpsr_upck.bpsr__file__is_ptx[struct__workspace__bpsr_upck.bpsr__file__sum] = 0;
						fseek(struct__workspace__bpsr_upck.fileptr__resource_list, -3, 1);
					}
				}
				struct__workspace__bpsr_upck.bpsr__file__parent[struct__workspace__bpsr_upck.bpsr__file__sum] = struct__1bsr_header.subgroup_info__item_sum;
				struct__workspace__bpsr_upck.bpsr__file__sum = struct__workspace__bpsr_upck.bpsr__file__sum + 1;
			}
			struct__1bsr_header.subgroup_info__item_sum = struct__1bsr_header.subgroup_info__item_sum + 1;
		}
		struct__1bsr_header.group_info__item_sum = struct__1bsr_header.group_info__item_sum + 1;
	}
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, 2);
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.bpsr__file__sum) {
			break;
		}
		function__string_empty(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], 256);
		strcpy(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], struct__workspace__bpsr_upck.bpsr__file__path[struct__variable.unsigned_int__1]);
		function__string_uppercase(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]);
		struct__workspace__bpsr_upck.text__list__number[struct__variable.unsigned_int__1] = struct__workspace__bpsr_upck.bpsr__file__parent[struct__variable.unsigned_int__1];
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__string_sum = struct__workspace__bpsr_upck.bpsr__file__sum;
	function__bpsr_upck__string_sort();
	struct__workspace__bpsr_upck.text__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__workspace__bpsr_upck.text__type = 1;
	function__bpsr_upck__text_compress(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__1bsr_header.file_list__offset = struct__workspace__bpsr_upck.text__offset;
	struct__1bsr_header.file_list__size = struct__workspace__bpsr_upck.text__size;
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.group_info__item_sum) {
			break;
		}
		function__string_empty(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], 256);
		strcpy(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], struct__1bsr__group_info__pack[struct__variable.unsigned_int__1].id);
		function__string_uppercase(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]);
		struct__workspace__bpsr_upck.text__list__number[struct__variable.unsigned_int__1] = struct__variable.unsigned_int__1;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__string_sum = struct__1bsr_header.group_info__item_sum;
	function__bpsr_upck__string_sort();
	struct__workspace__bpsr_upck.text__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__workspace__bpsr_upck.text__type = 1;
	function__bpsr_upck__text_compress(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__1bsr_header.group_list__offset = struct__workspace__bpsr_upck.text__offset;
	struct__1bsr_header.group_list__size = struct__workspace__bpsr_upck.text__size;
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.subgroup_info__item_sum) {
			break;
		}
		function__string_empty(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], 256);
		strcpy(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1], struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1].id);
		function__string_uppercase(struct__workspace__bpsr_upck.text__string[struct__variable.unsigned_int__1]);
		struct__workspace__bpsr_upck.text__list__number[struct__variable.unsigned_int__1] = struct__variable.unsigned_int__1;
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__workspace__bpsr_upck.text__string_sum = struct__1bsr_header.subgroup_info__item_sum;
	function__bpsr_upck__string_sort();
	struct__workspace__bpsr_upck.text__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__workspace__bpsr_upck.text__type = 1;
	function__bpsr_upck__text_compress(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__1bsr_header.subgroup_list__offset = struct__workspace__bpsr_upck.text__offset;
	struct__1bsr_header.subgroup_list__size = struct__workspace__bpsr_upck.text__size;
	struct__variable.unsigned_int__1 = 0;
	struct__1bsr_header.group_info__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.group_info__item_sum) {
			function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
			break;
		}
		fwrite(&struct__1bsr__group_info__pack[struct__variable.unsigned_int__1], 0x4, 289, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__1bsr_header.subgroup_info__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.subgroup_info__item_size * struct__1bsr_header.subgroup_info__item_sum);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
	struct__1bsr_header.autopool_info__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__1bsr_header.autopool_info__item_sum = struct__1bsr_header.subgroup_info__item_sum;
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.autopool_info__item_size * struct__1bsr_header.autopool_info__item_sum);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
	struct__1bsr_header.ptx_info__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.ptx_info__item_size * struct__1bsr_header.ptx_info__item_sum);
	function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
	struct__1bsr_header.obsr__size = struct__1bsr_header.obsr__size_2 = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
	struct__workspace__bpsr_upck.bpsr__group_number = 0;
	struct__workspace__bpsr_upck.bpsr__subgroup_number = 0;
	struct__workspace__bpsr_upck.bpsr__autopool_number = 0;
	struct__workspace__bpsr_upck.bpsr__ptx_number = 0;
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource, "/resource");
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource_pgsr, "/pgsr");
	function__string_empty(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, 8192);
	getcwd(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, sizeof(struct__workspace__bpsr_upck.oripath__bpsr__resource_file));
	strcat(struct__workspace__bpsr_upck.oripath__bpsr__resource_file, "/file");
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, 2);
	for (;; ) {
		if (struct__workspace__bpsr_upck.bpsr__group_number == struct__1bsr_header.group_info__item_sum) {
			break;
		}
		struct__workspace__bpsr_upck.bpsr__subgroup_number = 0;
		for (;; ) {
			if (struct__workspace__bpsr_upck.bpsr__subgroup_number == struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__sum) {
				chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource);
				break;
			}
			chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource);
			chdir(struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].id);
			chdir(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__offset = ftell(struct__workspace__bpsr_upck.fileptr__bpsr);
			struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, "r");
			if (((struct__workspace__bpsr_upck.fileptr__pgsr == NULL) || (struct__function_parameter.bpsr_upck__resource__repack_pgsr == 1)) && (struct__function_parameter.bpsr_upck__resource__upck_file == 1)) {
				if (struct__workspace__bpsr_upck.fileptr__pgsr != NULL) {
					function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
				}
				function__string_empty(struct__variable.char_string__1, 8192);
				strcpy(struct__variable.char_string__1, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
				strcat(struct__variable.char_string__1, "__pgsr_unpack");
				strcat(struct__variable.char_string__1, "/subfile_list");
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list = fopen(struct__variable.char_string__1, "w");
				struct__variable.unsigned_int__1 = 0;
				struct__workspace__bpsr_upck.bpsr__ptx_number = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.bpsr__file__sum) {
						break;
					}
					if (struct__workspace__bpsr_upck.bpsr__file__parent[struct__variable.unsigned_int__1] == struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].number) {
						fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "%s\n", struct__workspace__bpsr_upck.bpsr__file__path[struct__variable.unsigned_int__1]);
						if (struct__workspace__bpsr_upck.bpsr__file__is_ptx[struct__variable.unsigned_int__1] == 0x1) {
							fprintf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "\t%.4u\t%.4u\t%.4u\n", struct__workspace__bpsr_upck.bpsr__ptx_number, struct__1bsr__ptx_info__pack[struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__ptx_number_start + struct__workspace__bpsr_upck.bpsr__ptx_number].width, struct__1bsr__ptx_info__pack[struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__ptx_number_start + struct__workspace__bpsr_upck.bpsr__ptx_number].height);
							struct__workspace__bpsr_upck.bpsr__ptx_number = struct__workspace__bpsr_upck.bpsr__ptx_number + 1;
						}
					}
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list);
				function__string_empty(struct__workspace__bpsr_upck.oripath__pgsr, 8192);
				getcwd(struct__workspace__bpsr_upck.oripath__pgsr, sizeof(struct__workspace__bpsr_upck.oripath__pgsr));
				if (struct__function_parameter.bpsr_upck__resource__upck_pgsr == 1) {
					struct__workspace__bpsr_upck.fileptr__pgsr = fopen(struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id, "w+");
				} else {
					struct__workspace__bpsr_upck.fileptr__pgsr = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__bpsr_upck__pgsr", "w+");
				}
				function__string_empty(struct__variable.char_string__1, 8192);
				strcpy(struct__variable.char_string__1, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].id);
				strcat(struct__variable.char_string__1, "__pgsr_unpack");
				chdir(struct__variable.char_string__1);
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list = fopen("subfile_list", "r");
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0 = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__pgsr__subfile_pack_0", "w+");
				struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1 = fopen("/storage/emulated/0/Android/obb/pvztool/__temps/__pgsr__subfile_pack_1", "w+");
				chdir("subfile_pack");
				struct__pgsr_header.subfile_pack__compress_type = struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack__compress_type;
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
				function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr, 0x1000);
				struct__pgsr_header.header_id = 'rsgp';
				struct__pgsr_header.header_id_x4 = 0x4;
				struct__pgsr_header.null_1[0] = 0x0;
				struct__pgsr_header.null_1[1] = 0x0;
				struct__pgsr_header.null_2[0] = 0x0;
				struct__pgsr_header.null_3[0] = 0x0;
				struct__pgsr_header.null_3[1] = 0x0;
				struct__pgsr_header.null_3[2] = 0x0;
				struct__pgsr_header.null_3[3] = 0x0;
				struct__pgsr_header.null_3[4] = 0x0;
				struct__pgsr_header.null_4[0] = 0x0;
				struct__pgsr_header.null_4[1] = 0x0;
				struct__pgsr_header.null_4[2] = 0x0;
				struct__workspace__bpsr_upck.text__string_sum = 0;
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 0);
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, 0);
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, 0);
				for (;; ) {
					if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == 1) {
						break;
					}
					function__string_get_from_text(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum], 256);
					function__string_uppercase(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum]);
					function__string_empty(struct__variable.char_string__1, 8192);
					struct__variable.unsigned_short__1 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__1 == strlen(struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum])) {
							break;
						}
						if (struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum][struct__variable.unsigned_short__1] == '\\') {
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
						} else {
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__bpsr_upck.text__string[struct__workspace__bpsr_upck.text__string_sum][struct__variable.unsigned_short__1];
						}
						struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
					}
					if (struct__function_parameter.bpsr_upck__resource_file__upck_file == 1) {
						function__string_empty(struct__variable.char_string__2, 8192);
						getcwd(struct__variable.char_string__2, sizeof(struct__variable.char_string__2));
						chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_file);
						struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "r");
						chdir(struct__variable.char_string__2);
						if (struct__workspace__bpsr_upck.fileptr__pgsr__subfile == NULL) {
							struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "r");
						}
					} else {
						struct__workspace__bpsr_upck.fileptr__pgsr__subfile = fopen(struct__variable.char_string__1, "r");
					}
					if (fgetc(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == '\t') {
						struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sum] = 0x1;
						fscanf(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, "%4u\t%4u\t%4u", &struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__workspace__bpsr_upck.text__string_sum], &struct__workspace__bpsr_upck.text__subfile_info__ptx__width[struct__workspace__bpsr_upck.text__string_sum], &struct__workspace__bpsr_upck.text__subfile_info__ptx__height[struct__workspace__bpsr_upck.text__string_sum]);
						fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, +1, 1);
						fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, 0x0, 2);
						struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
						struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
						function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum]);
						function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1)) - ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1));
					} else {
						if (function__file_is_end(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list) == 1) {
							fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, 0, 2);
						} else {
							fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list, -1, 1);
						}
						struct__workspace__bpsr_upck.text__subfile_info__type[struct__workspace__bpsr_upck.text__string_sum] = 0x0;
						fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, 0x0, 2);
						struct__workspace__bpsr_upck.text__subfile_info__offset[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
						struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum] = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
						function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile, struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, struct__workspace__bpsr_upck.text__subfile_info__size[struct__workspace__bpsr_upck.text__string_sum]);
						function__put_null(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0)) - ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0));
					}
					function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile);
					struct__workspace__bpsr_upck.text__string_sum = struct__workspace__bpsr_upck.text__string_sum + 1;
				}
				function__bpsr_upck__string_sort();
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 2);
				struct__workspace__bpsr_upck.text__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__workspace__bpsr_upck.text__type = 2;
				function__bpsr_upck__text_compress(struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__pgsr_header.subfile_info__offset = struct__workspace__bpsr_upck.text__offset;
				struct__pgsr_header.subfile_info__size = struct__workspace__bpsr_upck.text__size;
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 2);
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, 0x0, 2);
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, 0x0, 2);
				struct__pgsr_header.header__and__subfile_info__size = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__pgsr_header.subfile_pack_0__size_source = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
				struct__pgsr_header.subfile_pack_1__size_source = ftell(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
				if (struct__pgsr_header.subfile_pack__compress_type == 0x0) {
					struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					struct__pgsr_header.subfile_pack_0__size = struct__pgsr_header.subfile_pack_0__size_source;
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size);
					struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					struct__pgsr_header.subfile_pack_1__size = struct__pgsr_header.subfile_pack_1__size_source;
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size);
				} else if (struct__pgsr_header.subfile_pack__compress_type == 0x1) {
					struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					struct__pgsr_header.subfile_pack_0__size = struct__pgsr_header.subfile_pack_0__size_source;
					function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size);
					struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					if (struct__pgsr_header.subfile_pack_1__size_source != 0x0) {
						struct__pgsr_header.subfile_pack_1__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size_source);
					} else {
						struct__pgsr_header.subfile_pack_1__size = 0x0;
					}
				} else if (struct__pgsr_header.subfile_pack__compress_type == 0x3) {
					struct__pgsr_header.subfile_pack_0__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					struct__pgsr_header.subfile_pack_0__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_0__size_source);
					struct__pgsr_header.subfile_pack_1__offset = ftell(struct__workspace__bpsr_upck.fileptr__pgsr);
					if (struct__pgsr_header.subfile_pack_1__size_source != 0x0) {
						struct__pgsr_header.subfile_pack_1__size = function__zlib_compress(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1, struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, struct__pgsr_header.subfile_pack_1__size_source);
					} else {
						struct__pgsr_header.subfile_pack_1__size = 0x0;
					}
				}
				fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
				fwrite(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_list);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_0);
				function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr__subfile_pack_1);
				chdir(struct__workspace__bpsr_upck.oripath__pgsr);
			}
			fseek(struct__workspace__bpsr_upck.fileptr__pgsr, 0x0, 0);
			fread(&struct__pgsr_header, 0x4, 23, struct__workspace__bpsr_upck.fileptr__pgsr);
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__size = struct__pgsr_header.header__and__subfile_info__size + struct__pgsr_header.subfile_pack_0__size + struct__pgsr_header.subfile_pack_1__size;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack__compress_type = struct__pgsr_header.subfile_pack__compress_type;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__header__and__subfile_info__size = struct__pgsr_header.header__and__subfile_info__size;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_0__offset = struct__pgsr_header.subfile_pack_0__offset;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_0__size = struct__pgsr_header.subfile_pack_0__size;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_0__size_source = struct__pgsr_header.subfile_pack_0__size_source;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_0__size_source2 = struct__pgsr_header.subfile_pack_0__size_source;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_1__offset = struct__pgsr_header.subfile_pack_1__offset;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_1__size = struct__pgsr_header.subfile_pack_1__size;
			struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_1__size_source = struct__pgsr_header.subfile_pack_1__size_source;
			struct__1bsr__autopool_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_1__offset = struct__pgsr_header.header__and__subfile_info__size + struct__pgsr_header.subfile_pack_0__size_source;
			struct__1bsr__autopool_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__subfile_pack_1__size = struct__pgsr_header.subfile_pack_1__size_source;
			struct__1bsr__autopool_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].unknown = 0x1;
			if (struct__function_parameter.bpsr_upck__is_version_cn == 1) {
				struct__workspace__bpsr_upck.text__offset = struct__pgsr_header.subfile_info__offset;
				struct__workspace__bpsr_upck.text__size = struct__pgsr_header.subfile_info__size;
				struct__workspace__bpsr_upck.text__type = 2;
				function__bpsr_upck__text_uncompress(struct__workspace__bpsr_upck.fileptr__pgsr);
				struct__variable.unsigned_int__1 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__bpsr_upck.text__string_number) {
						break;
					}
					if (struct__workspace__bpsr_upck.text__subfile_info__type[struct__variable.unsigned_int__1] == 0x1) {
						struct__workspace__bpsr_upck.bpsr__file__ptx_size[struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__ptx_number_start + struct__workspace__bpsr_upck.text__subfile_info__ptx__number[struct__variable.unsigned_int__1]] = struct__workspace__bpsr_upck.text__subfile_info__size[struct__variable.unsigned_int__1];
					}
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
			}
			function__data_copy(struct__workspace__bpsr_upck.fileptr__pgsr, struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, struct__1bsr__subgroup_info__pack[struct__1bsr__group_info__pack[struct__workspace__bpsr_upck.bpsr__group_number].subgroup__number[struct__workspace__bpsr_upck.bpsr__subgroup_number][0]].pgsr__size);
			function__file_close(struct__workspace__bpsr_upck.fileptr__pgsr);
			chdir(struct__workspace__bpsr_upck.oripath__bpsr__resource_group);
			struct__workspace__bpsr_upck.bpsr__subgroup_number = struct__workspace__bpsr_upck.bpsr__subgroup_number + 1;
		}
		struct__workspace__bpsr_upck.bpsr__group_number = struct__workspace__bpsr_upck.bpsr__group_number + 1;
	}
	struct__variable.unsigned_int__1 = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.subgroup_info__offset, 0);
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.subgroup_info__item_sum) {
			function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
			break;
		}
		fwrite(&struct__1bsr__subgroup_info__pack[struct__variable.unsigned_int__1], 0x4, 51, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__variable.unsigned_int__1 = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.autopool_info__offset, 0);
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.autopool_info__item_sum) {
			function__put_null(struct__workspace__bpsr_upck.fileptr__bpsr, function__return_fullsize(ftell(struct__workspace__bpsr_upck.fileptr__bpsr)) - ftell(struct__workspace__bpsr_upck.fileptr__bpsr));
			break;
		}
		fwrite(&struct__1bsr__autopool_info__pack[struct__variable.unsigned_int__1], 0x4, 38, struct__workspace__bpsr_upck.fileptr__bpsr);
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__variable.unsigned_int__1 = 0;
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, struct__1bsr_header.ptx_info__offset, 0);
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__1bsr_header.ptx_info__item_sum) {
			break;
		}
		fwrite(&struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1], 0x4, 4, struct__workspace__bpsr_upck.fileptr__bpsr);
		if (struct__function_parameter.bpsr_upck__is_version_cn == 1) {
			union__value.unsigned_int = 0x0;
			if (struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].pixel_format == 0x93) {
				union__value.unsigned_int = struct__workspace__bpsr_upck.bpsr__file__ptx_size[struct__variable.unsigned_int__1] - (struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].width * struct__1bsr__ptx_info__pack[struct__variable.unsigned_int__1].height / 2);
			}
			function__put_value(struct__workspace__bpsr_upck.fileptr__bpsr, 4);
			union__value.unsigned_int = 0x64;
			function__put_value(struct__workspace__bpsr_upck.fileptr__bpsr, 4);
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	fseek(struct__workspace__bpsr_upck.fileptr__bpsr, 0x0, 0);
	fwrite(&struct__1bsr_header, 0x4, 28, struct__workspace__bpsr_upck.fileptr__bpsr);
	function__file_close(struct__workspace__bpsr_upck.fileptr__resource_list);
	function__file_close(struct__workspace__bpsr_upck.fileptr__bpsr);
	chdir(struct__workspace__bpsr_upck.oripath__bpsr);
}

// bpsr_upck functions end

// resource_rwdt functions start

static void function__resource_rwdt__get_json_string(FILE * fileptr__get_from, char string_be_get[], unsigned short strlen_length) {
	function__string_empty(string_be_get, strlen_length);
	for (;; ) {
		if (fgetc(fileptr__get_from) == '\"') {
			break;
		}
	}
	struct__variable.unsigned_short__1 = 0;
	for (;; ) {
		struct__variable.unsigned_char__1 = fgetc(fileptr__get_from);
		if (struct__variable.unsigned_char__1 == '\"') {
			break;
		}
		string_be_get[struct__variable.unsigned_short__1] = struct__variable.unsigned_char__1;
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
	}
}

static unsigned int function__resource_rwdt__get_json_int(FILE * fileptr__get_from) {
	unsigned int value;
	for (;; ) {
		struct__variable.unsigned_char__1 = fgetc(fileptr__get_from);
		if ((struct__variable.unsigned_char__1 >= '0') && (struct__variable.unsigned_char__1 <= '9')) {
			fseek(fileptr__get_from, -1, 1);
			fscanf(fileptr__get_from, "%u", &value);
			break;
		}
	}
	return value;
}

static void function__resource_rwdt__path_to_id(char path[], char id[], unsigned int subpath_number, unsigned short id_length, unsigned short delete_last_subpath) {
	if (delete_last_subpath == 1) {
		struct__variable.unsigned_int__2 = 0;
		for (;; ) {
			if (struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__1] == '\0') {
				break;
			}
			if (struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__1] == '\\') {
				struct__variable.unsigned_int__2 = struct__variable.unsigned_short__1;
				struct__variable.unsigned_int__1 = struct__variable.unsigned_short__1 + 1;
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
	}
	struct__variable.unsigned_short__1 = 0;
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == subpath_number) {
			break;
		}
		if (path[struct__variable.unsigned_short__1] == '\\') {
			struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
		}
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
	}
	for (;; ) {
		if (struct__variable.unsigned_short__1 == strlen(path)) {
			break;
		}
		if (path[struct__variable.unsigned_short__1] == '.') {
			break;
		}
		if ((path[struct__variable.unsigned_short__1] == '\\') || (path[struct__variable.unsigned_short__1] == ' ')) {
			if (delete_last_subpath == 1) {
				if (struct__variable.unsigned_int__2 == struct__variable.unsigned_short__1) {
					break;
				}
			}
			id[id_length] = '_';
		} else {
			id[id_length] = path[struct__variable.unsigned_short__1];
		}
		struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		id_length = id_length + 1;
	}
	function__string_uppercase(id);
}

static void function__resource_rwdt__json_to_text() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".json");
	struct__workspace__resource_rwdt.fileptr__json = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "w");
	fseek(struct__workspace__resource_rwdt.fileptr__json, 0, 0);
	for (;; ) {
		if (fgetc(struct__workspace__resource_rwdt.fileptr__json) == '{') {
			break;
		}
	}
	for (;; ) {
		if (fgetc(struct__workspace__resource_rwdt.fileptr__json) == '\"') {
			fseek(struct__workspace__resource_rwdt.fileptr__json, -1, 1);
			function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__variable.char_string__1, 8192);
			if (strcmp(struct__variable.char_string__1, "groups") == 0) {
				for (;; ) {
					if (fgetc(struct__workspace__resource_rwdt.fileptr__json) == '[') {
						break;
					}
				}
				break;
			}
		}
	}
	struct__workspace__resource_rwdt.group_sum = 1;
	for (;; ) {
		struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
		if (struct__variable.unsigned_char__1 == ']') {
			break;
		} else if (struct__variable.unsigned_char__1 == '{') {
			struct__keep_value.unsigned_int = ftell(struct__workspace__resource_rwdt.fileptr__json);
			struct__workspace__resource_rwdt.is_subgroup = 0;
			struct__workspace__resource_rwdt.subgroup__is_res = 0;
			struct__workspace__resource_rwdt.subgroup__is_loc = 0;
			function__string_empty(struct__workspace__resource_rwdt.subgroup__res, 5);
			function__string_empty(struct__workspace__resource_rwdt.subgroup__loc, 5);
			struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type = 0xF;
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
				if (struct__variable.unsigned_char__1 == '}') {
					if (struct__workspace__resource_rwdt.is_subgroup == 0) {
						struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].is_composite = 1;
						function__string_empty(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].id, 128);
						strcpy(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].id, struct__workspace__resource_rwdt.id);
						struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum = 0;
						if (struct__workspace__resource_rwdt.is_composite == 0) {
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].is_composite = 0;
							strcat(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].id, "_CompositeShell");
							function__string_empty(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__id[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum], 128);
							strcpy(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__id[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum], struct__workspace__resource_rwdt.id);
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__pgsr__subfile_pack__compress_type[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum] = struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type;
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__is_res[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum] = 0;
							function__string_empty(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__res[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum], 5);
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__is_loc[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum] = 0;
							function__string_empty(struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__res[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum], 5);
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__seek[struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum] = struct__keep_value.unsigned_int;
							struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum = struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_sum].subgroup__sum + 1;
						}
						struct__workspace__resource_rwdt.group_sum = struct__workspace__resource_rwdt.group_sum + 1;
					} else if (struct__workspace__resource_rwdt.is_subgroup == 1) {
						struct__variable.unsigned_int__1 = struct__workspace__resource_rwdt.group_sum;
						for (;; ) {
							if (struct__variable.unsigned_int__1 == 0) {
								break;
							}
							struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 - 1;
							if (strcmp(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].id, struct__workspace__resource_rwdt.parent) == 0) {
								function__string_empty(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__id[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], 128);
								strcpy(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__id[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], struct__workspace__resource_rwdt.id);
								struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__pgsr__subfile_pack__compress_type[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum] = struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type;
								struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__is_res[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum] = struct__workspace__resource_rwdt.subgroup__is_res;
								function__string_empty(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__res[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], 5);
								strcpy(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__res[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], struct__workspace__resource_rwdt.subgroup__res);
								struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__is_loc[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum] = struct__workspace__resource_rwdt.subgroup__is_loc;
								function__string_empty(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__loc[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], 5);
								strcpy(struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__loc[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum], struct__workspace__resource_rwdt.subgroup__loc);
								struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__seek[struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum] = struct__keep_value.unsigned_int;
								struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum = struct__resource_rwdt__group_info__pack[struct__variable.unsigned_int__1].subgroup__sum + 1;
								break;
							}
						}
					}
					break;
				} else if (struct__variable.unsigned_char__1 == '\"') {
					fseek(struct__workspace__resource_rwdt.fileptr__json, -1, 1);
					function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__variable.char_string__1, 8192);
					if (strcmp(struct__variable.char_string__1, "type") == 0) {
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__variable.char_string__1, 8192);
						if (strcmp(struct__variable.char_string__1, "composite") == 0) {
							struct__workspace__resource_rwdt.is_composite = 1;
						} else if (strcmp(struct__variable.char_string__1, "simple") == 0) {
							struct__workspace__resource_rwdt.is_composite = 0;
						}
					} else if (strcmp(struct__variable.char_string__1, "id") == 0) {
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.id, 128);
					} else if (strcmp(struct__variable.char_string__1, "parent") == 0) {
						struct__workspace__resource_rwdt.is_subgroup = 1;
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.parent, 128);
					} else if (strcmp(struct__variable.char_string__1, "res") == 0) {
						struct__workspace__resource_rwdt.subgroup__is_res = 1;
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.subgroup__res, 128);
					} else if (strcmp(struct__variable.char_string__1, "loc") == 0) {
						struct__workspace__resource_rwdt.subgroup__is_loc = 1;
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.subgroup__loc, 128);
					} else if (strcmp(struct__variable.char_string__1, "ct") == 0) {
						struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
					} else if (strcmp(struct__variable.char_string__1, "subgroups") == 0) {
						for (;; ) {
							if (fgetc(struct__workspace__resource_rwdt.fileptr__json) == ']') {
								break;
							}
						}
					} else if (strcmp(struct__variable.char_string__1, "resources") == 0) {
						struct__variable.unsigned_short__1 = 0;
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
							if (struct__variable.unsigned_char__1 == '{') {
								struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
							} else if (struct__variable.unsigned_char__1 == '}') {
								struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 - 1;
							} else if (struct__variable.unsigned_char__1 == '[') {
								struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
							} else if (struct__variable.unsigned_char__1 == ']') {
								struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 - 1;
								if (struct__variable.unsigned_short__1 == 0) {
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	struct__workspace__resource_rwdt.group_number = 1;
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	for (;; ) {
		if (struct__workspace__resource_rwdt.group_number == struct__workspace__resource_rwdt.group_sum) {
			break;
		}
		fprintf(struct__workspace__resource_rwdt.fileptr__text, "%s\tic.%.1u\n", struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].id, struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].is_composite);
		struct__workspace__resource_rwdt.subgroup_number = 0;
		for (;; ) {
			if (struct__workspace__resource_rwdt.subgroup_number == struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__sum) {
				break;
			}
			fprintf(struct__workspace__resource_rwdt.fileptr__text, "\t%s\tct.x%.1X", struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__id[struct__workspace__resource_rwdt.subgroup_number], struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__pgsr__subfile_pack__compress_type[struct__workspace__resource_rwdt.subgroup_number]);
			if (struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__is_res[struct__workspace__resource_rwdt.subgroup_number] == 1) {
				fprintf(struct__workspace__resource_rwdt.fileptr__text, "\tres.%s", struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__res[struct__workspace__resource_rwdt.subgroup_number]);
			}
			if (struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__is_loc[struct__workspace__resource_rwdt.subgroup_number] == 1) {
				fprintf(struct__workspace__resource_rwdt.fileptr__text, "\tloc.%s", struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__loc[struct__workspace__resource_rwdt.subgroup_number]);
			}
			fprintf(struct__workspace__resource_rwdt.fileptr__text, "\n");
			fseek(struct__workspace__resource_rwdt.fileptr__json, struct__resource_rwdt__group_info__pack[struct__workspace__resource_rwdt.group_number].subgroup__seek[struct__workspace__resource_rwdt.subgroup_number], 0);
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
				if (struct__variable.unsigned_char__1 == '}') {
					break;
				} else if (struct__variable.unsigned_char__1 == '\"') {
					fseek(struct__workspace__resource_rwdt.fileptr__json, -1, 1);
					function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__variable.char_string__1, 8192);
					if (strcmp(struct__variable.char_string__1, "id") == 0) {
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.id, 128);
					} else if (strcmp(struct__variable.char_string__1, "parent") == 0) {
						function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.parent, 128);
					} else if (strcmp(struct__variable.char_string__1, "resources") == 0) {
						struct__workspace__resource_rwdt.resource_sum = 0;
						struct__variable.unsigned_int__1 = 0;
						for (;; ) {
							struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
							if (struct__variable.unsigned_char__1 == '{') {
								if (struct__variable.unsigned_int__1 == 1) {
									function__string_empty(struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].id, 256);
									function__string_empty(struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].path, 256);
									function__string_empty(struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].parent, 256);
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_atlas = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_subimage = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].pixel_format = 0xFF;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].width = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].height = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ax = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ay = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].aw = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ah = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].x = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].y = 0;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_unnecessary = 0;
								}
								struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
							} else if (struct__variable.unsigned_char__1 == '}') {
								struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 - 1;
								if (struct__variable.unsigned_int__1 == 1) {
									struct__workspace__resource_rwdt.resource_sum = struct__workspace__resource_rwdt.resource_sum + 1;
								}
							} else if (struct__variable.unsigned_char__1 == '[') {
								struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
							} else if (struct__variable.unsigned_char__1 == ']') {
								struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 - 1;
								if (struct__variable.unsigned_int__1 == 0) {
									break;
								}
							} else if (struct__variable.unsigned_char__1 == '\"') {
								fseek(struct__workspace__resource_rwdt.fileptr__json, -1, 1);
								function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__variable.char_string__1, 8192);
								if (strcmp(struct__variable.char_string__1, "path") == 0) {
									struct__variable.unsigned_short__1 = 0;
									for (;; ) {
										if (fgetc(struct__workspace__resource_rwdt.fileptr__json) == '[') {
											break;
										}
									}
									for (;; ) {
										struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
										if (struct__variable.unsigned_char__1 == ']') {
											struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].path[struct__variable.unsigned_short__1 - 1] = '\0';
											break;
										} else if (struct__variable.unsigned_char__1 == '\"') {
											for (;; ) {
												struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__json);
												if (struct__variable.unsigned_char__1 == '\"') {
													struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].path[struct__variable.unsigned_short__1] = '\\';
													struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
													break;
												}
												struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].path[struct__variable.unsigned_short__1] = struct__variable.unsigned_char__1;
												struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
											}
										}
									}
								} else if (strcmp(struct__variable.char_string__1, "id") == 0) {
									function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].id, 256);
								} else if (strcmp(struct__variable.char_string__1, "parent") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_subimage = 1;
									function__resource_rwdt__get_json_string(struct__workspace__resource_rwdt.fileptr__json, struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].parent, 256);
								} else if (strcmp(struct__variable.char_string__1, "pf") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_atlas = 1;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].pixel_format = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "width") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_atlas = 1;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].width = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "height") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_atlas = 1;
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].height = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "ax") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ax = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "ay") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ay = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "aw") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].aw = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "ah") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].ah = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "x") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].x = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "y") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].y = function__resource_rwdt__get_json_int(struct__workspace__resource_rwdt.fileptr__json);
								} else if (strcmp(struct__variable.char_string__1, "origpath") == 0) {
									struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_sum].is_unnecessary = 1;
								}
							}
						}
					}
				}
			}
			struct__workspace__resource_rwdt.resource_number = 0;
			for (;; ) {
				if (struct__workspace__resource_rwdt.resource_number == struct__workspace__resource_rwdt.resource_sum) {
					break;
				}
				if (struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].is_unnecessary == 0) {
					if ((struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].is_atlas == 0) && (struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].is_subimage == 0)) {
						fprintf(struct__workspace__resource_rwdt.fileptr__text, "\t\t%s\n", struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].path);
					} else if (struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].is_atlas == 1) {
						fprintf(struct__workspace__resource_rwdt.fileptr__text, "\t\t%s\tpf.x%.2X\t%.4u\t%.4u\n", struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].path, struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].pixel_format, struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].width, struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].height);
						struct__variable.unsigned_int__1 = 0;
						for (;; ) {
							if (struct__variable.unsigned_int__1 == struct__workspace__resource_rwdt.resource_sum) {
								break;
							}
							if (struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].is_subimage == 1) {
								if (strcmp(struct__resource_rwdt__resource_info__pack[struct__workspace__resource_rwdt.resource_number].id, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].parent) == 0) {
									if (struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].is_unnecessary == 0) {
										fprintf(struct__workspace__resource_rwdt.fileptr__text, "\t\t\t%s\n\t\t\t\t%.4u\t%.4u\t%.4u\t%.4u\t%.4u\t%.4u\n", struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].path, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].ax, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].ay, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].aw, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].ah, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].x, struct__resource_rwdt__resource_info__pack[struct__variable.unsigned_int__1].y);
									}
								}
							}
							struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
						}
					}
				}
				struct__workspace__resource_rwdt.resource_number = struct__workspace__resource_rwdt.resource_number + 1;
			}
			struct__workspace__resource_rwdt.subgroup_number = struct__workspace__resource_rwdt.subgroup_number + 1;
		}
		struct__workspace__resource_rwdt.group_number = struct__workspace__resource_rwdt.group_number + 1;
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__json);
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
}

static void function__resource_rwdt__text_to_json() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".json");
	struct__workspace__resource_rwdt.fileptr__json = fopen(struct__variable.char_string__1, "w");
	fseek(struct__workspace__resource_rwdt.fileptr__json, 0, 0);
	struct__workspace__resource_rwdt.object_array__level = 0;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %d,", "version", 1);
	}
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : ", "groups");
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '[');
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
	struct__workspace__resource_rwdt.resource_number = 1;
	struct__workspace__resource_rwdt.resource__slot_sum = struct__function_parameter.resource_rwdt__slot_start;
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		function__string_empty(struct__resource_rwdt__group_info.id, 128);
		fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s\tic.%1u", struct__resource_rwdt__group_info.id, &struct__resource_rwdt__group_info.is_composite);
		fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
		struct__resource_rwdt__group_info.subgroup__sum = 0;
		for (;; ) {
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
				if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 0) {
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				}
				break;
			}
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
				fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				function__string_empty(struct__resource_rwdt__group_info.subgroup__id[struct__resource_rwdt__group_info.subgroup__sum], 128);
				struct__resource_rwdt__group_info.subgroup__pgsr__subfile_pack__compress_type[struct__resource_rwdt__group_info.subgroup__sum] = 0xF;
				struct__resource_rwdt__group_info.subgroup__is_res[struct__resource_rwdt__group_info.subgroup__sum] = 0;
				function__string_empty(struct__resource_rwdt__group_info.subgroup__res[struct__resource_rwdt__group_info.subgroup__sum], 5);
				struct__resource_rwdt__group_info.subgroup__is_loc[struct__resource_rwdt__group_info.subgroup__sum] = 0;
				function__string_empty(struct__resource_rwdt__group_info.subgroup__loc[struct__resource_rwdt__group_info.subgroup__sum], 5);
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s\tct.x%1X", struct__resource_rwdt__group_info.subgroup__id[struct__resource_rwdt__group_info.subgroup__sum], &struct__resource_rwdt__group_info.subgroup__pgsr__subfile_pack__compress_type[struct__resource_rwdt__group_info.subgroup__sum]);
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
					fscanf(struct__workspace__resource_rwdt.fileptr__text, "%3s.", struct__variable.char_string__1);
					if (strcmp(struct__variable.char_string__1, "res") == 0) {
						struct__resource_rwdt__group_info.subgroup__is_res[struct__resource_rwdt__group_info.subgroup__sum] = 1;
						fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s", struct__resource_rwdt__group_info.subgroup__res[struct__resource_rwdt__group_info.subgroup__sum]);
					} else if (strcmp(struct__variable.char_string__1, "loc") == 0) {
						struct__resource_rwdt__group_info.subgroup__is_loc[struct__resource_rwdt__group_info.subgroup__sum] = 1;
						fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s", struct__resource_rwdt__group_info.subgroup__loc[struct__resource_rwdt__group_info.subgroup__sum]);
					}
					fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
				}
				struct__resource_rwdt__group_info.subgroup__seek[struct__resource_rwdt__group_info.subgroup__sum] = ftell(struct__workspace__resource_rwdt.fileptr__text);
				struct__resource_rwdt__group_info.subgroup__sum = struct__resource_rwdt__group_info.subgroup__sum + 1;
			}
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
					break;
				}
			}
		}
		if (struct__resource_rwdt__group_info.is_composite == 1) {
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "type", "composite");
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "id", struct__resource_rwdt__group_info.id);
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : ", "subgroups");
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '[');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__resource_rwdt__group_info.subgroup__sum) {
					break;
				}
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
				struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "id", struct__resource_rwdt__group_info.subgroup__id[struct__variable.unsigned_int__1]);
				if (struct__resource_rwdt__group_info.subgroup__is_res[struct__variable.unsigned_int__1] == 1) {
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "res", struct__resource_rwdt__group_info.subgroup__res[struct__variable.unsigned_int__1]);
				} else if (struct__resource_rwdt__group_info.subgroup__is_loc[struct__variable.unsigned_int__1] == 1) {
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "loc", struct__resource_rwdt__group_info.subgroup__loc[struct__variable.unsigned_int__1]);
				}
				struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", ']');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
		}
		struct__workspace__resource_rwdt.subgroup_number = 0;
		for (;; ) {
			if (struct__workspace__resource_rwdt.subgroup_number == struct__resource_rwdt__group_info.subgroup__sum) {
				break;
			}
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "type", "simple");
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "id", struct__resource_rwdt__group_info.subgroup__id[struct__workspace__resource_rwdt.subgroup_number]);
			if (struct__resource_rwdt__group_info.is_composite == 1) {
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "parent", struct__resource_rwdt__group_info.id);
			}
			if (struct__resource_rwdt__group_info.subgroup__is_res[struct__workspace__resource_rwdt.subgroup_number] == 1) {
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "res", struct__resource_rwdt__group_info.subgroup__res[struct__workspace__resource_rwdt.subgroup_number]);
			} else if (struct__resource_rwdt__group_info.subgroup__is_loc[struct__workspace__resource_rwdt.subgroup_number] == 1) {
				function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
				fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "loc", struct__resource_rwdt__group_info.subgroup__loc[struct__workspace__resource_rwdt.subgroup_number]);
			}
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "ct", struct__resource_rwdt__group_info.subgroup__pgsr__subfile_pack__compress_type[struct__workspace__resource_rwdt.subgroup_number]);
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : ", "resources");
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '[');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
			fseek(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__group_info.subgroup__seek[struct__workspace__resource_rwdt.subgroup_number], 0);
			struct__workspace__resource_rwdt.resource__atlas_sum = 0;
			for (;; ) {
				fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
					if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 0) {
						fseek(struct__workspace__resource_rwdt.fileptr__text, -2, 1);
					}
					break;
				}
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
					for (;; ) {
						if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
							break;
						}
					}
				} else {
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
					function__string_empty(struct__resource_rwdt__resource_info.id, 256);
					function__string_empty(struct__resource_rwdt__resource_info.type, 16);
					function__string_empty(struct__resource_rwdt__resource_info.path, 256);
					function__string_empty(struct__resource_rwdt__resource_info.parent, 256);
					struct__resource_rwdt__resource_info.is_atlas = 0;
					struct__resource_rwdt__resource_info.is_subimage = 0;
					struct__resource_rwdt__resource_info.pixel_format = 0xFF;
					struct__resource_rwdt__resource_info.width = 0;
					struct__resource_rwdt__resource_info.height = 0;
					struct__resource_rwdt__resource_info.ax = 0;
					struct__resource_rwdt__resource_info.ay = 0;
					struct__resource_rwdt__resource_info.aw = 0;
					struct__resource_rwdt__resource_info.ah = 0;
					struct__resource_rwdt__resource_info.x = 0;
					struct__resource_rwdt__resource_info.y = 0;
					function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
					if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
						function__string_empty(struct__workspace__resource_rwdt.resource__atlas_path__pack[struct__workspace__resource_rwdt.resource__atlas_sum], 256);
						strcpy(struct__workspace__resource_rwdt.resource__atlas_path__pack[struct__workspace__resource_rwdt.resource__atlas_sum], struct__resource_rwdt__resource_info.path);
						fscanf(struct__workspace__resource_rwdt.fileptr__text, "pf.x%2X\t%4u\t%4u", &struct__resource_rwdt__resource_info.pixel_format, &struct__resource_rwdt__resource_info.width, &struct__resource_rwdt__resource_info.height);
						fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
						struct__workspace__resource_rwdt.resource__atlas_seek__pack[struct__workspace__resource_rwdt.resource__atlas_sum] = ftell(struct__workspace__resource_rwdt.fileptr__text);
						struct__workspace__resource_rwdt.resource__atlas_sum = struct__workspace__resource_rwdt.resource__atlas_sum + 1;
					}
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					function__string_empty(struct__variable.char_string__1, 8192);
					struct__variable.unsigned_short__1 = 0;
					for (;; ) {
						if ((struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__1] == '\\') || (struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__1] == '\0')) {
							break;
						}
						struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__1];
						struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
					}
					if (strcmp(struct__variable.char_string__1, "!program") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "Image");
						strcpy(struct__resource_rwdt__resource_info.id, "IMAGE_DUMMY_");
						strcat(struct__resource_rwdt__resource_info.id, struct__resource_rwdt__group_info.subgroup__id[struct__workspace__resource_rwdt.subgroup_number]);
						function__string_uppercase(struct__resource_rwdt__resource_info.id);
					} else if (strcmp(struct__variable.char_string__1, "properties") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "File");
						strcpy(struct__resource_rwdt__resource_info.id, "RESFILE_PROPERTIES_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "packages") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "File");
						strcpy(struct__resource_rwdt__resource_info.id, "RESFILE_PACKAGES_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "locales") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "File");
						strcpy(struct__resource_rwdt__resource_info.id, "RESFILE_PROPERTIES_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 3, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "soundbanks") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "SoundBank");
						strcpy(struct__resource_rwdt__resource_info.id, "SOUNDBANK_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "streamingwaves") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "File");
						strcpy(struct__resource_rwdt__resource_info.id, "RESFILE_STREAMINGWAVES_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "effects") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "RenderEffect");
						strcpy(struct__resource_rwdt__resource_info.id, "EFFECT_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "primefonts") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "PrimeFont");
						strcpy(struct__resource_rwdt__resource_info.id, "");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "atlases") == 0) {
						struct__resource_rwdt__resource_info.is_atlas = 1;
						strcpy(struct__resource_rwdt__resource_info.type, "Image");
						strcpy(struct__resource_rwdt__resource_info.id, "ATLASIMAGE_ATLAS_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 1, strlen(struct__resource_rwdt__resource_info.id), 0);
					} else if (strcmp(struct__variable.char_string__1, "images") == 0) {
						strcpy(struct__resource_rwdt__resource_info.type, "PopAnim");
						strcpy(struct__resource_rwdt__resource_info.id, "POPANIM_");
						function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 3, strlen(struct__resource_rwdt__resource_info.id), 1);
					}
					function__string_empty(struct__workspace__resource_rwdt.resource__id__pack[struct__workspace__resource_rwdt.resource_number], 256);
					strcpy(struct__workspace__resource_rwdt.resource__id__pack[struct__workspace__resource_rwdt.resource_number], struct__resource_rwdt__resource_info.id);
					struct__variable.unsigned_int__1 = struct__workspace__resource_rwdt.resource_number;
					for (;; ) {
						struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 - 1;
						if (struct__variable.unsigned_int__1 == 0) {
							struct__resource_rwdt__resource_info.slot = struct__workspace__resource_rwdt.resource__slot_sum;
							struct__workspace__resource_rwdt.resource__slot_sum = struct__workspace__resource_rwdt.resource__slot_sum + 1;
							break;
						}
						if (strcmp(struct__resource_rwdt__resource_info.id, struct__workspace__resource_rwdt.resource__id__pack[struct__variable.unsigned_int__1]) == 0) {
							struct__resource_rwdt__resource_info.slot = struct__workspace__resource_rwdt.resource__slot__pack[struct__variable.unsigned_int__1];
							break;
						}
					}
					struct__workspace__resource_rwdt.resource__slot__pack[struct__workspace__resource_rwdt.resource_number] = struct__resource_rwdt__resource_info.slot;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "slot", struct__resource_rwdt__resource_info.slot);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "type", struct__resource_rwdt__resource_info.type);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "id", struct__resource_rwdt__resource_info.id);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : ", "path");
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '[');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					struct__variable.unsigned_short__2 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__2 >= strlen(struct__resource_rwdt__resource_info.path)) {
							break;
						}
						function__string_empty(struct__variable.char_string__1, 8192);
						struct__variable.unsigned_short__1 = 0;
						for (;; ) {
							if ((struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2] == '\\') || (struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2] == '\0')) {
								struct__variable.unsigned_short__2 = struct__variable.unsigned_short__2 + 1;
								break;
							}
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2];
							struct__variable.unsigned_short__2 = struct__variable.unsigned_short__2 + 1;
							struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
						}
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\",", struct__variable.char_string__1);
					}
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", ']');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					if (struct__resource_rwdt__resource_info.is_atlas == 1) {
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : true,", "atlas");
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "pf", struct__resource_rwdt__resource_info.pixel_format);
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "width", struct__resource_rwdt__resource_info.width);
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "height", struct__resource_rwdt__resource_info.height);
					}
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
					struct__workspace__resource_rwdt.resource_number = struct__workspace__resource_rwdt.resource_number + 1;
				}
			}
			struct__workspace__resource_rwdt.resource__atlas_number = 0;
			for (;; ) {
				if (struct__workspace__resource_rwdt.resource__atlas_number == struct__workspace__resource_rwdt.resource__atlas_sum) {
					break;
				}
				function__string_empty(struct__resource_rwdt__resource_info.id, 256);
				function__string_empty(struct__resource_rwdt__resource_info.type, 16);
				function__string_empty(struct__resource_rwdt__resource_info.path, 256);
				function__string_empty(struct__resource_rwdt__resource_info.parent, 256);
				struct__resource_rwdt__resource_info.is_atlas = 0;
				struct__resource_rwdt__resource_info.is_subimage = 0;
				struct__resource_rwdt__resource_info.pixel_format = 0xFF;
				struct__resource_rwdt__resource_info.width = 0;
				struct__resource_rwdt__resource_info.height = 0;
				struct__resource_rwdt__resource_info.ax = 0;
				struct__resource_rwdt__resource_info.ay = 0;
				struct__resource_rwdt__resource_info.aw = 0;
				struct__resource_rwdt__resource_info.ah = 0;
				struct__resource_rwdt__resource_info.x = 0;
				struct__resource_rwdt__resource_info.y = 0;
				strcpy(struct__resource_rwdt__resource_info.parent, "ATLASIMAGE_ATLAS_");
				function__resource_rwdt__path_to_id(struct__workspace__resource_rwdt.resource__atlas_path__pack[struct__workspace__resource_rwdt.resource__atlas_number], struct__resource_rwdt__resource_info.parent, 1, strlen(struct__resource_rwdt__resource_info.parent), 0);
				strcpy(struct__resource_rwdt__resource_info.type, "Image");
				fseek(struct__workspace__resource_rwdt.fileptr__text, struct__workspace__resource_rwdt.resource__atlas_seek__pack[struct__workspace__resource_rwdt.resource__atlas_number], 0);
				for (;; ) {
					if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
						break;
					}
					fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
					if ((fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') || (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t')) {
						fseek(struct__workspace__resource_rwdt.fileptr__text, -2, 1);
						break;
					}
					function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
					fseek(struct__workspace__resource_rwdt.fileptr__text, +4, 1);
					fscanf(struct__workspace__resource_rwdt.fileptr__text, "%4u\t%4u\t%4u\t%4u\t%4u\t%4u", &struct__resource_rwdt__resource_info.ax, &struct__resource_rwdt__resource_info.ay, &struct__resource_rwdt__resource_info.aw, &struct__resource_rwdt__resource_info.ah, &struct__resource_rwdt__resource_info.x, &struct__resource_rwdt__resource_info.y);
					fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '{');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					function__string_empty(struct__resource_rwdt__resource_info.id, 256);
					strcpy(struct__resource_rwdt__resource_info.id, "IMAGE_");
					function__resource_rwdt__path_to_id(struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.id, 3, strlen(struct__resource_rwdt__resource_info.id), 0);
					function__string_empty(struct__workspace__resource_rwdt.resource__id__pack[struct__workspace__resource_rwdt.resource_number], 256);
					strcpy(struct__workspace__resource_rwdt.resource__id__pack[struct__workspace__resource_rwdt.resource_number], struct__resource_rwdt__resource_info.id);
					struct__variable.unsigned_int__1 = struct__workspace__resource_rwdt.resource_number - 1;
					for (;; ) {
						struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 - 1;
						if (struct__variable.unsigned_int__1 == 0) {
							struct__resource_rwdt__resource_info.slot = struct__workspace__resource_rwdt.resource__slot_sum;
							struct__workspace__resource_rwdt.resource__slot_sum = struct__workspace__resource_rwdt.resource__slot_sum + 1;
							break;
						}
						if (strcmp(struct__resource_rwdt__resource_info.id, struct__workspace__resource_rwdt.resource__id__pack[struct__variable.unsigned_int__1]) == 0) {
							struct__resource_rwdt__resource_info.slot = struct__workspace__resource_rwdt.resource__slot__pack[struct__variable.unsigned_int__1];
							break;
						}
					}
					struct__workspace__resource_rwdt.resource__slot__pack[struct__workspace__resource_rwdt.resource_number] = struct__resource_rwdt__resource_info.slot;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "slot", struct__resource_rwdt__resource_info.slot);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "type", struct__resource_rwdt__resource_info.type);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "id", struct__resource_rwdt__resource_info.id);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : ", "path");
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c", '[');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level + 1;
					struct__variable.unsigned_short__2 = 0;
					for (;; ) {
						if (struct__variable.unsigned_short__2 >= strlen(struct__resource_rwdt__resource_info.path)) {
							break;
						}
						function__string_empty(struct__variable.char_string__1, 8192);
						struct__variable.unsigned_short__1 = 0;
						for (;; ) {
							if ((struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2] == '\\') || (struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2] == '\0')) {
								struct__variable.unsigned_short__2 = struct__variable.unsigned_short__2 + 1;
								break;
							}
							struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__resource_rwdt__resource_info.path[struct__variable.unsigned_short__2];
							struct__variable.unsigned_short__2 = struct__variable.unsigned_short__2 + 1;
							struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
						}
						function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
						fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\",", struct__variable.char_string__1);
					}
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", ']');
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : \"%s\",", "parent", struct__resource_rwdt__resource_info.parent);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "ax", struct__resource_rwdt__resource_info.ax);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "ay", struct__resource_rwdt__resource_info.ay);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "aw", struct__resource_rwdt__resource_info.aw);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "ah", struct__resource_rwdt__resource_info.ah);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "x", struct__resource_rwdt__resource_info.x);
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "y", struct__resource_rwdt__resource_info.y);
					struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
					function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
					fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
					struct__workspace__resource_rwdt.resource_number = struct__workspace__resource_rwdt.resource_number + 1;
				}
				struct__workspace__resource_rwdt.resource__atlas_number = struct__workspace__resource_rwdt.resource__atlas_number + 1;
			}
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", ']');
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
			function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
			fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
			struct__workspace__resource_rwdt.subgroup_number = struct__workspace__resource_rwdt.subgroup_number + 1;
		}
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", ']');
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "\"%s\" : %u,", "slot_count", struct__workspace__resource_rwdt.resource__slot_sum);
	}
	struct__workspace__resource_rwdt.object_array__level = struct__workspace__resource_rwdt.object_array__level - 1;
	if (struct__function_parameter.resource_rwdt__is_full == 1) {
		function__put_tab(struct__workspace__resource_rwdt.fileptr__json, struct__workspace__resource_rwdt.object_array__level);
		fprintf(struct__workspace__resource_rwdt.fileptr__json, "%c,", '}');
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__json);
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
}

static void function__resource_rwdt__set_ukv_to_text() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r+");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".resource_list");
	struct__workspace__resource_rwdt.fileptr__resource_list = fopen(struct__variable.char_string__1, "r");
	struct__workspace__resource_rwdt.subgroup_sum = 0;
	struct__workspace__resource_rwdt.resource_sum = 0;
	fseek(struct__workspace__resource_rwdt.fileptr__resource_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__resource_list) == 1) {
			break;
		}
		if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) == '\t') {
			if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) != '\t') {
				fseek(struct__workspace__resource_rwdt.fileptr__resource_list, -1, 1);
				function__string_empty(struct__workspace__resource_rwdt.subgroup__id__pack[struct__workspace__resource_rwdt.subgroup_sum], 256);
				fscanf(struct__workspace__resource_rwdt.fileptr__resource_list, "%s\tct.x%1X", struct__workspace__resource_rwdt.subgroup__id__pack[struct__workspace__resource_rwdt.subgroup_sum], &struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type__pack[struct__workspace__resource_rwdt.subgroup_sum]);
				struct__workspace__resource_rwdt.subgroup_sum = struct__workspace__resource_rwdt.subgroup_sum + 1;
				for (;; ) {
					if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) == '\n') {
						break;
					}
				}
			} else {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) != '\t') {
					fseek(struct__workspace__resource_rwdt.fileptr__resource_list, -1, 1);
					function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__resource_list, struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum], 256);
					function__string_uppercase(struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum]);
					if ((struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum][strlen(struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum]) - 3] == 'P') && (struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum][strlen(struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum]) - 2] == 'T') && (struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum][strlen(struct__workspace__resource_rwdt.resource__path__pack[struct__workspace__resource_rwdt.resource_sum]) - 1] == 'X')) {
						fseek(struct__workspace__resource_rwdt.fileptr__resource_list, +3, 1);
						fscanf(struct__workspace__resource_rwdt.fileptr__resource_list, "0x%2X", &struct__workspace__resource_rwdt.resource__pixel_format__pack[struct__workspace__resource_rwdt.resource_sum]);
						struct__workspace__resource_rwdt.resource_sum = struct__workspace__resource_rwdt.resource_sum + 1;
						fscanf(struct__workspace__resource_rwdt.fileptr__resource_list, "\t%*4u\t%*4u");
						fseek(struct__workspace__resource_rwdt.fileptr__resource_list, +1, 1);
					}
				} else {
					if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__resource_list) == 1) {
						break;
					}
					for (;; ) {
						if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) == '\n') {
							break;
						}
					}
				}
			}
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__resource_list) == '\n') {
					break;
				}
			}
		}
	}
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
				fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				function__string_empty(struct__variable.char_string__1, 8192);
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s", struct__variable.char_string__1);
				struct__keep_value.unsigned_int = ftell(struct__workspace__resource_rwdt.fileptr__text);
				struct__variable.unsigned_int__1 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__resource_rwdt.subgroup_sum) {
						break;
					}
					if (strcmp(struct__workspace__resource_rwdt.subgroup__id__pack[struct__variable.unsigned_int__1], struct__variable.char_string__1) == 0) {
						fseek(struct__workspace__resource_rwdt.fileptr__text, struct__keep_value.unsigned_int, 0);
						fprintf(struct__workspace__resource_rwdt.fileptr__text, "\tct.x%.1X", struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type__pack[struct__variable.unsigned_int__1]);
						fseek(struct__workspace__resource_rwdt.fileptr__text, struct__keep_value.unsigned_int + 6, 0);
						break;
					}
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
				for (;; ) {
					if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
						break;
					}
				}
			} else {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
					function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__variable.char_string__1, 8192);
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
					if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
						strcat(struct__variable.char_string__1, ".ptx");
						function__string_uppercase(struct__variable.char_string__1);
						struct__keep_value.unsigned_int = ftell(struct__workspace__resource_rwdt.fileptr__text);
						struct__variable.unsigned_int__1 = 0;
						for (;; ) {
							if (struct__variable.unsigned_int__1 == struct__workspace__resource_rwdt.resource_sum) {
								break;
							}
							if (strcmp(struct__workspace__resource_rwdt.resource__path__pack[struct__variable.unsigned_int__1], struct__variable.char_string__1) == 0) {
								fseek(struct__workspace__resource_rwdt.fileptr__text, struct__keep_value.unsigned_int, 0);
								fprintf(struct__workspace__resource_rwdt.fileptr__text, "pf.x%.2X", struct__workspace__resource_rwdt.resource__pixel_format__pack[struct__variable.unsigned_int__1]);
								fseek(struct__workspace__resource_rwdt.fileptr__text, struct__keep_value.unsigned_int + 5, 0);
								break;
							}
							struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
						}
						for (;; ) {
							if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
								break;
							}
						}
					}
				} else {
					if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
						break;
					}
					for (;; ) {
						if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
							break;
						}
					}
				}
			}
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	function__file_close(struct__workspace__resource_rwdt.fileptr__resource_list);
}

static void function__resource_rwdt__text_lite() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, "_");
	if (struct__function_parameter.resource_rwdt__put_1536 == 1) {
		strcat(struct__variable.char_string__1, "_x1536");
	}
	if (struct__function_parameter.resource_rwdt__put_768 == 1) {
		strcat(struct__variable.char_string__1, "_x768");
	}
	if (struct__function_parameter.resource_rwdt__put_384 == 1) {
		strcat(struct__variable.char_string__1, "_x384");
	}
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__subtext = fopen(struct__variable.char_string__1, "w");
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	fseek(struct__workspace__resource_rwdt.fileptr__subtext, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__text);
		struct__variable.unsigned_char__2 = fgetc(struct__workspace__resource_rwdt.fileptr__text);
		if ((struct__variable.unsigned_char__1 == '\t') && (struct__variable.unsigned_char__2 != '\t')) {
			fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
			function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
			fscanf(struct__workspace__resource_rwdt.fileptr__text, "ct.x%1X", &struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type);
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "%3s.%s", struct__variable.char_string__1, struct__variable.char_string__2);
				fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
				if (strcmp(struct__variable.char_string__1, "res") == 0) {
					if (((strcmp(struct__variable.char_string__2, "1536") == 0) && (struct__function_parameter.resource_rwdt__put_1536 == 0)) || ((strcmp(struct__variable.char_string__2, "768") == 0) && (struct__function_parameter.resource_rwdt__put_768 == 0)) || ((strcmp(struct__variable.char_string__2, "384") == 0) && (struct__function_parameter.resource_rwdt__put_384 == 0))) {
						for (;; ) {
							fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
							if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
								if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 0) {
									fseek(struct__workspace__resource_rwdt.fileptr__text, -2, 1);
								}
								break;
							} else {
								for (;; ) {
									if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
										break;
									}
								}
							}
						}
					} else {
						fprintf(struct__workspace__resource_rwdt.fileptr__subtext, "\t%s\tct.x%.1X\t%.3s.%s\n", struct__resource_rwdt__resource_info.path, struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type, struct__variable.char_string__1, struct__variable.char_string__2);
					}
				} else if (strcmp(struct__variable.char_string__1, "loc") == 0) {
					fprintf(struct__workspace__resource_rwdt.fileptr__subtext, "\t%s\tct.x%.1X\t%.3s.%s\n", struct__resource_rwdt__resource_info.path, struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type, struct__variable.char_string__1, struct__variable.char_string__2);
				}
			} else {
				fprintf(struct__workspace__resource_rwdt.fileptr__subtext, "\t%s\tct.x%.1X\n", struct__resource_rwdt__resource_info.path, struct__workspace__resource_rwdt.subgroup__pgsr__subfile_pack__compress_type);
			}
		} else {
			fprintf(struct__workspace__resource_rwdt.fileptr__subtext, "%c%c", struct__variable.unsigned_char__1, struct__variable.unsigned_char__2);
			for (;; ) {
				struct__variable.unsigned_char__1 = fgetc(struct__workspace__resource_rwdt.fileptr__text);
				fprintf(struct__workspace__resource_rwdt.fileptr__subtext, "%c", struct__variable.unsigned_char__1);
				if (struct__variable.unsigned_char__1 == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	function__file_close(struct__workspace__resource_rwdt.fileptr__subtext);
}

static void function__resource_rwdt__text_unpack() {
	function__string_empty(struct__workspace__resource_rwdt.oripath__text, 8192);
	getcwd(struct__workspace__resource_rwdt.oripath__text, sizeof(struct__workspace__resource_rwdt.oripath__text));
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, "__unpack");
	mkdir(struct__variable.char_string__1);
	chdir(struct__variable.char_string__1);
	struct__workspace__resource_rwdt.fileptr__subtext_list = fopen("subtext_list", "w");
	mkdir("subtext_pack");
	chdir("subtext_pack");
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		struct__keep_value.unsigned_int = ftell(struct__workspace__resource_rwdt.fileptr__text);
		function__string_empty(struct__variable.char_string__1, 8192);
		fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s\tic.%*1u", struct__variable.char_string__1);
		fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
		for (;; ) {
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
				if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 0) {
					fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				}
				break;
			}
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
					break;
				}
			}
		}
		fprintf(struct__workspace__resource_rwdt.fileptr__subtext_list, "%s\n", struct__variable.char_string__1);
		strcat(struct__variable.char_string__1, ".txt");
		struct__workspace__resource_rwdt.fileptr__subtext = fopen(struct__variable.char_string__1, "w");
		function__data_copy(struct__workspace__resource_rwdt.fileptr__text, struct__workspace__resource_rwdt.fileptr__subtext, struct__keep_value.unsigned_int, ftell(struct__workspace__resource_rwdt.fileptr__text) - struct__keep_value.unsigned_int);
		function__file_close(struct__workspace__resource_rwdt.fileptr__subtext);
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__subtext_list);
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	chdir(struct__workspace__resource_rwdt.oripath__text);
}

static void function__resource_rwdt__text_pack() {
	function__string_empty(struct__workspace__resource_rwdt.oripath__text, 8192);
	getcwd(struct__workspace__resource_rwdt.oripath__text, sizeof(struct__workspace__resource_rwdt.oripath__text));
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "w");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, "__unpack");
	chdir(struct__variable.char_string__1);
	struct__workspace__resource_rwdt.fileptr__subtext_list = fopen("subtext_list", "r");
	chdir("subtext_pack");
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__subtext_list) == 1) {
			break;
		}
		function__string_empty(struct__variable.char_string__1, 8192);
		fscanf(struct__workspace__resource_rwdt.fileptr__subtext_list, "%s", struct__variable.char_string__1);
		fseek(struct__workspace__resource_rwdt.fileptr__subtext_list, +1, 1);
		strcat(struct__variable.char_string__1, ".txt");
		struct__workspace__resource_rwdt.fileptr__subtext = fopen(struct__variable.char_string__1, "r");
		fseek(struct__workspace__resource_rwdt.fileptr__subtext, 0, 2);
		function__data_copy(struct__workspace__resource_rwdt.fileptr__subtext, struct__workspace__resource_rwdt.fileptr__text, 0, ftell(struct__workspace__resource_rwdt.fileptr__subtext));
		function__file_close(struct__workspace__resource_rwdt.fileptr__subtext);
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__subtext_list);
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	chdir(struct__workspace__resource_rwdt.oripath__text);
}

static void function__resource_rwdt__text_to_resource_list() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".resource_list");
	struct__workspace__resource_rwdt.fileptr__resource_list = fopen(struct__variable.char_string__1, "w");
	struct__workspace__resource_rwdt.fileptr__pixel_formay__list = fopen("__pixel_format__list", "r");
	fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__pixel_formay__list) == 1) {
			break;
		}
		fscanf(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, "0x%2X", &struct__variable.unsigned_char__1);
		fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, +1, 1);
		function__string_empty(struct__workspace__resource_rwdt.string__pixel_format[struct__variable.unsigned_char__1], 16);
		fscanf(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, "%s", struct__workspace__resource_rwdt.string__pixel_format[struct__variable.unsigned_char__1]);
		fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, +1, 1);
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__pixel_formay__list);
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	fseek(struct__workspace__resource_rwdt.fileptr__resource_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
			fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
			function__string_empty(struct__variable.char_string__1, 8192);
			fscanf(struct__workspace__resource_rwdt.fileptr__text, "%s\tic.%*u", struct__variable.char_string__1);
			fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
			fprintf(struct__workspace__resource_rwdt.fileptr__resource_list, "%s\n", struct__variable.char_string__1);
		} else if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
			fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
			function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__variable.char_string__1, 8192);
			fscanf(struct__workspace__resource_rwdt.fileptr__text, "ct.x%1X", &struct__variable.unsigned_char__1);
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "%*3s.%*s");
				fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
			}
			fprintf(struct__workspace__resource_rwdt.fileptr__resource_list, "\t%s\tct.x%.1X\n", struct__variable.char_string__1, struct__variable.unsigned_char__1);
		} else if (fgetc(struct__workspace__resource_rwdt.fileptr__text) != '\t') {
			fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
			function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
			fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "pf.x%2X\t%4u\t%4u", &struct__resource_rwdt__resource_info.pixel_format, &struct__resource_rwdt__resource_info.width, &struct__resource_rwdt__resource_info.height);
				fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
				strcat(struct__resource_rwdt__resource_info.path, ".ptx");
				if ((strcmp(struct__workspace__resource_rwdt.string__pixel_format[struct__resource_rwdt__resource_info.pixel_format], "ETC1+A") == 0) || (strcmp(struct__workspace__resource_rwdt.string__pixel_format[struct__resource_rwdt__resource_info.pixel_format], "PVR") == 0)) {
					struct__resource_rwdt__resource_info.width = function__to_2expn(struct__resource_rwdt__resource_info.width);
					struct__resource_rwdt__resource_info.height = function__to_2expn(struct__resource_rwdt__resource_info.height);
					if (strcmp(struct__workspace__resource_rwdt.string__pixel_format[struct__resource_rwdt__resource_info.pixel_format], "PVR") == 0) {
						if (struct__resource_rwdt__resource_info.width > struct__resource_rwdt__resource_info.height) {
							struct__resource_rwdt__resource_info.height = struct__resource_rwdt__resource_info.width;
						} else if (struct__resource_rwdt__resource_info.width < struct__resource_rwdt__resource_info.height) {
							struct__resource_rwdt__resource_info.width = struct__resource_rwdt__resource_info.height;
						}
					}
				}
				fprintf(struct__workspace__resource_rwdt.fileptr__resource_list, "\t\t%s\n", struct__resource_rwdt__resource_info.path);
				fprintf(struct__workspace__resource_rwdt.fileptr__resource_list, "\t\t\t0x%.2X\t%.4u\t%.4u\n", struct__resource_rwdt__resource_info.pixel_format, struct__resource_rwdt__resource_info.width, struct__resource_rwdt__resource_info.height);
			} else {
				if (strcmp(struct__resource_rwdt__resource_info.path, "!program") != 0) {
					fprintf(struct__workspace__resource_rwdt.fileptr__resource_list, "\t\t%s\n", struct__resource_rwdt__resource_info.path);
				}
			}
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	function__file_close(struct__workspace__resource_rwdt.fileptr__resource_list);
}

static void function__resource_rwdt__text_to_image_list() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".txt");
	struct__workspace__resource_rwdt.fileptr__text = fopen(struct__variable.char_string__1, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.resource_rwdt__file_path__pre);
	strcat(struct__variable.char_string__1, ".image_list");
	struct__workspace__resource_rwdt.fileptr__image_list = fopen(struct__variable.char_string__1, "w");
	struct__workspace__resource_rwdt.fileptr__pixel_formay__list = fopen("__pixel_format__list", "r");
	fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__pixel_formay__list) == 1) {
			break;
		}
		fscanf(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, "0x%2X", &struct__variable.unsigned_char__1);
		fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, +1, 1);
		function__string_empty(struct__workspace__resource_rwdt.string__pixel_format[struct__variable.unsigned_char__1], 16);
		fscanf(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, "%s", struct__workspace__resource_rwdt.string__pixel_format[struct__variable.unsigned_char__1]);
		fseek(struct__workspace__resource_rwdt.fileptr__pixel_formay__list, +1, 1);
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__pixel_formay__list);
	fseek(struct__workspace__resource_rwdt.fileptr__text, 0, 0);
	fseek(struct__workspace__resource_rwdt.fileptr__image_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__resource_rwdt.fileptr__text) == 1) {
			break;
		}
		if ((fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') && (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t')) {
			if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
				function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
				fseek(struct__workspace__resource_rwdt.fileptr__text, +4, 1);
				fscanf(struct__workspace__resource_rwdt.fileptr__text, "%4u\t%4u\t%4u\t%4u\t%*4u\t%*4u", &struct__resource_rwdt__resource_info.ax, &struct__resource_rwdt__resource_info.ay, &struct__resource_rwdt__resource_info.aw, &struct__resource_rwdt__resource_info.ah);
				fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
				fprintf(struct__workspace__resource_rwdt.fileptr__image_list, "\t%s\n\t\t%.4u\t%.4u\t%.4u\t%.4u\n", struct__resource_rwdt__resource_info.path, struct__resource_rwdt__resource_info.ax, struct__resource_rwdt__resource_info.ay, struct__resource_rwdt__resource_info.aw, struct__resource_rwdt__resource_info.ah);
			} else {
				fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				function__string_get_from_text(struct__workspace__resource_rwdt.fileptr__text, struct__resource_rwdt__resource_info.path, 256);
				fseek(struct__workspace__resource_rwdt.fileptr__text, -1, 1);
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\t') {
					fscanf(struct__workspace__resource_rwdt.fileptr__text, "pf.x%2X\t%4u\t%4u", &struct__resource_rwdt__resource_info.pixel_format, &struct__resource_rwdt__resource_info.width, &struct__resource_rwdt__resource_info.height);
					fseek(struct__workspace__resource_rwdt.fileptr__text, +1, 1);
					fprintf(struct__workspace__resource_rwdt.fileptr__image_list, "%s\t%s\t%.4u\t%.4u\n", struct__resource_rwdt__resource_info.path, struct__workspace__resource_rwdt.string__pixel_format[struct__resource_rwdt__resource_info.pixel_format], struct__resource_rwdt__resource_info.width, struct__resource_rwdt__resource_info.height);
				}
			}
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__resource_rwdt.fileptr__text) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__resource_rwdt.fileptr__text);
	function__file_close(struct__workspace__resource_rwdt.fileptr__image_list);
}

// resource_rwdt functions end

// image_rw functions start

static void function__image_rw__atlas_unpack() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.image_rw__file_path__pre);
	strcat(struct__variable.char_string__1, ".image_list");
	struct__workspace__image_rw.fileptr__image_list = fopen(struct__variable.char_string__1, "r");
	fseek(struct__workspace__image_rw.fileptr__image_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 1) {
			break;
		}
		function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.atlas__path, 256);
		fscanf(struct__workspace__image_rw.fileptr__image_list, "%s\t%4u\t%4u", struct__workspace__image_rw.string__pixel_format, &struct__workspace__image_rw.atlas__width, &struct__workspace__image_rw.atlas__height);
		fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
		if ((strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1+A") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0)) {
			struct__workspace__image_rw.atlas__width = function__to_2expn(struct__workspace__image_rw.atlas__width);
			struct__workspace__image_rw.atlas__height = function__to_2expn(struct__workspace__image_rw.atlas__height);
			if (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0) {
				if (struct__workspace__image_rw.atlas__width > struct__workspace__image_rw.atlas__height) {
					struct__workspace__image_rw.atlas__height = struct__workspace__image_rw.atlas__width;
				} else if (struct__workspace__image_rw.atlas__width < struct__workspace__image_rw.atlas__height) {
					struct__workspace__image_rw.atlas__width = struct__workspace__image_rw.atlas__height;
				}
			}
		}
		function__string_empty(struct__variable.char_string__1, 8192);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.atlas__path)) {
				break;
			}
			if (struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1] == '\\') {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
			} else {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1];
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
		strcat(struct__variable.char_string__2, ".png");
		struct__workspace__image_rw.fileptr__atlas = fopen(struct__variable.char_string__2, "r");
		struct__workspace__image_rw.atlas__structp = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
		struct__workspace__image_rw.atlas__infop = png_create_info_struct(struct__workspace__image_rw.atlas__structp);
		png_init_io(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.fileptr__atlas);
		png_read_info(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
		struct__workspace__image_rw.atlas__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(png_bytep) * struct__workspace__image_rw.atlas__height);
		struct__variable.unsigned_int__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
				break;
			}
			struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(png_bytep) * struct__workspace__image_rw.atlas__width * 4);
			struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
		}
		png_read_image(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__bytep);
		function__string_empty(struct__workspace__image_rw.oripath__atlas, 8192);
		getcwd(struct__workspace__image_rw.oripath__atlas, sizeof(struct__workspace__image_rw.oripath__atlas));
		if (struct__function_parameter.image_rw__is_chdir == 1) {
			mkdir(struct__variable.char_string__1);
			chdir(struct__variable.char_string__1);
		}
		for (;; ) {
			if (fgetc(struct__workspace__image_rw.fileptr__image_list) != '\t') {
				if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 0) {
					fseek(struct__workspace__image_rw.fileptr__image_list, -1, 1);
				}
				png_read_end(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
				png_destroy_read_struct(&struct__workspace__image_rw.atlas__structp, &struct__workspace__image_rw.atlas__infop, NULL);
				struct__variable.unsigned_int__1 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
						free(struct__workspace__image_rw.atlas__bytep);
						struct__workspace__image_rw.atlas__bytep = NULL;
						break;
					}
					free(struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1]);
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = NULL;
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
				function__file_close(struct__workspace__image_rw.fileptr__atlas);
				chdir(struct__workspace__image_rw.oripath__atlas);
				break;
			}
			function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.subimage__path, 256);
			fseek(struct__workspace__image_rw.fileptr__image_list, +2, 1);
			fscanf(struct__workspace__image_rw.fileptr__image_list, "%4u\t%4u\t%4u\t%4u", &struct__workspace__image_rw.subimage__ax, &struct__workspace__image_rw.subimage__ay, &struct__workspace__image_rw.subimage__aw, &struct__workspace__image_rw.subimage__ah);
			fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
			function__string_empty(struct__variable.char_string__1, 8192);
			struct__variable.unsigned_short__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.subimage__path)) {
					break;
				}
				if (struct__workspace__image_rw.subimage__path[struct__variable.unsigned_short__1] == '\\') {
					mkdir(struct__variable.char_string__1);
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
				} else {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.subimage__path[struct__variable.unsigned_short__1];
				}
				struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
			}
			strcat(struct__variable.char_string__1, ".png");
			struct__workspace__image_rw.fileptr__subimage = fopen(struct__variable.char_string__1, "w");
			struct__workspace__image_rw.subimage__structp = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
			struct__workspace__image_rw.subimage__infop = png_create_info_struct(struct__workspace__image_rw.subimage__structp);
			png_init_io(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.fileptr__subimage);
			png_set_IHDR(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__infop, struct__workspace__image_rw.subimage__aw, struct__workspace__image_rw.subimage__ah, 8, PNG_COLOR_TYPE_RGB_ALPHA, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);
			png_write_info(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__infop);
			struct__workspace__image_rw.subimage__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.subimage__structp, sizeof(png_bytep) * struct__workspace__image_rw.subimage__ah);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.subimage__ah) {
					break;
				}
				struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.subimage__structp, sizeof(unsigned char *) * struct__workspace__image_rw.subimage__aw * 4);
				struct__variable.unsigned_int__2 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__2 == struct__workspace__image_rw.subimage__aw) {
						break;
					}
					struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 0] = struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 0];
					struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 1] = struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 1];
					struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 2] = struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 2];
					struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 3] = struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 3];
					struct__variable.unsigned_int__2 = struct__variable.unsigned_int__2 + 1;
				}
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			png_write_image(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__bytep);
			png_write_end(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__infop);
			png_destroy_write_struct(&struct__workspace__image_rw.subimage__structp, &struct__workspace__image_rw.subimage__infop);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.subimage__ah) {
					free(struct__workspace__image_rw.subimage__bytep);
					struct__workspace__image_rw.subimage__bytep = NULL;
					break;
				}
				free(struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1]);
				struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1] = NULL;
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			function__file_close(struct__workspace__image_rw.fileptr__subimage);
		}
	}
	function__file_close(struct__workspace__image_rw.fileptr__image_list);
}

static void function__image_rw__atlas_pack() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.image_rw__file_path__pre);
	strcat(struct__variable.char_string__1, ".image_list");
	struct__workspace__image_rw.fileptr__image_list = fopen(struct__variable.char_string__1, "r");
	fseek(struct__workspace__image_rw.fileptr__image_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 1) {
			break;
		}
		function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.atlas__path, 256);
		fscanf(struct__workspace__image_rw.fileptr__image_list, "%s\t%4u\t%4u", struct__workspace__image_rw.string__pixel_format, &struct__workspace__image_rw.atlas__width, &struct__workspace__image_rw.atlas__height);
		fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
		if ((strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1+A") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0)) {
			struct__workspace__image_rw.atlas__width = function__to_2expn(struct__workspace__image_rw.atlas__width);
			struct__workspace__image_rw.atlas__height = function__to_2expn(struct__workspace__image_rw.atlas__height);
			if (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0) {
				if (struct__workspace__image_rw.atlas__width > struct__workspace__image_rw.atlas__height) {
					struct__workspace__image_rw.atlas__height = struct__workspace__image_rw.atlas__width;
				} else if (struct__workspace__image_rw.atlas__width < struct__workspace__image_rw.atlas__height) {
					struct__workspace__image_rw.atlas__width = struct__workspace__image_rw.atlas__height;
				}
			}
		}
		function__string_empty(struct__variable.char_string__1, 8192);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.atlas__path)) {
				break;
			}
			if (struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1] == '\\') {
				mkdir(struct__variable.char_string__1);
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
			} else {
				struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1];
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
		strcat(struct__variable.char_string__2, ".png");
		struct__workspace__image_rw.fileptr__atlas = fopen(struct__variable.char_string__2, "w");
		struct__workspace__image_rw.atlas__structp = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
		struct__workspace__image_rw.atlas__infop = png_create_info_struct(struct__workspace__image_rw.atlas__structp);
		png_init_io(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.fileptr__atlas);
		png_set_IHDR(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop, struct__workspace__image_rw.atlas__width, struct__workspace__image_rw.atlas__height, 8, PNG_COLOR_TYPE_RGB_ALPHA, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);
		png_write_info(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
		struct__workspace__image_rw.atlas__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(png_bytep) * struct__workspace__image_rw.atlas__height);
		struct__variable.unsigned_int__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
				break;
			}
			struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(unsigned char *) * struct__workspace__image_rw.atlas__width * 4);
			struct__variable.unsigned_int__2 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__2 == struct__workspace__image_rw.atlas__width) {
					break;
				}
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 0] = 0;
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 1] = 0;
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 2] = 0;
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 3] = 0;
				struct__variable.unsigned_int__2 = struct__variable.unsigned_int__2 + 1;
			}
			struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
		}
		function__string_empty(struct__workspace__image_rw.oripath__atlas, 8192);
		getcwd(struct__workspace__image_rw.oripath__atlas, sizeof(struct__workspace__image_rw.oripath__atlas));
		if (struct__function_parameter.image_rw__is_chdir == 1) {
			chdir(struct__variable.char_string__1);
		}
		for (;; ) {
			if (fgetc(struct__workspace__image_rw.fileptr__image_list) != '\t') {
				if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 0) {
					fseek(struct__workspace__image_rw.fileptr__image_list, -1, 1);
				}
				png_write_image(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__bytep);
				png_write_end(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
				png_destroy_write_struct(&struct__workspace__image_rw.atlas__structp, &struct__workspace__image_rw.atlas__infop);
				struct__variable.unsigned_int__1 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
						free(struct__workspace__image_rw.atlas__bytep);
						struct__workspace__image_rw.atlas__bytep = NULL;
						break;
					}
					free(struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1]);
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = NULL;
					struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
				}
				function__file_close(struct__workspace__image_rw.fileptr__atlas);
				chdir(struct__workspace__image_rw.oripath__atlas);
				break;
			}
			function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.subimage__path, 256);
			fseek(struct__workspace__image_rw.fileptr__image_list, +2, 1);
			fscanf(struct__workspace__image_rw.fileptr__image_list, "%4u\t%4u\t%4u\t%4u", &struct__workspace__image_rw.subimage__ax, &struct__workspace__image_rw.subimage__ay, &struct__workspace__image_rw.subimage__aw, &struct__workspace__image_rw.subimage__ah);
			fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
			function__string_empty(struct__variable.char_string__1, 8192);
			struct__variable.unsigned_short__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.subimage__path)) {
					break;
				}
				if (struct__workspace__image_rw.subimage__path[struct__variable.unsigned_short__1] == '\\') {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
				} else {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.subimage__path[struct__variable.unsigned_short__1];
				}
				struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
			}
			strcat(struct__variable.char_string__1, ".png");
			struct__workspace__image_rw.fileptr__subimage = fopen(struct__variable.char_string__1, "r");
			struct__workspace__image_rw.subimage__structp = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
			struct__workspace__image_rw.subimage__infop = png_create_info_struct(struct__workspace__image_rw.subimage__structp);
			png_init_io(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.fileptr__subimage);
			png_read_info(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__infop);
			struct__workspace__image_rw.subimage__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.subimage__structp, sizeof(png_bytep) * struct__workspace__image_rw.subimage__ah);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.subimage__ah) {
					break;
				}
				struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.subimage__structp, sizeof(png_bytep) * struct__workspace__image_rw.subimage__aw * 4);
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			png_read_image(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__bytep);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.subimage__ah) {
					break;
				}
				struct__variable.unsigned_int__2 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__2 == struct__workspace__image_rw.subimage__aw) {
						break;
					}
					struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 0] = struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 0];
					struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 1] = struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 1];
					struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 2] = struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 2];
					struct__workspace__image_rw.atlas__bytep[struct__workspace__image_rw.subimage__ay + struct__variable.unsigned_int__1][((struct__workspace__image_rw.subimage__ax + struct__variable.unsigned_int__2) * 4) + 3] = struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 3];
					struct__variable.unsigned_int__2 = struct__variable.unsigned_int__2 + 1;
				}
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			png_read_end(struct__workspace__image_rw.subimage__structp, struct__workspace__image_rw.subimage__infop);
			png_destroy_read_struct(&struct__workspace__image_rw.subimage__structp, &struct__workspace__image_rw.subimage__infop, NULL);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.subimage__ah) {
					free(struct__workspace__image_rw.subimage__bytep);
					struct__workspace__image_rw.subimage__bytep = NULL;
					break;
				}
				free(struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1]);
				struct__workspace__image_rw.subimage__bytep[struct__variable.unsigned_int__1] = NULL;
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			function__file_close(struct__workspace__image_rw.fileptr__subimage);
		}
	}
	function__file_close(struct__workspace__image_rw.fileptr__image_list);
}

static void function__image_rw__png_to_rgba() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.image_rw__file_path__pre);
	strcat(struct__variable.char_string__1, ".image_list");
	struct__workspace__image_rw.fileptr__image_list = fopen(struct__variable.char_string__1, "r");
	fseek(struct__workspace__image_rw.fileptr__image_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 1) {
			break;
		}
		if (fgetc(struct__workspace__image_rw.fileptr__image_list) != '\t') {
			fseek(struct__workspace__image_rw.fileptr__image_list, -1, 1);
			function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.atlas__path, 256);
			fscanf(struct__workspace__image_rw.fileptr__image_list, "%s\t%4u\t%4u", struct__workspace__image_rw.string__pixel_format, &struct__workspace__image_rw.atlas__width, &struct__workspace__image_rw.atlas__height);
			fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
			if ((strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1+A") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0)) {
				struct__workspace__image_rw.atlas__width = function__to_2expn(struct__workspace__image_rw.atlas__width);
				struct__workspace__image_rw.atlas__height = function__to_2expn(struct__workspace__image_rw.atlas__height);
				if (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0) {
					if (struct__workspace__image_rw.atlas__width > struct__workspace__image_rw.atlas__height) {
						struct__workspace__image_rw.atlas__height = struct__workspace__image_rw.atlas__width;
					} else if (struct__workspace__image_rw.atlas__width < struct__workspace__image_rw.atlas__height) {
						struct__workspace__image_rw.atlas__width = struct__workspace__image_rw.atlas__height;
					}
				}
			}
			function__string_empty(struct__variable.char_string__1, 8192);
			struct__variable.unsigned_short__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.atlas__path)) {
					break;
				}
				if (struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1] == '\\') {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
				} else {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1];
				}
				struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
			}
			strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
			strcat(struct__variable.char_string__2, ".rgba");
			struct__workspace__image_rw.fileptr__rgba = fopen(struct__variable.char_string__2, "w");
			strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
			strcat(struct__variable.char_string__2, ".png");
			struct__workspace__image_rw.fileptr__atlas = fopen(struct__variable.char_string__2, "r");
			struct__workspace__image_rw.atlas__structp = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
			struct__workspace__image_rw.atlas__infop = png_create_info_struct(struct__workspace__image_rw.atlas__structp);
			png_init_io(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.fileptr__atlas);
			png_read_info(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
			struct__workspace__image_rw.atlas__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(png_bytep) * struct__workspace__image_rw.atlas__height);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
					break;
				}
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(unsigned char *) * struct__workspace__image_rw.atlas__width * 4);
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			png_read_image(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__bytep);
			struct__workspace__image_rw.rgba_data = (unsigned char *)malloc(sizeof(unsigned char) * struct__workspace__image_rw.atlas__width * struct__workspace__image_rw.atlas__height * 4);
			fseek(struct__workspace__image_rw.fileptr__rgba, 0x0, 0);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
					break;
				}
				struct__variable.unsigned_int__2 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__2 == struct__workspace__image_rw.atlas__width) {
						break;
					}
					struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 0] = struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 0];
					struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 1] = struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 1];
					struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 2] = struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 2];
					struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 3] = struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 3];
					struct__variable.unsigned_int__2 = struct__variable.unsigned_int__2 + 1;
				}
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			fwrite(struct__workspace__image_rw.rgba_data, struct__workspace__image_rw.atlas__height * struct__workspace__image_rw.atlas__width * 4, 1, struct__workspace__image_rw.fileptr__rgba);
			function__file_close(struct__workspace__image_rw.fileptr__rgba);
			free(struct__workspace__image_rw.rgba_data);
			struct__workspace__image_rw.rgba_data = NULL;
			png_read_end(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
			png_destroy_read_struct(&struct__workspace__image_rw.atlas__structp, &struct__workspace__image_rw.atlas__infop, NULL);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
					free(struct__workspace__image_rw.atlas__bytep);
					struct__workspace__image_rw.atlas__bytep = NULL;
					break;
				}
				free(struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1]);
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = NULL;
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			function__file_close(struct__workspace__image_rw.fileptr__atlas);
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__image_rw.fileptr__image_list) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__image_rw.fileptr__image_list);
}

static void function__image_rw__rgba_to_png() {
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.image_rw__file_path__pre);
	strcat(struct__variable.char_string__1, ".image_list");
	struct__workspace__image_rw.fileptr__image_list = fopen(struct__variable.char_string__1, "r");
	fseek(struct__workspace__image_rw.fileptr__image_list, 0, 0);
	for (;; ) {
		if (function__file_is_end(struct__workspace__image_rw.fileptr__image_list) == 1) {
			break;
		}
		if (fgetc(struct__workspace__image_rw.fileptr__image_list) != '\t') {
			fseek(struct__workspace__image_rw.fileptr__image_list, -1, 1);
			function__string_get_from_text(struct__workspace__image_rw.fileptr__image_list, struct__workspace__image_rw.atlas__path, 256);
			fscanf(struct__workspace__image_rw.fileptr__image_list, "%s\t%4u\t%4u", struct__workspace__image_rw.string__pixel_format, &struct__workspace__image_rw.atlas__width, &struct__workspace__image_rw.atlas__height);
			fseek(struct__workspace__image_rw.fileptr__image_list, +1, 1);
			if ((strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "ETC1+A") == 0) || (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0)) {
				struct__workspace__image_rw.atlas__width = function__to_2expn(struct__workspace__image_rw.atlas__width);
				struct__workspace__image_rw.atlas__height = function__to_2expn(struct__workspace__image_rw.atlas__height);
				if (strcmp(struct__workspace__image_rw.string__pixel_format, "PVR") == 0) {
					if (struct__workspace__image_rw.atlas__width > struct__workspace__image_rw.atlas__height) {
						struct__workspace__image_rw.atlas__height = struct__workspace__image_rw.atlas__width;
					} else if (struct__workspace__image_rw.atlas__width < struct__workspace__image_rw.atlas__height) {
						struct__workspace__image_rw.atlas__width = struct__workspace__image_rw.atlas__height;
					}
				}
			}
			function__string_empty(struct__variable.char_string__1, 8192);
			struct__variable.unsigned_short__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_short__1 == strlen(struct__workspace__image_rw.atlas__path)) {
					break;
				}
				if (struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1] == '\\') {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = '/';
				} else {
					struct__variable.char_string__1[struct__variable.unsigned_short__1] = struct__workspace__image_rw.atlas__path[struct__variable.unsigned_short__1];
				}
				struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
			}
			strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
			strcat(struct__variable.char_string__2, ".rgba");
			struct__workspace__image_rw.fileptr__rgba = fopen(struct__variable.char_string__2, "r");
			strcpy(struct__variable.char_string__2, struct__variable.char_string__1);
			strcat(struct__variable.char_string__2, ".png");
			struct__workspace__image_rw.fileptr__atlas = fopen(struct__variable.char_string__2, "w");
			struct__workspace__image_rw.atlas__structp = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
			struct__workspace__image_rw.atlas__infop = png_create_info_struct(struct__workspace__image_rw.atlas__structp);
			png_init_io(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.fileptr__atlas);
			png_set_IHDR(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop, struct__workspace__image_rw.atlas__width, struct__workspace__image_rw.atlas__height, 8, PNG_COLOR_TYPE_RGB_ALPHA, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);
			png_write_info(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
			struct__workspace__image_rw.atlas__bytep = (png_bytep *)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(png_bytep) * struct__workspace__image_rw.atlas__height);
			struct__workspace__image_rw.rgba_data = (unsigned char *)malloc(sizeof(unsigned char) * struct__workspace__image_rw.atlas__width * struct__workspace__image_rw.atlas__height * 4);
			fseek(struct__workspace__image_rw.fileptr__rgba, 0x0, 0);
			fread(struct__workspace__image_rw.rgba_data, struct__workspace__image_rw.atlas__height * struct__workspace__image_rw.atlas__width * 4, 1, struct__workspace__image_rw.fileptr__rgba);
			function__file_close(struct__workspace__image_rw.fileptr__rgba);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
					break;
				}
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = (png_bytep)png_malloc(struct__workspace__image_rw.atlas__structp, sizeof(unsigned char *) * struct__workspace__image_rw.atlas__width * 4);
				struct__variable.unsigned_int__2 = 0;
				for (;; ) {
					if (struct__variable.unsigned_int__2 == struct__workspace__image_rw.atlas__width) {
						break;
					}
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 0] = struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 0];
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 1] = struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 1];
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 2] = struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 2];
					struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1][(struct__variable.unsigned_int__2 * 4) + 3] = struct__workspace__image_rw.rgba_data[(struct__variable.unsigned_int__1 * struct__workspace__image_rw.atlas__width * 4) + (struct__variable.unsigned_int__2 * 4) + 3];
					struct__variable.unsigned_int__2 = struct__variable.unsigned_int__2 + 1;
				}
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			free(struct__workspace__image_rw.rgba_data);
			struct__workspace__image_rw.rgba_data = NULL;
			png_write_image(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__bytep);
			png_write_end(struct__workspace__image_rw.atlas__structp, struct__workspace__image_rw.atlas__infop);
			png_destroy_write_struct(&struct__workspace__image_rw.atlas__structp, &struct__workspace__image_rw.atlas__infop);
			struct__variable.unsigned_int__1 = 0;
			for (;; ) {
				if (struct__variable.unsigned_int__1 == struct__workspace__image_rw.atlas__height) {
					free(struct__workspace__image_rw.atlas__bytep);
					struct__workspace__image_rw.atlas__bytep = NULL;
					break;
				}
				free(struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1]);
				struct__workspace__image_rw.atlas__bytep[struct__variable.unsigned_int__1] = NULL;
				struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
			}
			function__file_close(struct__workspace__image_rw.fileptr__atlas);
		} else {
			for (;; ) {
				if (fgetc(struct__workspace__image_rw.fileptr__image_list) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(struct__workspace__image_rw.fileptr__image_list);
}

// image_rw functions end

// dtrz_upck functions start

static void function__dtrz_upck__dtrz_unpack() {
	function__string_empty(struct__workspace__dtrz_upck.oripath__dtrz, 8192);
	getcwd(struct__workspace__dtrz_upck.oripath__dtrz, sizeof(struct__workspace__dtrz_upck.oripath__dtrz));
	struct__workspace__dtrz_upck.fileptr__dtrz = fopen(struct__function_parameter.dtrz_upck__file_path__dtrz, "r");
	function__string_empty(struct__variable.char_string__1, 8192);
	strcpy(struct__variable.char_string__1, struct__function_parameter.dtrz_upck__file_path__dtrz);
	strcat(struct__variable.char_string__1, "__dtrz_unpack");
	mkdir(struct__variable.char_string__1);
	chdir(struct__variable.char_string__1);
	struct__workspace__dtrz_upck.fileptr__subfile_list = fopen("subfile_list", "w");
	fseek(struct__workspace__dtrz_upck.fileptr__dtrz, 0x0, 0);
	fscanf(struct__workspace__dtrz_upck.fileptr__dtrz, "%4s", &struct__dtrz_header.header_id);
	function__get_value(struct__workspace__dtrz_upck.fileptr__dtrz, 2);
	struct__dtrz_header.subfile__name_count = union__value.unsigned_short;
	function__get_value(struct__workspace__dtrz_upck.fileptr__dtrz, 2);
	struct__dtrz_header.subfile__directory_count = union__value.unsigned_short;
	fseek(struct__workspace__dtrz_upck.fileptr__dtrz, +1, 1);
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__dtrz_header.subfile__name_count) {
			break;
		}
		function__string_empty(struct__workspace__dtrz_upck.subfile__name[struct__variable.unsigned_int__1], 128);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			struct__variable.unsigned_char__1 = fgetc(struct__workspace__dtrz_upck.fileptr__dtrz);
			if (struct__variable.unsigned_char__1 == '\0') {
				break;
			}
			struct__workspace__dtrz_upck.subfile__name[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1] = struct__variable.unsigned_char__1;
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	function__string_empty(struct__workspace__dtrz_upck.subfile__directory[0], 128);
	struct__variable.unsigned_int__1 = 1;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__dtrz_header.subfile__directory_count) {
			break;
		}
		function__string_empty(struct__workspace__dtrz_upck.subfile__directory[struct__variable.unsigned_int__1], 128);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			struct__variable.unsigned_char__1 = fgetc(struct__workspace__dtrz_upck.fileptr__dtrz);
			if (struct__variable.unsigned_char__1 == '\0') {
				struct__workspace__dtrz_upck.subfile__directory[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1] = '\\';
				break;
			}
			struct__workspace__dtrz_upck.subfile__directory[struct__variable.unsigned_int__1][struct__variable.unsigned_short__1] = struct__variable.unsigned_char__1;
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__dtrz_header.subfile__name_count) {
			break;
		}
		fread(&struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1], 0x2, 3, struct__workspace__dtrz_upck.fileptr__dtrz);
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	fseek(struct__workspace__dtrz_upck.fileptr__dtrz, +4, 1);
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__dtrz_header.subfile__name_count) {
			break;
		}
		fread(&struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1], 0x4, 4, struct__workspace__dtrz_upck.fileptr__dtrz);
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	mkdir("subfile_pack");
	chdir("subfile_pack");
	struct__variable.unsigned_int__1 = 0;
	for (;; ) {
		if (struct__variable.unsigned_int__1 == struct__dtrz_header.subfile__name_count) {
			break;
		}
		fprintf(struct__workspace__dtrz_upck.fileptr__subfile_list, "%s%s\n", struct__workspace__dtrz_upck.subfile__directory[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].directory_number], struct__workspace__dtrz_upck.subfile__name[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].name_number]);
		function__string_empty(struct__workspace__dtrz_upck.subfile__path, 128);
		struct__variable.unsigned_short__1 = 0;
		for (;; ) {
			if (struct__variable.unsigned_short__1 == strlen(struct__workspace__dtrz_upck.subfile__directory[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].directory_number])) {
				strcat(struct__workspace__dtrz_upck.subfile__path, struct__workspace__dtrz_upck.subfile__name[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].name_number]);
				struct__workspace__dtrz_upck.fileptr__subfile = fopen(struct__workspace__dtrz_upck.subfile__path, "w");
				if (struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].unknown == 0x100) {
					function__data_copy(struct__workspace__dtrz_upck.fileptr__dtrz, struct__workspace__dtrz_upck.fileptr__subfile, struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].offset, struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].size);
				} else if (struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].unknown == 0x200) {
					fseek(struct__workspace__dtrz_upck.fileptr__dtrz, struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].offset, 0);
					fseek(struct__workspace__dtrz_upck.fileptr__dtrz, +9, 1);
					for (;; ) {
						if (function__file_is_end(struct__workspace__dtrz_upck.fileptr__dtrz) == 1) {
							break;
						}
						if (fgetc(struct__workspace__dtrz_upck.fileptr__dtrz) == 0x5D) {
							if ((fgetc(struct__workspace__dtrz_upck.fileptr__dtrz) == 0x00) && (fgetc(struct__workspace__dtrz_upck.fileptr__dtrz) == 0x00) && (fgetc(struct__workspace__dtrz_upck.fileptr__dtrz) == 0x01)) {
								fseek(struct__workspace__dtrz_upck.fileptr__dtrz, -4, 1);
								break;
							} else {
								fseek(struct__workspace__dtrz_upck.fileptr__dtrz, -1, 1);
							}
						}
					}
					function__data_copy(struct__workspace__dtrz_upck.fileptr__dtrz, struct__workspace__dtrz_upck.fileptr__subfile, struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].offset, ftell(struct__workspace__dtrz_upck.fileptr__dtrz) - struct__dtrz__subfile_info__pack[struct__variable.unsigned_int__1].offset);
				}
				function__file_close(struct__workspace__dtrz_upck.fileptr__subfile);
				break;
			}
			if (struct__workspace__dtrz_upck.subfile__directory[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].directory_number][struct__variable.unsigned_short__1] == '\\') {
				mkdir(struct__workspace__dtrz_upck.subfile__path);
				struct__workspace__dtrz_upck.subfile__path[struct__variable.unsigned_short__1] = '/';
			} else {
				struct__workspace__dtrz_upck.subfile__path[struct__variable.unsigned_short__1] = struct__workspace__dtrz_upck.subfile__directory[struct__dtrz__subfile_path__pack[struct__variable.unsigned_int__1].directory_number][struct__variable.unsigned_short__1];
			}
			struct__variable.unsigned_short__1 = struct__variable.unsigned_short__1 + 1;
		}
		struct__variable.unsigned_int__1 = struct__variable.unsigned_int__1 + 1;
	}
	function__file_close(struct__workspace__dtrz_upck.fileptr__subfile_list);
	function__file_close(struct__workspace__dtrz_upck.fileptr__dtrz);
	chdir(struct__workspace__dtrz_upck.oripath__dtrz);
}

// dtrz_upck functions end

// native functions start

char * Jstring2CStr(JNIEnv * env, jstring jstr) {
	char * rtn = NULL;
	jclass clsstring = (*env)->FindClass(env, "java/lang/String");
	jstring strencode = (*env)->NewStringUTF(env, "GB2312");
	jmethodID mid = (*env)->GetMethodID(env, clsstring, "getBytes", "(Ljava/lang/String;)[B");
	jbyteArray barr = (jbyteArray)(*env)->CallObjectMethod(env, jstr, mid, strencode);
	jsize alen = (*env)->GetArrayLength(env, barr);
	jbyte * ba = (*env)->GetByteArrayElements(env, barr, JNI_FALSE);
	if (alen > 0) {
		rtn = (char *)malloc(alen + 1);
		memcpy(rtn, ba, alen);
		rtn[alen] = 0;
	}
	(*env)->ReleaseByteArrayElements(env, barr, ba, 0);
	return rtn;
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXlist(JNIEnv * env, jobject thiz, jstring order__main, jstring order__sub) {
	FILE * fileptr__path_list, * fileptr__list;
	char path_type[32], MainPath[8192];
	fileptr__path_list = fopen("/storage/emulated/0/Android/obb/pvztool/__path_list", "r");
	for (;; ) {
		if (function__file_is_end(fileptr__path_list) == 1) {
			break;
		}
		fscanf(fileptr__path_list, "%s", path_type);
		if (strcmp(path_type, Jstring2CStr(env, order__main)) == 0) {
			fscanf(fileptr__path_list, "\t==\t%s\n", MainPath);
			chdir(MainPath);
			break;
		} else {
			for (;; ) {
				if (fgetc(fileptr__path_list) == '\n') {
					break;
				}
			}
		}
	}
	function__file_close(fileptr__path_list);
	if (strcmp(Jstring2CStr(env, order__main), "jr_conversion") == 0) {
		fileptr__list = fopen("__jr_conversion__list", "r");
	} else if (strcmp(Jstring2CStr(env, order__main), "bpsr_upck") == 0) {
		if ((strcmp(Jstring2CStr(env, order__sub), "pgsr_unpack") == 0) || (strcmp(Jstring2CStr(env, order__sub), "pgsr_pack") == 0)) {
			fileptr__list = fopen("__bpsr_upck__pgsr__list", "r");
		} else if ((strcmp(Jstring2CStr(env, order__sub), "bpsr_unpack") == 0) || (strcmp(Jstring2CStr(env, order__sub), "bpsr_pack") == 0)) {
			fileptr__list = fopen("__bpsr_upck__bpsr__list", "r");
		}
	} else if (strcmp(Jstring2CStr(env, order__main), "resource_rwdt") == 0) {
		fileptr__list = fopen("__resource_rwdt__list", "r");
	} else if (strcmp(Jstring2CStr(env, order__main), "image_rw") == 0) {
		fileptr__list = fopen("__image_rw__list", "r");
	} else if (strcmp(Jstring2CStr(env, order__main), "dtrz_upck") == 0) {
		fileptr__list = fopen("__dtrz_upck__list", "r");
	}
	for (;; ) {
		if (function__file_is_end(fileptr__list) == 1) {
			function__file_close(fileptr__list);
			break;
		}
		if (fgetc(fileptr__list) == '\\') {
			for (;; ) {
				if (fgetc(fileptr__list) == '\n') {
					break;
				}
			}
		} else {
			fseek(fileptr__list, -1, 1);
			if (strcmp(Jstring2CStr(env, order__main), "jr_conversion") == 0) {
				strcpy(struct__function_parameter.jr_conversion__file_path__string_cache, "_string_cache");
				strcpy(struct__function_parameter.jr_conversion__file_path__string_cache_wchar, "_string_cache_wchar");
				fscanf(fileptr__list, "%u\t%s\t%s\n", &struct__function_parameter.jr_conversion__is_string_all_cache, struct__function_parameter.jr_conversion__file_path__rton, struct__function_parameter.jr_conversion__file_path__json);
				if (strcmp(Jstring2CStr(env, order__sub), "rton_to_json") == 0) {
					function__jr_conversion__rton_to_json();
				} else if (strcmp(Jstring2CStr(env, order__sub), "json_to_rton") == 0) {
					function__jr_conversion__json_to_rton();
				}
			} else if (strcmp(Jstring2CStr(env, order__main), "bpsr_upck") == 0) {
				if ((strcmp(Jstring2CStr(env, order__sub), "pgsr_unpack") == 0) || (strcmp(Jstring2CStr(env, order__sub), "pgsr_pack") == 0)) {
					fscanf(fileptr__list, "%u\t%s\n", &struct__function_parameter.bpsr_upck__subfile_pack__compress_type, struct__function_parameter.bpsr_upck__file_path__pgsr);
					if (strcmp(Jstring2CStr(env, order__sub), "pgsr_unpack") == 0) {
						function__bpsr_upck__pgsr_unpack();
					} else if (strcmp(Jstring2CStr(env, order__sub), "pgsr_pack") == 0) {
						function__bpsr_upck__pgsr_pack();
					}
				} else if ((strcmp(Jstring2CStr(env, order__sub), "bpsr_unpack") == 0) || (strcmp(Jstring2CStr(env, order__sub), "bpsr_pack") == 0)) {
					fscanf(fileptr__list, "%u\t%u\t%u\t%u\t%u\t%u\t%s\n", &struct__function_parameter.bpsr_upck__is_version_cn, &struct__function_parameter.bpsr_upck__resource__upck_pgsr, &struct__function_parameter.bpsr_upck__resource__upck_file, &struct__function_parameter.bpsr_upck__resource_pgsr__upck_pgsr, &struct__function_parameter.bpsr_upck__resource_file__upck_file, &struct__function_parameter.bpsr_upck__resource__repack_pgsr, struct__function_parameter.bpsr_upck__file_path__bpsr);
					if (strcmp(Jstring2CStr(env, order__sub), "bpsr_unpack") == 0) {
						function__bpsr_upck__bpsr_unpack();
					} else if (strcmp(Jstring2CStr(env, order__sub), "bpsr_pack") == 0) {
						function__bpsr_upck__bpsr_pack();
					}
				}
			} else if (strcmp(Jstring2CStr(env, order__main), "resource_rwdt") == 0) {
				fscanf(fileptr__list, "%u\t%u\t%u\t%u\t%u\t%s\n", &struct__function_parameter.resource_rwdt__slot_start, &struct__function_parameter.resource_rwdt__is_full, &struct__function_parameter.resource_rwdt__put_1536, &struct__function_parameter.resource_rwdt__put_768, &struct__function_parameter.resource_rwdt__put_384, struct__function_parameter.resource_rwdt__file_path__pre);
				if (strcmp(Jstring2CStr(env, order__sub), "json_to_text") == 0) {
					function__resource_rwdt__json_to_text();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_json") == 0) {
					function__resource_rwdt__text_to_json();
				} else if (strcmp(Jstring2CStr(env, order__sub), "set_ukv_to_text") == 0) {
					function__resource_rwdt__set_ukv_to_text();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_lite") == 0) {
					function__resource_rwdt__text_lite();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_unpack") == 0) {
					function__resource_rwdt__text_unpack();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_pack") == 0) {
					function__resource_rwdt__text_pack();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_resource_list") == 0) {
					function__resource_rwdt__text_to_resource_list();
				} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_image_list") == 0) {
					function__resource_rwdt__text_to_image_list();
				}
			} else if (strcmp(Jstring2CStr(env, order__main), "image_rw") == 0) {
				fscanf(fileptr__list, "%u\t%s\n", &struct__function_parameter.image_rw__is_chdir, struct__function_parameter.image_rw__file_path__pre);
				if (strcmp(Jstring2CStr(env, order__sub), "atlas_unpack") == 0) {
					function__image_rw__atlas_unpack();
				} else if (strcmp(Jstring2CStr(env, order__sub), "atlas_pack") == 0) {
					function__image_rw__atlas_pack();
				} else if (strcmp(Jstring2CStr(env, order__sub), "png_to_rgba") == 0) {
					function__image_rw__png_to_rgba();
				} else if (strcmp(Jstring2CStr(env, order__sub), "rgba_to_png") == 0) {
					function__image_rw__rgba_to_png();
				}
			} else if (strcmp(Jstring2CStr(env, order__main), "dtrz_upck") == 0) {
				fscanf(fileptr__list, "%s\n", struct__function_parameter.dtrz_upck__file_path__dtrz);
				if (strcmp(Jstring2CStr(env, order__sub), "dtrz_unpack") == 0) {
					function__dtrz_upck__dtrz_unpack();
				}
			}
		}
	}
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXvariableXXjrXconversion(JNIEnv * env, jobject thiz, jstring order__sub, jstring file_path__rton, jstring file_path__json, jint is_string_all_cache) {
	strcpy(struct__function_parameter.jr_conversion__file_path__rton, Jstring2CStr(env, file_path__rton));
	strcpy(struct__function_parameter.jr_conversion__file_path__json, Jstring2CStr(env, file_path__json));
	strcpy(struct__function_parameter.jr_conversion__file_path__string_cache, "/storage/emulated/0/Android/obb/pvztool/jr_conversion/_string_cache");
	strcpy(struct__function_parameter.jr_conversion__file_path__string_cache_wchar, "/storage/emulated/0/Android/obb/pvztool/jr_conversion/_string_cache_wchar");
	struct__function_parameter.jr_conversion__is_string_all_cache = (short)is_string_all_cache;
	if (strcmp(Jstring2CStr(env, order__sub), "rton_to_json") == 0) {
		function__jr_conversion__rton_to_json();
	} else if (strcmp(Jstring2CStr(env, order__sub), "json_to_rton") == 0) {
		function__jr_conversion__json_to_rton();
	}
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXvariableXXbpsrXupck(JNIEnv * env, jobject thiz, jstring order__sub, jstring file_path__pgsr, jint subfile_pack__compress_type, jstring file_path__bpsr, jint is_version_cn, jint resource__upck_pgsr, jint resource__upck_file, jint resource_pgsr__upck_pgsr, jint resource_file__upck_file, jint resource__repack_pgsr) {
	strcpy(struct__function_parameter.bpsr_upck__file_path__pgsr, Jstring2CStr(env, file_path__pgsr));
	struct__function_parameter.bpsr_upck__subfile_pack__compress_type = (short)subfile_pack__compress_type;
	strcpy(struct__function_parameter.bpsr_upck__file_path__bpsr, Jstring2CStr(env, file_path__bpsr));
	struct__function_parameter.bpsr_upck__is_version_cn = (short)is_version_cn;
	struct__function_parameter.bpsr_upck__resource__upck_pgsr = (short)resource__upck_pgsr;
	struct__function_parameter.bpsr_upck__resource__upck_file = (short)resource__upck_file;
	struct__function_parameter.bpsr_upck__resource_pgsr__upck_pgsr = (short)resource_pgsr__upck_pgsr;
	struct__function_parameter.bpsr_upck__resource_file__upck_file = (short)resource_file__upck_file;
	struct__function_parameter.bpsr_upck__resource__repack_pgsr = (short)resource__repack_pgsr;
	if (strcmp(Jstring2CStr(env, order__sub), "pgsr_unpack") == 0) {
		function__bpsr_upck__pgsr_unpack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "pgsr_pack") == 0) {
		function__bpsr_upck__pgsr_pack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "bpsr_unpack") == 0) {
		function__bpsr_upck__bpsr_unpack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "bpsr_pack") == 0) {
		function__bpsr_upck__bpsr_pack();
	}
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXvariableXXresourceXrwdt(JNIEnv * env, jobject thiz, jstring order__sub, jstring file_path__pre, jint slot_start, jint is_full, jint put_1536, jint put_768, jint put_384, jstring parent_path) {
	chdir(Jstring2CStr(env, parent_path));
	strcpy(struct__function_parameter.resource_rwdt__file_path__pre, Jstring2CStr(env, file_path__pre));
	struct__function_parameter.resource_rwdt__slot_start = (int)slot_start;
	struct__function_parameter.resource_rwdt__is_full = (short)is_full;
	struct__function_parameter.resource_rwdt__put_1536 = (short)put_1536;
	struct__function_parameter.resource_rwdt__put_768 = (short)put_768;
	struct__function_parameter.resource_rwdt__put_384 = (short)put_384;
	if (strcmp(Jstring2CStr(env, order__sub), "json_to_text") == 0) {
		function__resource_rwdt__json_to_text();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_json") == 0) {
		function__resource_rwdt__text_to_json();
	} else if (strcmp(Jstring2CStr(env, order__sub), "set_ukv_to_text") == 0) {
		function__resource_rwdt__set_ukv_to_text();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_lite") == 0) {
		function__resource_rwdt__text_lite();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_unpack") == 0) {
		function__resource_rwdt__text_unpack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_pack") == 0) {
		function__resource_rwdt__text_pack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_resource_list") == 0) {
		function__resource_rwdt__text_to_resource_list();
	} else if (strcmp(Jstring2CStr(env, order__sub), "text_to_image_list") == 0) {
		function__resource_rwdt__text_to_image_list();
	}
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXvariableXXimageXrw(JNIEnv * env, jobject thiz, jstring order__sub, jstring file_path__pre, jint is_chdir, jstring parent_path) {
	chdir(Jstring2CStr(env, parent_path));
	strcpy(struct__function_parameter.image_rw__file_path__pre, Jstring2CStr(env, file_path__pre));
	struct__function_parameter.image_rw__is_chdir = (short)is_chdir;
	if (strcmp(Jstring2CStr(env, order__sub), "atlas_unpack") == 0) {
		function__image_rw__atlas_unpack();
	} else if (strcmp(Jstring2CStr(env, order__sub), "atlas_pack") == 0) {
		function__image_rw__atlas_pack();
	}
	if (strcmp(Jstring2CStr(env, order__sub), "png_to_rgba") == 0) {
		function__image_rw__png_to_rgba();
	} else if (strcmp(Jstring2CStr(env, order__sub), "rgba_to_png") == 0) {
		function__image_rw__rgba_to_png();
	}
}

void Java_cn_smallpc_pvztool_app_android_fileIOC_runXfunctionXXbyXvariableXXdtrzXupck(JNIEnv * env, jobject thiz, jstring order__sub, jstring file_path__dtrz) {
	strcpy(struct__function_parameter.dtrz_upck__file_path__dtrz, Jstring2CStr(env, file_path__dtrz));
	if (strcmp(Jstring2CStr(env, order__sub), "dtrz_unpack") == 0) {
		function__dtrz_upck__dtrz_unpack();
	}
}

// native functions end

// functions end

// c end

