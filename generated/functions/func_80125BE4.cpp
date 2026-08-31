#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125BE4(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80125BE4;

loc_80125BE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 7811;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -26380));
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    // inline leaf 0x80126E30 (3 guest instruction(s))
    r3 = 0x80300000u;
    r3 = (r3 + -32192);
    // end of inlined leaf 0x80126E30
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    r4 = (r4 + 2);
    r3 = (r3 + 4126);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80125C74:
{
    MemoryInline::FlatWrite32((r13 + -26388), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125CE0;
    }
}

loc_80125C7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80125C8C;
    }
}

loc_80125C80:
{
}

loc_80125C84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80125C98;
    }
}

loc_80125C88:
{
    goto loc_80125D6C;
}

loc_80125C8C:
{
}

loc_80125C90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80125D6C;
    }
}

loc_80125C94:
{
    goto loc_80125D28;
}

loc_80125C98:
{
    r3 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 733);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    goto loc_80125D6C;
}

loc_80125CE0:
{
    r3 = 2;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 829);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    goto loc_80125D6C;
}

loc_80125D28:
{
    r3 = 3;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 925);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_80125D6C:
{
    // inline leaf 0x80127AB8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    // end of inlined leaf 0x80127AB8
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    r5 = (r3 + 2);
}

loc_80125DBC:
{
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801260E8;
    }
}

loc_80125DC4:
{
    r3 = (r1 + 8);
    // inline leaf 0x801254A8 (13 guest instruction(s))
}

loc_inl2_0x801254A8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26416));
}

loc_inl2_0x801254B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x801254D0;
    }
}

loc_inl2_0x801254B4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl2_cont_801254A8;
}

loc_inl2_0x801254D0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl2_cont_801254A8:
{
    // end of inlined leaf 0x801254A8
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80125DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125F54;
    }
}

loc_80125DD8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 8;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead16((r13 + -26396));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801254F8 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801254F8
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801254DC (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801254DC
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x80125518 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 384);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80125518
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x80125538 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 768);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80125538
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_10 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x80125558 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80125558
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 3036);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_80125F54:
{
    r3 = (r1 + 8);
    // inline leaf 0x80125578 (13 guest instruction(s))
}

loc_inl8_0x80125578:
{
    r0 = MemoryInline::FlatRead32((r13 + -26420));
}

loc_inl8_0x80125580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x801255A0;
    }
}

loc_inl8_0x80125584:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl8_cont_80125578;
}

loc_inl8_0x801255A0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl8_cont_80125578:
{
    // end of inlined leaf 0x80125578
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80125F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801262F8;
    }
}

loc_80125F68:
{
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 9;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead16((r13 + -26398));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801255C8 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801255C8
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801255AC (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801255AC
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801255E8 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 384);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801255E8
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_16 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x80125608 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 768);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80125608
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x80125628 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80125628
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 3036);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    goto loc_801262F8;
}

loc_801260E8:
{
    r3 = (r1 + 8);
    // inline leaf 0x801254A8 (13 guest instruction(s))
}

loc_inl14_0x801254A8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26416));
}

loc_inl14_0x801254B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x801254D0;
    }
}

loc_inl14_0x801254B4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl14_cont_801254A8;
}

loc_inl14_0x801254D0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl14_cont_801254A8:
{
    // end of inlined leaf 0x801254A8
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801260F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80126198;
    }
}

loc_801260FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 5;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead16((r13 + -26396));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801254DC (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 16832);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801254DC
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_20 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_80126198:
{
    r3 = (r1 + 8);
    // inline leaf 0x80125578 (13 guest instruction(s))
}

loc_inl16_0x80125578:
{
    r0 = MemoryInline::FlatRead32((r13 + -26420));
}

loc_inl16_0x80125580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl16_0x801255A0;
    }
}

loc_inl16_0x80125584:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl16_cont_80125578;
}

loc_inl16_0x801255A0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl16_cont_80125578:
{
    // end of inlined leaf 0x80125578
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801261A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80126248;
    }
}

loc_801261AC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 6;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead16((r13 + -26398));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_22 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x801255AC (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 21440);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x801255AC
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_80126248:
{
    r3 = (r1 + 8);
    // inline leaf 0x80125648 (13 guest instruction(s))
}

loc_inl18_0x80125648:
{
    r0 = MemoryInline::FlatRead32((r13 + -26424));
}

loc_inl18_0x80125650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl18_0x80125670;
    }
}

loc_inl18_0x80125654:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 26048);
    r0 = (r0 * 1152);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl18_cont_80125648;
}

loc_inl18_0x80125670:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl18_cont_80125648:
{
    // end of inlined leaf 0x80125648
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80126258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801262F8;
    }
}

loc_8012625C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 7;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead16((r13 + -26400));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_25 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    // inline leaf 0x8012567C (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26468));
    r4 = 0x802F0000u;
    r4 = (r4 + 26048);
    r0 = (r0 * 1152);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8012567C
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_26 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_801262F8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26392));
}

loc_80126300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012637C;
    }
}

loc_80126304:
{
    r5 = MemoryInline::FlatRead32((r13 + -26380));
    r6 = 10;
    r3 = 65536;
    r4 = 0x80280000u;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    r4 = (r4 + -6048);
    r3 = (r3 + -32768);
    r5 = MemoryInline::FlatRead32((r13 + -26380));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_28 & 65535);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r6));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 1850);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_8012637C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r0 = 13;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_30 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_31 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_32 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_33 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    r4 = (r4 + 2);
    r3 = (r3 + 409);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80126454:
{
    MemoryInline::FlatWrite32((r13 + -26388), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801264DC;
    }
}

loc_8012645C:
{
    r0 = 12;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_34 & 65535);
    r5 = MemoryInline::FlatRead32((r13 + -26380));
    r4 = MemoryInline::FlatRead16((r13 + -26394));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r29));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 1195);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    goto loc_80126558;
}

loc_801264DC:
{
    r0 = 11;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_35 & 65535);
    r5 = MemoryInline::FlatRead32((r13 + -26380));
    r4 = MemoryInline::FlatRead16((r13 + -26394));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -26380), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r29));
    r4 = MemoryInline::FlatRead32((r13 + -26380));
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r4 + 2);
    r0 = (r3 + 1172);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
}

loc_80126558:
{
    r0 = 14;
    r3 = r31;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = 128;
    r5 = MemoryInline::FlatRead32((r13 + -26380));
    r6 = MemoryInline::FlatRead32((r13 + -26388));
    r5 = (r5 + 2);
    r0 = (r6 + 30);
    MemoryInline::FlatWrite32((r13 + -26380), r5);
    MemoryInline::FlatWrite32((r13 + -26388), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000207B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80125BE4 func_80125BE4 preserves=true fpr_mask=0x00000000
