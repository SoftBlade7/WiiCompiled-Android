#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018FA08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8018F784_loc_0 = 0;
    uint32_t addr_lhax_8018F794_loc_0 = 0;
    uint32_t addr_lhax_8018F7AC_loc_0 = 0;
    uint32_t addr_lhax_8018F7B4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018FA08;

loc_8018FA08:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80340000u;
    r31 = (r31 + 18968);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r8 = (r31 + 16);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r9 = MemoryInline::FlatRead32((r3 + 24));
    r10 = MemoryInline::FlatRead32((r31 + 116));
    r8_addr_0 = (r8 + r9);
    r8 = MemoryInline::FlatRead8(r8_addr_0);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r8 = (r8 * 100);
    r10_addr_0 = (r10 + r8);
    MemoryInline::FlatWrite32(r10_addr_0, r3);
    r30 = (r10 + r8);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r5);
    MemoryInline::FlatWrite32((r30 + 16), r6);
    MemoryInline::FlatWrite32((r30 + 20), r7);
    // inline leaf 0x8018F75C (40 guest instruction(s))
}

loc_inl0_0x8018F75C:
{
    r4 = 0x80340000u;
    r7 = 0x80290000u;
    r0 = MemoryInline::FlatRead32((r4 + 19080));
    r7 = (r7 + -11256);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_inl0_0x8018F774:
{
    r4 = (127 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(127) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8018F7C0;
    }
}

loc_inl0_0x8018F77C:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = (r7 + 2448);
    addr_lhax_8018F784_loc_0 = (r5 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F784_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r4 = (r7 + 2704);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    addr_lhax_8018F794_loc_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F794_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead16((r7 + 2448));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    addr_lhax_8018F7AC_loc_0 = (r4 + r6);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F7AC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    addr_lhax_8018F7B4_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_8018F7B4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_inl0_cont_8018F75C;
}

loc_inl0_0x8018F7C0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r7 + 1936);
    r6_addr_1 = (r6 + r0);
    r5 = MemoryInline::FlatRead32(r6_addr_1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r5);
    r6_addr_2 = (r6 + r4);
    r4 = MemoryInline::FlatRead32(r6_addr_2);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r4 = MemoryInline::FlatRead32((r7 + 1936));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r4 = MemoryInline::FlatRead32((r6 + 508));
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_inl0_cont_8018F75C:
{
    // end of inlined leaf 0x8018F75C
}

loc_8018FA78:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(-904))) {
        goto loc_8018FA84;
    }
}

loc_8018FA7C:
{
    r0 = 0;
    goto loc_8018FAAC;
}

loc_8018FA84:
{
}

loc_8018FA88:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(60))) {
        goto loc_8018FA98;
    }
}

loc_8018FA8C:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FAAC;
}

loc_8018FA98:
{
    r0 = (r29 + 904);
    r3 = 0x80290000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + -11256);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_8018FAAC:
{
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    r29 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8018FABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018FCCC;
    }
}

loc_8018FAC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018FAD0;
    }
}

loc_8018FAC4:
{
}

loc_8018FAC8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8018FADC;
    }
}

loc_8018FACC:
{
    goto loc_80190194;
}

loc_8018FAD0:
{
}

loc_8018FAD4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80190194;
    }
}

loc_8018FAD8:
{
    goto loc_8018FEDC;
}

loc_8018FADC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + r0);
}

loc_8018FAEC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FAF8;
    }
}

loc_8018FAF0:
{
    r0 = 0;
    goto loc_8018FB20;
}

loc_8018FAF8:
{
}

loc_8018FAFC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FB0C;
    }
}

loc_8018FB00:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FB20;
}

loc_8018FB0C:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 + -11256);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
}

loc_8018FB20:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + r0);
}

loc_8018FB34:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FB40;
    }
}

loc_8018FB38:
{
    r0 = 0;
    goto loc_8018FB68;
}

loc_8018FB40:
{
}

loc_8018FB44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FB54;
    }
}

loc_8018FB48:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FB68;
}

loc_8018FB54:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r3 + -11256);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
}

loc_8018FB68:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_8018FB80:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FB8C;
    }
}

loc_8018FB84:
{
    r0 = 0;
    goto loc_8018FBB4;
}

loc_8018FB8C:
{
}

loc_8018FB90:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FBA0;
    }
}

loc_8018FB94:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FBB4;
}

loc_8018FBA0:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r3 + -11256);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_7);
}

loc_8018FBB4:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FBD0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FBDC;
    }
}

loc_8018FBD4:
{
    r0 = 0;
    goto loc_8018FC04;
}

loc_8018FBDC:
{
}

loc_8018FBE0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FBF0;
    }
}

loc_8018FBE4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FC04;
}

loc_8018FBF0:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r3 + -11256);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_9);
}

loc_8018FC04:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FC20:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FC2C;
    }
}

loc_8018FC24:
{
    r0 = 0;
    goto loc_8018FC54;
}

loc_8018FC2C:
{
}

loc_8018FC30:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FC40;
    }
}

loc_8018FC34:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FC54;
}

loc_8018FC40:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r3 = (r3 + -11256);
    r3_addr_11 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_11);
}

loc_8018FC54:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_8018FC74:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FC80;
    }
}

loc_8018FC78:
{
    r0 = 0;
    goto loc_8018FCA8;
}

loc_8018FC80:
{
}

loc_8018FC84:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FC94;
    }
}

loc_8018FC88:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FCA8;
}

loc_8018FC94:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r3 = (r3 + -11256);
    r3_addr_13 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_13);
}

loc_8018FCA8:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_80190194;
}

loc_8018FCCC:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FCE4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FCF0;
    }
}

loc_8018FCE8:
{
    r0 = 0;
    goto loc_8018FD18;
}

loc_8018FCF0:
{
}

loc_8018FCF4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FD04;
    }
}

loc_8018FCF8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FD18;
}

loc_8018FD04:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r3 = (r3 + -11256);
    r3_addr_31 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_31);
}

loc_8018FD18:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FD34:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FD40;
    }
}

loc_8018FD38:
{
    r0 = 0;
    goto loc_8018FD68;
}

loc_8018FD40:
{
}

loc_8018FD44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FD54;
    }
}

loc_8018FD48:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FD68;
}

loc_8018FD54:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r3 = (r3 + -11256);
    r3_addr_33 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_33);
}

loc_8018FD68:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_8018FD80:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FD8C;
    }
}

loc_8018FD84:
{
    r0 = 0;
    goto loc_8018FDB4;
}

loc_8018FD8C:
{
}

loc_8018FD90:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FDA0;
    }
}

loc_8018FD94:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FDB4;
}

loc_8018FDA0:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r3 = (r3 + -11256);
    r3_addr_35 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_35);
}

loc_8018FDB4:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FDD8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FDE4;
    }
}

loc_8018FDDC:
{
    r0 = 0;
    goto loc_8018FE0C;
}

loc_8018FDE4:
{
}

loc_8018FDE8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FDF8;
    }
}

loc_8018FDEC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FE0C;
}

loc_8018FDF8:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_39 & -2);
    r3 = (r3 + -11256);
    r3_addr_37 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_37);
}

loc_8018FE0C:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FE30:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FE3C;
    }
}

loc_8018FE34:
{
    r0 = 0;
    goto loc_8018FE64;
}

loc_8018FE3C:
{
}

loc_8018FE40:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FE50;
    }
}

loc_8018FE44:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FE64;
}

loc_8018FE50:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r3 = (r3 + -11256);
    r3_addr_39 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_39);
}

loc_8018FE64:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_8018FE84:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FE90;
    }
}

loc_8018FE88:
{
    r0 = 0;
    goto loc_8018FEB8;
}

loc_8018FE90:
{
}

loc_8018FE94:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FEA4;
    }
}

loc_8018FE98:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FEB8;
}

loc_8018FEA4:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r3 = (r3 + -11256);
    r3_addr_41 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_41);
}

loc_8018FEB8:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_80190194;
}

loc_8018FEDC:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FEF4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FF00;
    }
}

loc_8018FEF8:
{
    r0 = 0;
    goto loc_8018FF28;
}

loc_8018FF00:
{
}

loc_8018FF04:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FF14;
    }
}

loc_8018FF08:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FF28;
}

loc_8018FF14:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & -2);
    r3 = (r3 + -11256);
    r3_addr_15 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_15);
}

loc_8018FF28:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FF44:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FF50;
    }
}

loc_8018FF48:
{
    r0 = 0;
    goto loc_8018FF78;
}

loc_8018FF50:
{
}

loc_8018FF54:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FF64;
    }
}

loc_8018FF58:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FF78;
}

loc_8018FF64:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & -2);
    r3 = (r3 + -11256);
    r3_addr_17 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_17);
}

loc_8018FF78:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FF94:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FFA0;
    }
}

loc_8018FF98:
{
    r0 = 0;
    goto loc_8018FFC8;
}

loc_8018FFA0:
{
}

loc_8018FFA4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8018FFB4;
    }
}

loc_8018FFA8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_8018FFC8;
}

loc_8018FFB4:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r3 = (r3 + -11256);
    r3_addr_19 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_19);
}

loc_8018FFC8:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8018FFE4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_8018FFF0;
    }
}

loc_8018FFE8:
{
    r0 = 0;
    goto loc_80190018;
}

loc_8018FFF0:
{
}

loc_8018FFF4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80190004;
    }
}

loc_8018FFF8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80190018;
}

loc_80190004:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r3 = (r3 + -11256);
    r3_addr_21 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_21);
}

loc_80190018:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8019003C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80190048;
    }
}

loc_80190040:
{
    r0 = 0;
    goto loc_80190070;
}

loc_80190048:
{
}

loc_8019004C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8019005C;
    }
}

loc_80190050:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80190070;
}

loc_8019005C:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & -2);
    r3 = (r3 + -11256);
    r3_addr_23 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_23);
}

loc_80190070:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80190094:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_801900A0;
    }
}

loc_80190098:
{
    r0 = 0;
    goto loc_801900C8;
}

loc_801900A0:
{
}

loc_801900A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_801900B4;
    }
}

loc_801900A8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_801900C8;
}

loc_801900B4:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r3 = (r3 + -11256);
    r3_addr_25 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_25);
}

loc_801900C8:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_801900EC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_801900F8;
    }
}

loc_801900F0:
{
    r0 = 0;
    goto loc_80190120;
}

loc_801900F8:
{
}

loc_801900FC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8019010C;
    }
}

loc_80190100:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80190120;
}

loc_8019010C:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r3 = (r3 + -11256);
    r3_addr_27 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_27);
}

loc_80190120:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80190144:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80190150;
    }
}

loc_80190148:
{
    r0 = 0;
    goto loc_80190178;
}

loc_80190150:
{
}

loc_80190154:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80190164;
    }
}

loc_80190158:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80190178;
}

loc_80190164:
{
    r0 = (r3 + 904);
    r3 = 0x80290000u;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r3 = (r3 + -11256);
    r3_addr_29 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_29);
}

loc_80190178:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r0 = 0;
    r29 = (r29 | -2147483648);
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_80190194:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead16((r30 + 48));
    r0 = 0;
    r31 = r3;
    r3 = (r28 + 62);
    MemoryInline::FlatWrite16((r28 + 146), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r28 + 148), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 52));
}

loc_801901B8:
{
    MemoryInline::FlatWrite16((r28 + 60), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801901C4;
    }
}

loc_801901C0:
{
    r29 = (r29 | 1);
}

loc_801901C4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 56));
}

loc_801901D4:
{
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801901E0;
    }
}

loc_801901DC:
{
    r29 = (r29 | 2);
}

loc_801901E0:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 64));
}

loc_801901F0:
{
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801901FC;
    }
}

loc_801901F8:
{
    r29 = (r29 | 65536);
}

loc_801901FC:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 68));
}

loc_8019020C:
{
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80190218;
    }
}

loc_80190214:
{
    r29 = (r29 | 131072);
}

loc_80190218:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 76));
}

loc_80190228:
{
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80190234;
    }
}

loc_80190230:
{
    r29 = (r29 | 2097152);
}

loc_80190234:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 80));
}

loc_80190244:
{
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80190250;
    }
}

loc_8019024C:
{
    r29 = (r29 | 4194304);
}

loc_80190250:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 88));
}

loc_80190260:
{
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019026C;
    }
}

loc_80190268:
{
    r29 = (r29 | 67108864);
}

loc_8019026C:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 92));
}

loc_8019027C:
{
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80190288;
    }
}

loc_80190284:
{
    r29 = (r29 | 134217728);
}

loc_80190288:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 60));
}

loc_80190298:
{
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801902A4;
    }
}

loc_801902A0:
{
    r29 = (r29 | 8);
}

loc_801902A4:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 72));
}

loc_801902B4:
{
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 34), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801902C0;
    }
}

loc_801902BC:
{
    r29 = (r29 | 524288);
}

loc_801902C0:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 84));
}

loc_801902D0:
{
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 38), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801902DC;
    }
}

loc_801902D8:
{
    r29 = (r29 | 16777216);
}

loc_801902DC:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801902EC:
{
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r3 + 42), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801902F8;
    }
}

loc_801902F4:
{
    r29 = (r29 | 536870912);
}

loc_801902F8:
{
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r30 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r3 + 44), static_cast<uint16_t>(r30));
    r3 = (r28 + 258);
    r0 = (r0 | 274);
    r4 = 0;
    MemoryInline::FlatWrite32((r28 + 52), r29);
    r5 = 32;
    MemoryInline::FlatWrite32((r28 + 28), r0);
    ctx->lr = 0x80190320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r3 = r31;
    MemoryInline::FlatWrite16((r28 + 256), static_cast<uint16_t>(r30));
    r0 = (r0 | 50331648);
    MemoryInline::FlatWrite32((r28 + 28), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8018FA08 func_8018FA08 preserves=true fpr_mask=0x00000000
