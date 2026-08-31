#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BA9A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BA9A4;

loc_801BA9A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x80350000u;
    r31 = (r31 + 1904);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -24712));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -24728));
    r30 = r3;
    r28 = (r31 + 120);
    r29 = (r31 + 0);
    r3 = (r5 | r4);
    r27 = -1;
    MemoryInline::FlatWrite32((r13 + -24712), r3);
    MemoryInline::FlatWrite32((r13 + -24728), r0);
    r4 = MemoryInline::FlatRead32((r13 + -24704));
    r5 = MemoryInline::FlatRead32((r13 + -24700));
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r4 | r0);
    r3 = (r5 | r3);
    MemoryInline::FlatWrite32((r13 + -24700), r3);
    MemoryInline::FlatWrite32((r13 + -24704), r0);
    goto loc_801BAA70;
}

loc_801BAA10:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
}

loc_801BAA20:
{
    r3 = (r3 & r27);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_801BAA2C;
    }
}

loc_801BAA28:
{
    goto loc_801BAA34;
}

loc_801BAA2C:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0 = (r3 + 32);
}

loc_801BAA34:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r5 = (63 - r0);
    r28_addr_2 = (r28 + r6);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
    r4 = 1;
    r3 = 0;
    r29_addr_2 = (r29 + r6);
    MemoryInline::FlatWrite16(r29_addr_2, static_cast<uint16_t>(r0));
    // inline leaf 0x80021A18 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80021A18
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r5 = ~(r3 | r3);
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r4 = ~(r4 | r4);
    r0 = (r0 & r5);
    r3 = (r3 & r4);
    MemoryInline::FlatWrite32((r13 + -24716), r3);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
}

loc_801BAA70:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BAA10;
    }
}

loc_801BAA80:
{
    r3 = (r31 + 240);
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r3 = r30;
    MemoryInline::FlatWrite32((r13 + -24608), r4);
    MemoryInline::FlatWrite32((r13 + -24612), r4);
    MemoryInline::FlatWrite32((r13 + -24668), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800274B gpr_write=0xF8000F7B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BA9A4 func_801BA9A4 preserves=true fpr_mask=0x00000000
