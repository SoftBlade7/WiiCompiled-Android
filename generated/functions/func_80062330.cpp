#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80062330(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80062330;

loc_80062330:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062464;
    }
}

loc_80062358:
{
    r27 = 0x802C0000u;
    r28 = 0x802C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r27 = (r27 + -32288);
    r28 = (r28 + -32576);
    r30 = 0;
    r29 = 0;
    r31 = 1;
}

loc_80062378:
{
    r4 = r30;
    r3 = (r1 + 8);
    // inline leaf 0x800507F0 (15 guest instruction(s))
}

loc_inl1_0x800507F0:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800507F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80050824;
    }
}

loc_inl1_0x800507FC:
{
}

loc_inl1_0x80050800:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl1_0x80050824;
    }
}

loc_inl1_0x80050804:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead32(r5);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_inl1_cont_800507F0;
}

loc_inl1_0x80050824:
{
    r3 = 0;
}

loc_inl1_cont_800507F0:
{
    // end of inlined leaf 0x800507F0
}

loc_80062388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006244C;
    }
}

loc_8006238C:
{
    r4 = r30;
    r3 = (r1 + 8);
    // inline leaf 0x80050790 (11 guest instruction(s))
}

loc_inl2_0x80050790:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x80050798:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x800507B4;
    }
}

loc_inl2_0x8005079C:
{
}

loc_inl2_0x800507A0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800507B4;
    }
}

loc_inl2_0x800507A4:
{
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    goto loc_inl2_cont_80050790;
}

loc_inl2_0x800507B4:
{
    r3 = 0;
}

loc_inl2_cont_80050790:
{
    // end of inlined leaf 0x80050790
    r4 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r0 = MemoryInline::FlatRead16((r27 + 96));
    r6 = (r4 & 65535);
    r0 = (r0 & r6);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062408;
    }
}

loc_800623AC:
{
    r4 = MemoryInline::FlatRead32(r3);
    r7 = 0;
    r27_addr_2 = (r27 + r29);
    r0 = MemoryInline::FlatRead32(r27_addr_2);
    r8 = 0;
}

loc_800623C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800623DC;
    }
}

loc_800623C4:
{
    r4 = (r27 + r29);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800623D4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_800623DC;
    }
}

loc_800623D8:
{
    r8 = 1;
}

loc_800623DC:
{
}

loc_800623E0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80062400;
    }
}

loc_800623E4:
{
    r0 = (r30 * 12);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_800623F8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80062400;
    }
}

loc_800623FC:
{
    r7 = 1;
}

loc_80062400:
{
}

loc_80062404:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006244C;
    }
}

loc_80062408:
{
    r5 = MemoryInline::FlatRead16((r27 + 96));
    r0 = (r30 * 12);
    r4 = r30;
    r5 = (r5 | r6);
    MemoryInline::FlatWriteRam16((r27 + 96), static_cast<uint16_t>(r5));
    r6 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r6, r5);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r6 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170FA8u>(ctx);
    r3 = MemoryInline::FlatRead8((r28 + 256));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWriteRam8((r28 + 256), static_cast<uint8_t>(r0));
}

loc_8006244C:
{
    r30 = (r30 + 1);
    r29 = (r29 + 12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
}

loc_80062458:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80062378;
    }
}

loc_8006245C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
}

loc_80062464:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80021FB gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80062330 func_80062330 preserves=true fpr_mask=0x00000000
