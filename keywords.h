/*
 *    keywords.h
 *
 *    Copyright (c) 1997-2002, Larry Wall
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *  This file is built by keywords.pl from its data.  Any changes made here
 *  will be lost!
 */
#define KEY_NULL		0
#define KEY___FILE__		1
#define KEY___LINE__		2
#define KEY___PACKAGE__		3
#define KEY___DATA__		4
#define KEY___END__		5
#define KEY_AUTOLOAD		6
#define KEY_BEGIN		7
#define KEY_CORE		8
#define KEY_DESTROY		9
#define KEY_END			10
#define KEY_INIT		11
#define KEY_CHECK		12
#define KEY_abs			13
#define KEY_accept		14
#define KEY_alarm		15
#define KEY_and			16
#define KEY_atan2		17
#define KEY_bind		18
#define KEY_binmode		19
#define KEY_bless		20
#define KEY_caller		21
#define KEY_chdir		22
#define KEY_chmod		23
#define KEY_chomp		24
#define KEY_chop		25
#define KEY_chown		26
#define KEY_chr			27
#define KEY_chroot		28
#define KEY_close		29
#define KEY_closedir		30
#define KEY_cmp			31
#define KEY_connect		32
#define KEY_continue		33
#define KEY_cos			34
#define KEY_crypt		35
#define KEY_dbmclose		36
#define KEY_dbmopen		37
#define KEY_defined		38
#define KEY_delete		39
#define KEY_die			40
#define KEY_do			41
#define KEY_dump		42
#define KEY_each		43
#define KEY_else		44
#define KEY_elsif		45
#define KEY_endgrent		46
#define KEY_endhostent		47
#define KEY_endnetent		48
#define KEY_endprotoent		49
#define KEY_endpwent		50
#define KEY_endservent		51
#define KEY_eof			52
#define KEY_eq			53
#define KEY_err			54
#define KEY_eval		55
#define KEY_exec		56
#define KEY_exists		57
#define KEY_exit		58
#define KEY_exp			59
#define KEY_fcntl		60
#define KEY_fileno		61
#define KEY_flock		62
#define KEY_for			63
#define KEY_foreach		64
#define KEY_fork		65
#define KEY_format		66
#define KEY_formline		67
#define KEY_ge			68
#define KEY_getc		69
#define KEY_getgrent		70
#define KEY_getgrgid		71
#define KEY_getgrnam		72
#define KEY_gethostbyaddr	73
#define KEY_gethostbyname	74
#define KEY_gethostent		75
#define KEY_getlogin		76
#define KEY_getnetbyaddr	77
#define KEY_getnetbyname	78
#define KEY_getnetent		79
#define KEY_getpeername		80
#define KEY_getpgrp		81
#define KEY_getppid		82
#define KEY_getpriority		83
#define KEY_getprotobyname	84
#define KEY_getprotobynumber	85
#define KEY_getprotoent		86
#define KEY_getpwent		87
#define KEY_getpwnam		88
#define KEY_getpwuid		89
#define KEY_getservbyname	90
#define KEY_getservbyport	91
#define KEY_getservent		92
#define KEY_getsockname		93
#define KEY_getsockopt		94
#define KEY_glob		95
#define KEY_gmtime		96
#define KEY_goto		97
#define KEY_grep		98
#define KEY_gt			99
#define KEY_hex			100
#define KEY_if			101
#define KEY_index		102
#define KEY_int			103
#define KEY_ioctl		104
#define KEY_join		105
#define KEY_keys		106
#define KEY_kill		107
#define KEY_last		108
#define KEY_lc			109
#define KEY_lcfirst		110
#define KEY_le			111
#define KEY_length		112
#define KEY_link		113
#define KEY_listen		114
#define KEY_local		115
#define KEY_localtime		116
#define KEY_lock		117
#define KEY_log			118
#define KEY_lstat		119
#define KEY_lt			120
#define KEY_m			121
#define KEY_map			122
#define KEY_mkdir		123
#define KEY_msgctl		124
#define KEY_msgget		125
#define KEY_msgrcv		126
#define KEY_msgsnd		127
#define KEY_my			128
#define KEY_ne			129
#define KEY_next		130
#define KEY_no			131
#define KEY_not			132
#define KEY_oct			133
#define KEY_open		134
#define KEY_opendir		135
#define KEY_or			136
#define KEY_ord			137
#define KEY_our			138
#define KEY_pack		139
#define KEY_package		140
#define KEY_pipe		141
#define KEY_pop			142
#define KEY_pos			143
#define KEY_print		144
#define KEY_printf		145
#define KEY_prototype		146
#define KEY_push		147
#define KEY_q			148
#define KEY_qq			149
#define KEY_qr			150
#define KEY_quotemeta		151
#define KEY_qw			152
#define KEY_qx			153
#define KEY_rand		154
#define KEY_read		155
#define KEY_readdir		156
#define KEY_readline		157
#define KEY_readlink		158
#define KEY_readpipe		159
#define KEY_recv		160
#define KEY_redo		161
#define KEY_ref			162
#define KEY_rename		163
#define KEY_require		164
#define KEY_reset		165
#define KEY_return		166
#define KEY_reverse		167
#define KEY_rewinddir		168
#define KEY_rindex		169
#define KEY_rmdir		170
#define KEY_s			171
#define KEY_scalar		172
#define KEY_seek		173
#define KEY_seekdir		174
#define KEY_select		175
#define KEY_semctl		176
#define KEY_semget		177
#define KEY_semop		178
#define KEY_send		179
#define KEY_setgrent		180
#define KEY_sethostent		181
#define KEY_setnetent		182
#define KEY_setpgrp		183
#define KEY_setpriority		184
#define KEY_setprotoent		185
#define KEY_setpwent		186
#define KEY_setservent		187
#define KEY_setsockopt		188
#define KEY_shift		189
#define KEY_shmctl		190
#define KEY_shmget		191
#define KEY_shmread		192
#define KEY_shmwrite		193
#define KEY_shutdown		194
#define KEY_sin			195
#define KEY_sleep		196
#define KEY_socket		197
#define KEY_socketpair		198
#define KEY_sort		199
#define KEY_splice		200
#define KEY_split		201
#define KEY_sprintf		202
#define KEY_sqrt		203
#define KEY_srand		204
#define KEY_stat		205
#define KEY_study		206
#define KEY_sub			207
#define KEY_substr		208
#define KEY_symlink		209
#define KEY_syscall		210
#define KEY_sysopen		211
#define KEY_sysread		212
#define KEY_sysseek		213
#define KEY_system		214
#define KEY_syswrite		215
#define KEY_tell		216
#define KEY_telldir		217
#define KEY_tie			218
#define KEY_tied		219
#define KEY_time		220
#define KEY_times		221
#define KEY_tr			222
#define KEY_truncate		223
#define KEY_uc			224
#define KEY_ucfirst		225
#define KEY_umask		226
#define KEY_undef		227
#define KEY_unless		228
#define KEY_unlink		229
#define KEY_unpack		230
#define KEY_unshift		231
#define KEY_untie		232
#define KEY_until		233
#define KEY_use			234
#define KEY_utime		235
#define KEY_values		236
#define KEY_vec			237
#define KEY_wait		238
#define KEY_waitpid		239
#define KEY_wantarray		240
#define KEY_warn		241
#define KEY_while		242
#define KEY_write		243
#define KEY_x			244
#define KEY_xor			245
#define KEY_y			246
