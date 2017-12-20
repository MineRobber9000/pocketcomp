		// nop
		case 0x00:
			print_instruction_0_args("nop");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld bc,?
		case 0x01:
			get_word();
			print_instruction_2_args("ld", "bc", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// ld (bc),a
		case 0x02:
			print_instruction_2_args("ld", "(bc)", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc bc
		case 0x03:
			print_instruction_1_args("inc", "bc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc b
		case 0x04:
			print_instruction_1_args("inc", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec b
		case 0x05:
			print_instruction_1_args("dec", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,x
		case 0x06:
			get_byte();
			print_instruction_2_args("ld", "b", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rlca
		case 0x07:
			print_instruction_0_args("rlca");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (?),sp
		case 0x08:
			get_word();
			print_instruction_2_args("ld", format_indirect_address_hex(arg), "sp");
			print_comment(3);
			if(!find) printf("\n");
			break;

		// add hl,bc
		case 0x09:
			print_instruction_2_args("add", "hl", "bc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,(bc)
		case 0x0a:
			print_instruction_2_args("ld", "a", "(bc)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec bc
		case 0x0b:
			print_instruction_1_args("dec", "bc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc c
		case 0x0c:
			print_instruction_1_args("inc", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec c
		case 0x0d:
			print_instruction_1_args("dec", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,x
		case 0x0e:
			get_byte();
			print_instruction_2_args("ld", "c", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rrca
		case 0x0f:
			print_instruction_0_args("rrca");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// stop
		case 0x10:
			print_instruction_0_args("stop");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld de,?
		case 0x11:
			get_word();
			print_instruction_2_args("ld", "de", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// ld (de),a
		case 0x12:
			print_instruction_2_args("ld", "(de)", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc de
		case 0x13:
			print_instruction_1_args("inc", "de");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc d
		case 0x14:
			print_instruction_1_args("inc", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec d
		case 0x15:
			print_instruction_1_args("dec", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,x
		case 0x16:
			get_byte();
			print_instruction_2_args("ld", "d", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rla
		case 0x17:
			print_instruction_0_args("rla");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jr s
		case 0x18:
			get_byte();
			print_instruction_1_args("jr", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// add hl,de
		case 0x19:
			print_instruction_2_args("add", "hl", "de");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,(de)
		case 0x1a:
			print_instruction_2_args("ld", "a", "(de)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec de
		case 0x1b:
			print_instruction_1_args("dec", "de");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc e
		case 0x1c:
			print_instruction_1_args("inc", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec e
		case 0x1d:
			print_instruction_1_args("dec", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,x
		case 0x1e:
			get_byte();
			print_instruction_2_args("ld", "e", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rra
		case 0x1f:
			print_instruction_0_args("rra");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jr nz,s
		case 0x20:
			get_byte();
			print_instruction_2_args("jr", "nz", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// ld hl,?
		case 0x21:
			get_word();
			print_instruction_2_args("ld", "hl", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// ldi (hl),a
		case 0x22:
			print_instruction_2_args("ldi", "(hl)", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc hl
		case 0x23:
			print_instruction_1_args("inc", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc h
		case 0x24:
			print_instruction_1_args("inc", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec h
		case 0x25:
			print_instruction_1_args("dec", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,x
		case 0x26:
			get_byte();
			print_instruction_2_args("ld", "h", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// daa
		case 0x27:
			print_instruction_0_args("daa");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jr z,s
		case 0x28:
			get_byte();
			print_instruction_2_args("jr", "z", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// add hl,hl
		case 0x29:
			print_instruction_2_args("add", "hl", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ldi a,(hl)
		case 0x2a:
			print_instruction_2_args("ldi", "a", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec hl
		case 0x2b:
			print_instruction_1_args("dec", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc l
		case 0x2c:
			print_instruction_1_args("inc", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec l
		case 0x2d:
			print_instruction_1_args("dec", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,x
		case 0x2e:
			get_byte();
			print_instruction_2_args("ld", "l", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// cpl
		case 0x2f:
			print_instruction_0_args("cpl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jr nc,s
		case 0x30:
			get_byte();
			print_instruction_2_args("jr", "nc", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// ld sp,?
		case 0x31:
			get_word();
			print_instruction_2_args("ld", "sp", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// ldd (hl),a
		case 0x32:
			print_instruction_2_args("ldd", "(hl)", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc sp
		case 0x33:
			print_instruction_1_args("inc", "sp");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc (hl)
		case 0x34:
			print_instruction_1_args("inc", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec (hl)
		case 0x35:
			print_instruction_1_args("dec", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),x
		case 0x36:
			get_byte();
			print_instruction_2_args("ld", "(hl)", format_byte_hex(arg));
			print_comment(2);
			if(!find) printf("\n");
			break;

		// scf
		case 0x37:
			print_instruction_0_args("scf");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jr c,s
		case 0x38:
			get_byte();
			print_instruction_2_args("jr", "c", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// add hl,sp
		case 0x39:
			print_instruction_2_args("add", "hl", "sp");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ldd a,(hl)
		case 0x3a:
			print_instruction_2_args("ldd", "a", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec sp
		case 0x3b:
			print_instruction_1_args("dec", "sp");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// inc a
		case 0x3c:
			print_instruction_1_args("inc", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// dec a
		case 0x3d:
			print_instruction_1_args("dec", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,x
		case 0x3e:
			get_byte();
			print_instruction_2_args("ld", "a", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// ccf
		case 0x3f:
			print_instruction_0_args("ccf");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,b
		case 0x40:
			print_instruction_2_args("ld", "b", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,c
		case 0x41:
			print_instruction_2_args("ld", "b", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,d
		case 0x42:
			print_instruction_2_args("ld", "b", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,e
		case 0x43:
			print_instruction_2_args("ld", "b", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,h
		case 0x44:
			print_instruction_2_args("ld", "b", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,l
		case 0x45:
			print_instruction_2_args("ld", "b", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,(hl)
		case 0x46:
			print_instruction_2_args("ld", "b", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld b,a
		case 0x47:
			print_instruction_2_args("ld", "b", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,b
		case 0x48:
			print_instruction_2_args("ld", "c", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,c
		case 0x49:
			print_instruction_2_args("ld", "c", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,d
		case 0x4a:
			print_instruction_2_args("ld", "c", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,e
		case 0x4b:
			print_instruction_2_args("ld", "c", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,h
		case 0x4c:
			print_instruction_2_args("ld", "c", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,l
		case 0x4d:
			print_instruction_2_args("ld", "c", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,(hl)
		case 0x4e:
			print_instruction_2_args("ld", "c", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld c,a
		case 0x4f:
			print_instruction_2_args("ld", "c", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,b
		case 0x50:
			print_instruction_2_args("ld", "d", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,c
		case 0x51:
			print_instruction_2_args("ld", "d", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,d
		case 0x52:
			print_instruction_2_args("ld", "d", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,e
		case 0x53:
			print_instruction_2_args("ld", "d", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,h
		case 0x54:
			print_instruction_2_args("ld", "d", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,l
		case 0x55:
			print_instruction_2_args("ld", "d", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,(hl)
		case 0x56:
			print_instruction_2_args("ld", "d", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld d,a
		case 0x57:
			print_instruction_2_args("ld", "d", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,b
		case 0x58:
			print_instruction_2_args("ld", "e", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,c
		case 0x59:
			print_instruction_2_args("ld", "e", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,d
		case 0x5a:
			print_instruction_2_args("ld", "e", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,e
		case 0x5b:
			print_instruction_2_args("ld", "e", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,h
		case 0x5c:
			print_instruction_2_args("ld", "e", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,l
		case 0x5d:
			print_instruction_2_args("ld", "e", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,(hl)
		case 0x5e:
			print_instruction_2_args("ld", "e", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld e,a
		case 0x5f:
			print_instruction_2_args("ld", "e", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,b
		case 0x60:
			print_instruction_2_args("ld", "h", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,c
		case 0x61:
			print_instruction_2_args("ld", "h", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,d
		case 0x62:
			print_instruction_2_args("ld", "h", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,e
		case 0x63:
			print_instruction_2_args("ld", "h", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,h
		case 0x64:
			print_instruction_2_args("ld", "h", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,l
		case 0x65:
			print_instruction_2_args("ld", "h", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,(hl)
		case 0x66:
			print_instruction_2_args("ld", "h", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld h,a
		case 0x67:
			print_instruction_2_args("ld", "h", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,b
		case 0x68:
			print_instruction_2_args("ld", "l", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,c
		case 0x69:
			print_instruction_2_args("ld", "l", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,d
		case 0x6a:
			print_instruction_2_args("ld", "l", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,e
		case 0x6b:
			print_instruction_2_args("ld", "l", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,h
		case 0x6c:
			print_instruction_2_args("ld", "l", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,l
		case 0x6d:
			print_instruction_2_args("ld", "l", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,(hl)
		case 0x6e:
			print_instruction_2_args("ld", "l", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld l,a
		case 0x6f:
			print_instruction_2_args("ld", "l", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),b
		case 0x70:
			print_instruction_2_args("ld", "(hl)", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),c
		case 0x71:
			print_instruction_2_args("ld", "(hl)", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),d
		case 0x72:
			print_instruction_2_args("ld", "(hl)", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),e
		case 0x73:
			print_instruction_2_args("ld", "(hl)", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),h
		case 0x74:
			print_instruction_2_args("ld", "(hl)", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),l
		case 0x75:
			print_instruction_2_args("ld", "(hl)", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// halt
		case 0x76:
			print_instruction_0_args("halt");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (hl),a
		case 0x77:
			print_instruction_2_args("ld", "(hl)", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,b
		case 0x78:
			print_instruction_2_args("ld", "a", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,c
		case 0x79:
			print_instruction_2_args("ld", "a", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,d
		case 0x7a:
			print_instruction_2_args("ld", "a", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,e
		case 0x7b:
			print_instruction_2_args("ld", "a", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,h
		case 0x7c:
			print_instruction_2_args("ld", "a", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,l
		case 0x7d:
			print_instruction_2_args("ld", "a", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,(hl)
		case 0x7e:
			print_instruction_2_args("ld", "a", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,a
		case 0x7f:
			print_instruction_2_args("ld", "a", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add b
		case 0x80:
			print_instruction_1_args("add", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add c
		case 0x81:
			print_instruction_1_args("add", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add d
		case 0x82:
			print_instruction_1_args("add", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add e
		case 0x83:
			print_instruction_1_args("add", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add h
		case 0x84:
			print_instruction_1_args("add", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add l
		case 0x85:
			print_instruction_1_args("add", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add (hl)
		case 0x86:
			print_instruction_1_args("add", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add a
		case 0x87:
			print_instruction_1_args("add", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc b
		case 0x88:
			print_instruction_1_args("adc", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc c
		case 0x89:
			print_instruction_1_args("adc", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc d
		case 0x8a:
			print_instruction_1_args("adc", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc e
		case 0x8b:
			print_instruction_1_args("adc", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc h
		case 0x8c:
			print_instruction_1_args("adc", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc l
		case 0x8d:
			print_instruction_1_args("adc", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc (hl)
		case 0x8e:
			print_instruction_1_args("adc", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// adc a
		case 0x8f:
			print_instruction_1_args("adc", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub b
		case 0x90:
			print_instruction_1_args("sub", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub c
		case 0x91:
			print_instruction_1_args("sub", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub d
		case 0x92:
			print_instruction_1_args("sub", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub e
		case 0x93:
			print_instruction_1_args("sub", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub h
		case 0x94:
			print_instruction_1_args("sub", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub l
		case 0x95:
			print_instruction_1_args("sub", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub (hl)
		case 0x96:
			print_instruction_1_args("sub", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub a
		case 0x97:
			print_instruction_1_args("sub", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc b
		case 0x98:
			print_instruction_1_args("sbc", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc c
		case 0x99:
			print_instruction_1_args("sbc", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc d
		case 0x9a:
			print_instruction_1_args("sbc", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc e
		case 0x9b:
			print_instruction_1_args("sbc", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc h
		case 0x9c:
			print_instruction_1_args("sbc", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc l
		case 0x9d:
			print_instruction_1_args("sbc", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc (hl)
		case 0x9e:
			print_instruction_1_args("sbc", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sbc a
		case 0x9f:
			print_instruction_1_args("sbc", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and b
		case 0xa0:
			print_instruction_1_args("and", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and c
		case 0xa1:
			print_instruction_1_args("and", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and d
		case 0xa2:
			print_instruction_1_args("and", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and e
		case 0xa3:
			print_instruction_1_args("and", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and h
		case 0xa4:
			print_instruction_1_args("and", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and l
		case 0xa5:
			print_instruction_1_args("and", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and (hl)
		case 0xa6:
			print_instruction_1_args("and", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and a
		case 0xa7:
			print_instruction_1_args("and", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor b
		case 0xa8:
			print_instruction_1_args("xor", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor c
		case 0xa9:
			print_instruction_1_args("xor", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor d
		case 0xaa:
			print_instruction_1_args("xor", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor e
		case 0xab:
			print_instruction_1_args("xor", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor h
		case 0xac:
			print_instruction_1_args("xor", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor l
		case 0xad:
			print_instruction_1_args("xor", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor (hl)
		case 0xae:
			print_instruction_1_args("xor", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// xor a
		case 0xaf:
			print_instruction_1_args("xor", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or b
		case 0xb0:
			print_instruction_1_args("or", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or c
		case 0xb1:
			print_instruction_1_args("or", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or d
		case 0xb2:
			print_instruction_1_args("or", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or e
		case 0xb3:
			print_instruction_1_args("or", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or h
		case 0xb4:
			print_instruction_1_args("or", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or l
		case 0xb5:
			print_instruction_1_args("or", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or (hl)
		case 0xb6:
			print_instruction_1_args("or", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or a
		case 0xb7:
			print_instruction_1_args("or", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp b
		case 0xb8:
			print_instruction_1_args("cp", "b");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp c
		case 0xb9:
			print_instruction_1_args("cp", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp d
		case 0xba:
			print_instruction_1_args("cp", "d");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp e
		case 0xbb:
			print_instruction_1_args("cp", "e");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp h
		case 0xbc:
			print_instruction_1_args("cp", "h");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp l
		case 0xbd:
			print_instruction_1_args("cp", "l");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp (hl)
		case 0xbe:
			print_instruction_1_args("cp", "(hl)");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp a
		case 0xbf:
			print_instruction_1_args("cp", "a");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ret nz
		case 0xc0:
			print_instruction_1_args("ret", "nz");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// pop bc
		case 0xc1:
			print_instruction_1_args("pop", "bc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jp nz,?
		case 0xc2:
			get_word();
			print_instruction_2_args("jp", "nz", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// jp ?
		case 0xc3:
			get_word();
			print_instruction_1_args("jp", resolve_address(arg));
			if(!find) printf("\t");
			print_comment(3);
			if(!find) printf("\n");
			break;

		// call nz,?
		case 0xc4:
			get_word();
			print_instruction_2_args("call", "nz", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// push bc
		case 0xc5:
			print_instruction_1_args("push", "bc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add x
		case 0xc6:
			get_byte();
			print_instruction_1_args("add", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $0
		case 0xc7:
			print_instruction_1_args("rst", "$0");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ret z
		case 0xc8:
			print_instruction_1_args("ret", "z");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ret
		case 0xc9:
			print_instruction_0_args("ret");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jp z,?
		case 0xca:
			get_word();
			print_instruction_2_args("jp", "z", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// opcode prefix: 0xcb
		case 0xcb:
			get_extended_byte();
			switch(extended_byte)
			{
			// rlc b
			case 0x00:
				print_instruction_1_args("rlc", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc c
			case 0x01:
				print_instruction_1_args("rlc", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc d
			case 0x02:
				print_instruction_1_args("rlc", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc e
			case 0x03:
				print_instruction_1_args("rlc", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc h
			case 0x04:
				print_instruction_1_args("rlc", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc l
			case 0x05:
				print_instruction_1_args("rlc", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc (hl)
			case 0x06:
				print_instruction_1_args("rlc", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rlc a
			case 0x07:
				print_instruction_1_args("rlc", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc b
			case 0x08:
				print_instruction_1_args("rrc", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc c
			case 0x09:
				print_instruction_1_args("rrc", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc d
			case 0x0a:
				print_instruction_1_args("rrc", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc e
			case 0x0b:
				print_instruction_1_args("rrc", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc h
			case 0x0c:
				print_instruction_1_args("rrc", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc l
			case 0x0d:
				print_instruction_1_args("rrc", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc (hl)
			case 0x0e:
				print_instruction_1_args("rrc", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rrc a
			case 0x0f:
				print_instruction_1_args("rrc", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl b
			case 0x10:
				print_instruction_1_args("rl", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl c
			case 0x11:
				print_instruction_1_args("rl", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl d
			case 0x12:
				print_instruction_1_args("rl", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl e
			case 0x13:
				print_instruction_1_args("rl", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl h
			case 0x14:
				print_instruction_1_args("rl", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl l
			case 0x15:
				print_instruction_1_args("rl", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl (hl)
			case 0x16:
				print_instruction_1_args("rl", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rl a
			case 0x17:
				print_instruction_1_args("rl", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr b
			case 0x18:
				print_instruction_1_args("rr", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr c
			case 0x19:
				print_instruction_1_args("rr", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr d
			case 0x1a:
				print_instruction_1_args("rr", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr e
			case 0x1b:
				print_instruction_1_args("rr", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr h
			case 0x1c:
				print_instruction_1_args("rr", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr l
			case 0x1d:
				print_instruction_1_args("rr", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr (hl)
			case 0x1e:
				print_instruction_1_args("rr", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// rr a
			case 0x1f:
				print_instruction_1_args("rr", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla b
			case 0x20:
				print_instruction_1_args("sla", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla c
			case 0x21:
				print_instruction_1_args("sla", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla d
			case 0x22:
				print_instruction_1_args("sla", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla e
			case 0x23:
				print_instruction_1_args("sla", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla h
			case 0x24:
				print_instruction_1_args("sla", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla l
			case 0x25:
				print_instruction_1_args("sla", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla (hl)
			case 0x26:
				print_instruction_1_args("sla", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sla a
			case 0x27:
				print_instruction_1_args("sla", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra b
			case 0x28:
				print_instruction_1_args("sra", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra c
			case 0x29:
				print_instruction_1_args("sra", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra d
			case 0x2a:
				print_instruction_1_args("sra", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra e
			case 0x2b:
				print_instruction_1_args("sra", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra h
			case 0x2c:
				print_instruction_1_args("sra", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra l
			case 0x2d:
				print_instruction_1_args("sra", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra (hl)
			case 0x2e:
				print_instruction_1_args("sra", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// sra a
			case 0x2f:
				print_instruction_1_args("sra", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap b
			case 0x30:
				print_instruction_1_args("swap", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap c
			case 0x31:
				print_instruction_1_args("swap", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap d
			case 0x32:
				print_instruction_1_args("swap", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap e
			case 0x33:
				print_instruction_1_args("swap", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap h
			case 0x34:
				print_instruction_1_args("swap", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap l
			case 0x35:
				print_instruction_1_args("swap", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap (hl)
			case 0x36:
				print_instruction_1_args("swap", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// swap a
			case 0x37:
				print_instruction_1_args("swap", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl b
			case 0x38:
				print_instruction_1_args("srl", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl c
			case 0x39:
				print_instruction_1_args("srl", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl d
			case 0x3a:
				print_instruction_1_args("srl", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl e
			case 0x3b:
				print_instruction_1_args("srl", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl h
			case 0x3c:
				print_instruction_1_args("srl", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl l
			case 0x3d:
				print_instruction_1_args("srl", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl (hl)
			case 0x3e:
				print_instruction_1_args("srl", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// srl a
			case 0x3f:
				print_instruction_1_args("srl", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,b
			case 0x40:
				print_instruction_2_args("bit", "0", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,c
			case 0x41:
				print_instruction_2_args("bit", "0", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,d
			case 0x42:
				print_instruction_2_args("bit", "0", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,e
			case 0x43:
				print_instruction_2_args("bit", "0", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,h
			case 0x44:
				print_instruction_2_args("bit", "0", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,l
			case 0x45:
				print_instruction_2_args("bit", "0", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,(hl)
			case 0x46:
				print_instruction_2_args("bit", "0", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 0,a
			case 0x47:
				print_instruction_2_args("bit", "0", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,b
			case 0x48:
				print_instruction_2_args("bit", "1", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,c
			case 0x49:
				print_instruction_2_args("bit", "1", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,d
			case 0x4a:
				print_instruction_2_args("bit", "1", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,e
			case 0x4b:
				print_instruction_2_args("bit", "1", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,h
			case 0x4c:
				print_instruction_2_args("bit", "1", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,l
			case 0x4d:
				print_instruction_2_args("bit", "1", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,(hl)
			case 0x4e:
				print_instruction_2_args("bit", "1", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 1,a
			case 0x4f:
				print_instruction_2_args("bit", "1", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,b
			case 0x50:
				print_instruction_2_args("bit", "2", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,c
			case 0x51:
				print_instruction_2_args("bit", "2", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,d
			case 0x52:
				print_instruction_2_args("bit", "2", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,e
			case 0x53:
				print_instruction_2_args("bit", "2", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,h
			case 0x54:
				print_instruction_2_args("bit", "2", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,l
			case 0x55:
				print_instruction_2_args("bit", "2", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,(hl)
			case 0x56:
				print_instruction_2_args("bit", "2", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 2,a
			case 0x57:
				print_instruction_2_args("bit", "2", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,b
			case 0x58:
				print_instruction_2_args("bit", "3", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,c
			case 0x59:
				print_instruction_2_args("bit", "3", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,d
			case 0x5a:
				print_instruction_2_args("bit", "3", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,e
			case 0x5b:
				print_instruction_2_args("bit", "3", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,h
			case 0x5c:
				print_instruction_2_args("bit", "3", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,l
			case 0x5d:
				print_instruction_2_args("bit", "3", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,(hl)
			case 0x5e:
				print_instruction_2_args("bit", "3", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 3,a
			case 0x5f:
				print_instruction_2_args("bit", "3", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,b
			case 0x60:
				print_instruction_2_args("bit", "4", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,c
			case 0x61:
				print_instruction_2_args("bit", "4", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,d
			case 0x62:
				print_instruction_2_args("bit", "4", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,e
			case 0x63:
				print_instruction_2_args("bit", "4", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,h
			case 0x64:
				print_instruction_2_args("bit", "4", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,l
			case 0x65:
				print_instruction_2_args("bit", "4", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,(hl)
			case 0x66:
				print_instruction_2_args("bit", "4", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 4,a
			case 0x67:
				print_instruction_2_args("bit", "4", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,b
			case 0x68:
				print_instruction_2_args("bit", "5", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,c
			case 0x69:
				print_instruction_2_args("bit", "5", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,d
			case 0x6a:
				print_instruction_2_args("bit", "5", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,e
			case 0x6b:
				print_instruction_2_args("bit", "5", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,h
			case 0x6c:
				print_instruction_2_args("bit", "5", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,l
			case 0x6d:
				print_instruction_2_args("bit", "5", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,(hl)
			case 0x6e:
				print_instruction_2_args("bit", "5", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 5,a
			case 0x6f:
				print_instruction_2_args("bit", "5", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,b
			case 0x70:
				print_instruction_2_args("bit", "6", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,c
			case 0x71:
				print_instruction_2_args("bit", "6", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,d
			case 0x72:
				print_instruction_2_args("bit", "6", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,e
			case 0x73:
				print_instruction_2_args("bit", "6", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,h
			case 0x74:
				print_instruction_2_args("bit", "6", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,l
			case 0x75:
				print_instruction_2_args("bit", "6", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,(hl)
			case 0x76:
				print_instruction_2_args("bit", "6", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 6,a
			case 0x77:
				print_instruction_2_args("bit", "6", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,b
			case 0x78:
				print_instruction_2_args("bit", "7", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,c
			case 0x79:
				print_instruction_2_args("bit", "7", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,d
			case 0x7a:
				print_instruction_2_args("bit", "7", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,e
			case 0x7b:
				print_instruction_2_args("bit", "7", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,h
			case 0x7c:
				print_instruction_2_args("bit", "7", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,l
			case 0x7d:
				print_instruction_2_args("bit", "7", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,(hl)
			case 0x7e:
				print_instruction_2_args("bit", "7", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// bit 7,a
			case 0x7f:
				print_instruction_2_args("bit", "7", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,b
			case 0x80:
				print_instruction_2_args("res", "0", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,c
			case 0x81:
				print_instruction_2_args("res", "0", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,d
			case 0x82:
				print_instruction_2_args("res", "0", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,e
			case 0x83:
				print_instruction_2_args("res", "0", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,h
			case 0x84:
				print_instruction_2_args("res", "0", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,l
			case 0x85:
				print_instruction_2_args("res", "0", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,(hl)
			case 0x86:
				print_instruction_2_args("res", "0", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 0,a
			case 0x87:
				print_instruction_2_args("res", "0", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,b
			case 0x88:
				print_instruction_2_args("res", "1", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,c
			case 0x89:
				print_instruction_2_args("res", "1", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,d
			case 0x8a:
				print_instruction_2_args("res", "1", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,e
			case 0x8b:
				print_instruction_2_args("res", "1", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,h
			case 0x8c:
				print_instruction_2_args("res", "1", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,l
			case 0x8d:
				print_instruction_2_args("res", "1", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,(hl)
			case 0x8e:
				print_instruction_2_args("res", "1", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 1,a
			case 0x8f:
				print_instruction_2_args("res", "1", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,b
			case 0x90:
				print_instruction_2_args("res", "2", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,c
			case 0x91:
				print_instruction_2_args("res", "2", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,d
			case 0x92:
				print_instruction_2_args("res", "2", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,e
			case 0x93:
				print_instruction_2_args("res", "2", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,h
			case 0x94:
				print_instruction_2_args("res", "2", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,l
			case 0x95:
				print_instruction_2_args("res", "2", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,(hl)
			case 0x96:
				print_instruction_2_args("res", "2", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 2,a
			case 0x97:
				print_instruction_2_args("res", "2", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,b
			case 0x98:
				print_instruction_2_args("res", "3", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,c
			case 0x99:
				print_instruction_2_args("res", "3", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,d
			case 0x9a:
				print_instruction_2_args("res", "3", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,e
			case 0x9b:
				print_instruction_2_args("res", "3", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,h
			case 0x9c:
				print_instruction_2_args("res", "3", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,l
			case 0x9d:
				print_instruction_2_args("res", "3", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,(hl)
			case 0x9e:
				print_instruction_2_args("res", "3", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 3,a
			case 0x9f:
				print_instruction_2_args("res", "3", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,b
			case 0xa0:
				print_instruction_2_args("res", "4", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,c
			case 0xa1:
				print_instruction_2_args("res", "4", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,d
			case 0xa2:
				print_instruction_2_args("res", "4", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,e
			case 0xa3:
				print_instruction_2_args("res", "4", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,h
			case 0xa4:
				print_instruction_2_args("res", "4", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,l
			case 0xa5:
				print_instruction_2_args("res", "4", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,(hl)
			case 0xa6:
				print_instruction_2_args("res", "4", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 4,a
			case 0xa7:
				print_instruction_2_args("res", "4", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,b
			case 0xa8:
				print_instruction_2_args("res", "5", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,c
			case 0xa9:
				print_instruction_2_args("res", "5", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,d
			case 0xaa:
				print_instruction_2_args("res", "5", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,e
			case 0xab:
				print_instruction_2_args("res", "5", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,h
			case 0xac:
				print_instruction_2_args("res", "5", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,l
			case 0xad:
				print_instruction_2_args("res", "5", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,(hl)
			case 0xae:
				print_instruction_2_args("res", "5", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 5,a
			case 0xaf:
				print_instruction_2_args("res", "5", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,b
			case 0xb0:
				print_instruction_2_args("res", "6", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,c
			case 0xb1:
				print_instruction_2_args("res", "6", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,d
			case 0xb2:
				print_instruction_2_args("res", "6", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,e
			case 0xb3:
				print_instruction_2_args("res", "6", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,h
			case 0xb4:
				print_instruction_2_args("res", "6", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,l
			case 0xb5:
				print_instruction_2_args("res", "6", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,(hl)
			case 0xb6:
				print_instruction_2_args("res", "6", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 6,a
			case 0xb7:
				print_instruction_2_args("res", "6", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,b
			case 0xb8:
				print_instruction_2_args("res", "7", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,c
			case 0xb9:
				print_instruction_2_args("res", "7", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,d
			case 0xba:
				print_instruction_2_args("res", "7", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,e
			case 0xbb:
				print_instruction_2_args("res", "7", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,h
			case 0xbc:
				print_instruction_2_args("res", "7", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,l
			case 0xbd:
				print_instruction_2_args("res", "7", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,(hl)
			case 0xbe:
				print_instruction_2_args("res", "7", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// res 7,a
			case 0xbf:
				print_instruction_2_args("res", "7", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,b
			case 0xc0:
				print_instruction_2_args("set", "0", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,c
			case 0xc1:
				print_instruction_2_args("set", "0", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,d
			case 0xc2:
				print_instruction_2_args("set", "0", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,e
			case 0xc3:
				print_instruction_2_args("set", "0", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,h
			case 0xc4:
				print_instruction_2_args("set", "0", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,l
			case 0xc5:
				print_instruction_2_args("set", "0", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,(hl)
			case 0xc6:
				print_instruction_2_args("set", "0", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 0,a
			case 0xc7:
				print_instruction_2_args("set", "0", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,b
			case 0xc8:
				print_instruction_2_args("set", "1", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,c
			case 0xc9:
				print_instruction_2_args("set", "1", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,d
			case 0xca:
				print_instruction_2_args("set", "1", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,e
			case 0xcb:
				print_instruction_2_args("set", "1", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,h
			case 0xcc:
				print_instruction_2_args("set", "1", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,l
			case 0xcd:
				print_instruction_2_args("set", "1", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,(hl)
			case 0xce:
				print_instruction_2_args("set", "1", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 1,a
			case 0xcf:
				print_instruction_2_args("set", "1", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,b
			case 0xd0:
				print_instruction_2_args("set", "2", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,c
			case 0xd1:
				print_instruction_2_args("set", "2", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,d
			case 0xd2:
				print_instruction_2_args("set", "2", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,e
			case 0xd3:
				print_instruction_2_args("set", "2", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,h
			case 0xd4:
				print_instruction_2_args("set", "2", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,l
			case 0xd5:
				print_instruction_2_args("set", "2", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,(hl)
			case 0xd6:
				print_instruction_2_args("set", "2", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 2,a
			case 0xd7:
				print_instruction_2_args("set", "2", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,b
			case 0xd8:
				print_instruction_2_args("set", "3", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,c
			case 0xd9:
				print_instruction_2_args("set", "3", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,d
			case 0xda:
				print_instruction_2_args("set", "3", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,e
			case 0xdb:
				print_instruction_2_args("set", "3", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,h
			case 0xdc:
				print_instruction_2_args("set", "3", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,l
			case 0xdd:
				print_instruction_2_args("set", "3", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,(hl)
			case 0xde:
				print_instruction_2_args("set", "3", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 3,a
			case 0xdf:
				print_instruction_2_args("set", "3", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,b
			case 0xe0:
				print_instruction_2_args("set", "4", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,c
			case 0xe1:
				print_instruction_2_args("set", "4", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,d
			case 0xe2:
				print_instruction_2_args("set", "4", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,e
			case 0xe3:
				print_instruction_2_args("set", "4", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,h
			case 0xe4:
				print_instruction_2_args("set", "4", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,l
			case 0xe5:
				print_instruction_2_args("set", "4", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,(hl)
			case 0xe6:
				print_instruction_2_args("set", "4", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 4,a
			case 0xe7:
				print_instruction_2_args("set", "4", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,b
			case 0xe8:
				print_instruction_2_args("set", "5", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,c
			case 0xe9:
				print_instruction_2_args("set", "5", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,d
			case 0xea:
				print_instruction_2_args("set", "5", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,e
			case 0xeb:
				print_instruction_2_args("set", "5", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,h
			case 0xec:
				print_instruction_2_args("set", "5", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,l
			case 0xed:
				print_instruction_2_args("set", "5", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,(hl)
			case 0xee:
				print_instruction_2_args("set", "5", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 5,a
			case 0xef:
				print_instruction_2_args("set", "5", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,b
			case 0xf0:
				print_instruction_2_args("set", "6", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,c
			case 0xf1:
				print_instruction_2_args("set", "6", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,d
			case 0xf2:
				print_instruction_2_args("set", "6", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,e
			case 0xf3:
				print_instruction_2_args("set", "6", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,h
			case 0xf4:
				print_instruction_2_args("set", "6", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,l
			case 0xf5:
				print_instruction_2_args("set", "6", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,(hl)
			case 0xf6:
				print_instruction_2_args("set", "6", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 6,a
			case 0xf7:
				print_instruction_2_args("set", "6", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,b
			case 0xf8:
				print_instruction_2_args("set", "7", "b");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,c
			case 0xf9:
				print_instruction_2_args("set", "7", "c");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,d
			case 0xfa:
				print_instruction_2_args("set", "7", "d");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,e
			case 0xfb:
				print_instruction_2_args("set", "7", "e");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,h
			case 0xfc:
				print_instruction_2_args("set", "7", "h");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,l
			case 0xfd:
				print_instruction_2_args("set", "7", "l");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,(hl)
			case 0xfe:
				print_instruction_2_args("set", "7", "(hl)");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// set 7,a
			case 0xff:
				print_instruction_2_args("set", "7", "a");
				if(!find) printf("\t");
				print_comment(2);
				if(!find) printf("\n");
				break;

			// unknown opcode
			default:
				print_db(extended_byte);
				break;
			}
			break;

		// call z,?
		case 0xcc:
			get_word();
			print_instruction_2_args("call", "z", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// call ?
		case 0xcd:
			get_word();
			print_instruction_1_args("call", resolve_address(arg));
			if(!find) printf("\t");
			print_comment(3);
			if(!find) printf("\n");
			break;

		// adc x
		case 0xce:
			get_byte();
			print_instruction_1_args("adc", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $8
		case 0xcf:
			print_instruction_1_args("rst", "$8");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ret nc
		case 0xd0:
			print_instruction_1_args("ret", "nc");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// pop de
		case 0xd1:
			print_instruction_1_args("pop", "de");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jp nc,?
		case 0xd2:
			get_word();
			print_instruction_2_args("jp", "nc", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// call nc,?
		case 0xd4:
			get_word();
			print_instruction_2_args("call", "nc", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// push de
		case 0xd5:
			print_instruction_1_args("push", "de");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// sub x
		case 0xd6:
			get_byte();
			print_instruction_1_args("sub", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $10
		case 0xd7:
			print_instruction_1_args("rst", "$10");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ret c
		case 0xd8:
			print_instruction_1_args("ret", "c");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// reti
		case 0xd9:
			print_instruction_0_args("reti");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// jp c,?
		case 0xda:
			get_word();
			print_instruction_2_args("jp", "c", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// call c,?
		case 0xdc:
			get_word();
			print_instruction_2_args("call", "c", resolve_address(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// sbc x
		case 0xde:
			get_byte();
			print_instruction_1_args("sbc", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $18
		case 0xdf:
			print_instruction_1_args("rst", "$18");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ldh (x),a
		case 0xe0:
			get_byte();
			print_instruction_2_args("ldh", format_indirect_high_address_hex(arg), "a");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// pop hl
		case 0xe1:
			print_instruction_1_args("pop", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld ($ff00+c),a
		case 0xe2:
			print_instruction_2_args("ld", "($ff00+c)", "a");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// push hl
		case 0xe5:
			print_instruction_1_args("push", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// and x
		case 0xe6:
			get_byte();
			print_instruction_1_args("and", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $20
		case 0xe7:
			print_instruction_1_args("rst", "$20");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// add sp,s
		case 0xe8:
			get_byte();
			print_instruction_2_args("add", "sp", format_signed_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// jp hl
		case 0xe9:
			print_instruction_1_args("jp", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld (?),a
		case 0xea:
			get_word();
			print_instruction_2_args("ld", format_indirect_address_hex(arg), "a");
			print_comment(3);
			if(!find) printf("\n");
			break;

		// xor x
		case 0xee:
			get_byte();
			print_instruction_1_args("xor", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $28
		case 0xef:
			print_instruction_1_args("rst", "$28");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ldh a,(x)
		case 0xf0:
			get_byte();
			print_instruction_2_args("ldh", "a", format_indirect_high_address_hex(arg));
			print_comment(2);
			if(!find) printf("\n");
			break;

		// pop af
		case 0xf1:
			print_instruction_1_args("pop", "af");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,($ff00+c)
		case 0xf2:
			print_instruction_2_args("ld", "a", "($ff00+c)");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// di
		case 0xf3:
			print_instruction_0_args("di");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// push af
		case 0xf5:
			print_instruction_1_args("push", "af");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// or x
		case 0xf6:
			get_byte();
			print_instruction_1_args("or", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $30
		case 0xf7:
			print_instruction_1_args("rst", "$30");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld hl,sp+s
		case 0xf8:
			get_byte();
			print_instruction_2_args("ld", "hl", format_relative_sp_hex(arg));
			print_comment(2);
			if(!find) printf("\n");
			break;

		// ld sp,hl
		case 0xf9:
			print_instruction_2_args("ld", "sp", "hl");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// ld a,(?)
		case 0xfa:
			get_word();
			print_instruction_2_args("ld", "a", format_indirect_address_hex(arg));
			print_comment(3);
			if(!find) printf("\n");
			break;

		// ei
		case 0xfb:
			print_instruction_0_args("ei");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

		// cp x
		case 0xfe:
			get_byte();
			print_instruction_1_args("cp", format_byte_hex(arg));
			if(!find) printf("\t");
			print_comment(2);
			if(!find) printf("\n");
			break;

		// rst $38
		case 0xff:
			print_instruction_1_args("rst", "$38");
			if(!find) printf("\t");
			print_comment(1);
			if(!find) printf("\n");
			break;

